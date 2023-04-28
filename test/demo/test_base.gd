extends Node

var test_passes := 0
var test_failures := 0

func __get_stack_frame():
	var me = get_script()
	for s in get_stack():
		if s.source == me.resource_path:
			return s
	return null

func assert_equal(actual, expected):
	if actual == expected:
		test_passes += 1
	else:
		var s = __get_stack_frame()
		print (" == FAILURE: In function %s() from '%s' on line %s" % [s.function, s.source, s.line])
		print ("    |-> Expected '%s' but got '%s'" % [expected, actual])
		test_failures += 1

func assert_true(v):
		assert_equal(v, true)

func assert_false(v):
		assert_equal(v, false)

func exit_with_status() -> void:
	var success: bool = (test_failures == 0)
	if success:
		print(" **** TESTS PASS ****")
	else:
		print(" **** TESTS FAILED ****")

	get_tree().quit(0 if success else 1)

/**************************************************************************/
/*  godot.hpp                                                             */
/**************************************************************************/
/*                         This file is part of:                          */
/*                             GODOT ENGINE                               */
/*                        https://godotengine.org                         */
/**************************************************************************/
/* Copyright (c) 2014-present Godot Engine contributors (see AUTHORS.md). */
/* Copyright (c) 2007-2014 Juan Linietsky, Ariel Manzur.                  */
/*                                                                        */
/* Permission is hereby granted, free of charge, to any person obtaining  */
/* a copy of this software and associated documentation files (the        */
/* "Software"), to deal in the Software without restriction, including    */
/* without limitation the rights to use, copy, modify, merge, publish,    */
/* distribute, sublicense, and/or sell copies of the Software, and to     */
/* permit persons to whom the Software is furnished to do so, subject to  */
/* the following conditions:                                              */
/*                                                                        */
/* The above copyright notice and this permission notice shall be         */
/* included in all copies or substantial portions of the Software.        */
/*                                                                        */
/* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,        */
/* EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF     */
/* MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. */
/* IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY   */
/* CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,   */
/* TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE      */
/* SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.                 */
/**************************************************************************/

#ifndef GODOT_GODOT_HPP
#define GODOT_GODOT_HPP

#include <gdextension_interface.h>

namespace godot {

struct GDExtensionInterface {
	GDExtensionGodotVersion godot_version;

	GDExtensionInterfaceGetGodotVersion get_godot_version;

	GDExtensionInterfaceMemAlloc mem_alloc;
	GDExtensionInterfaceMemRealloc mem_realloc;
	GDExtensionInterfaceMemFree mem_free;

	GDExtensionInterfacePrintError print_error;
	GDExtensionInterfacePrintErrorWithMessage print_error_with_message;
	GDExtensionInterfacePrintWarning print_warning;
	GDExtensionInterfacePrintWarningWithMessage print_warning_with_message;
	GDExtensionInterfacePrintScriptError print_script_error;
	GDExtensionInterfacePrintScriptErrorWithMessage print_script_error_with_message;

	GDExtensionInterfaceGetNativeStructSize get_native_struct_size;

	GDExtensionInterfaceVariantNewCopy variant_new_copy;
	GDExtensionInterfaceVariantNewNil variant_new_nil;
	GDExtensionInterfaceVariantDestroy variant_destroy;

	GDExtensionInterfaceVariantCall variant_call;
	GDExtensionInterfaceVariantCallStatic variant_call_static;
	GDExtensionInterfaceVariantEvaluate variant_evaluate;
	GDExtensionInterfaceVariantSet variant_set;
	GDExtensionInterfaceVariantSetNamed variant_set_named;
	GDExtensionInterfaceVariantSetKeyed variant_set_keyed;
	GDExtensionInterfaceVariantSetIndexed variant_set_indexed;
	GDExtensionInterfaceVariantGet variant_get;
	GDExtensionInterfaceVariantGetNamed variant_get_named;
	GDExtensionInterfaceVariantGetKeyed variant_get_keyed;
	GDExtensionInterfaceVariantGetIndexed variant_get_indexed;
	GDExtensionInterfaceVariantIterInit variant_iter_init;
	GDExtensionInterfaceVariantIterNext variant_iter_next;
	GDExtensionInterfaceVariantIterGet variant_iter_get;
	GDExtensionInterfaceVariantHash variant_hash;
	GDExtensionInterfaceVariantRecursiveHash variant_recursive_hash;
	GDExtensionInterfaceVariantHashCompare variant_hash_compare;
	GDExtensionInterfaceVariantBooleanize variant_booleanize;
	GDExtensionInterfaceVariantDuplicate variant_duplicate;
	GDExtensionInterfaceVariantStringify variant_stringify;

	GDExtensionInterfaceVariantGetType variant_get_type;
	GDExtensionInterfaceVariantHasMethod variant_has_method;
	GDExtensionInterfaceVariantHasMember variant_has_member;
	GDExtensionInterfaceVariantHasKey variant_has_key;
	GDExtensionInterfaceVariantGetTypeName variant_get_type_name;
	GDExtensionInterfaceVariantCanConvert variant_can_convert;
	GDExtensionInterfaceVariantCanConvertStrict variant_can_convert_strict;

	GDExtensionInterfaceGetVariantFromTypeConstructor get_variant_from_type_constructor;
	GDExtensionInterfaceGetVariantToTypeConstructor get_variant_to_type_constructor;
	GDExtensionInterfaceVariantGetPtrOperatorEvaluator variant_get_ptr_operator_evaluator;
	GDExtensionInterfaceVariantGetPtrBuiltinMethod variant_get_ptr_builtin_method;
	GDExtensionInterfaceVariantGetPtrConstructor variant_get_ptr_constructor;
	GDExtensionInterfaceVariantGetPtrDestructor variant_get_ptr_destructor;
	GDExtensionInterfaceVariantConstruct variant_construct;
	GDExtensionInterfaceVariantGetPtrSetter variant_get_ptr_setter;
	GDExtensionInterfaceVariantGetPtrGetter variant_get_ptr_getter;
	GDExtensionInterfaceVariantGetPtrIndexedSetter variant_get_ptr_indexed_setter;
	GDExtensionInterfaceVariantGetPtrIndexedGetter variant_get_ptr_indexed_getter;
	GDExtensionInterfaceVariantGetPtrKeyedSetter variant_get_ptr_keyed_setter;
	GDExtensionInterfaceVariantGetPtrKeyedGetter variant_get_ptr_keyed_getter;
	GDExtensionInterfaceVariantGetPtrKeyedChecker variant_get_ptr_keyed_checker;
	GDExtensionInterfaceVariantGetConstantValue variant_get_constant_value;
	GDExtensionInterfaceVariantGetPtrUtilityFunction variant_get_ptr_utility_function;

	GDExtensionInterfaceStringNewWithLatin1Chars string_new_with_latin1_chars;
	GDExtensionInterfaceStringNewWithUtf8Chars string_new_with_utf8_chars;
	GDExtensionInterfaceStringNewWithUtf16Chars string_new_with_utf16_chars;
	GDExtensionInterfaceStringNewWithUtf32Chars string_new_with_utf32_chars;
	GDExtensionInterfaceStringNewWithWideChars string_new_with_wide_chars;
	GDExtensionInterfaceStringNewWithLatin1CharsAndLen string_new_with_latin1_chars_and_len;
	GDExtensionInterfaceStringNewWithUtf8CharsAndLen string_new_with_utf8_chars_and_len;
	GDExtensionInterfaceStringNewWithUtf16CharsAndLen string_new_with_utf16_chars_and_len;
	GDExtensionInterfaceStringNewWithUtf32CharsAndLen string_new_with_utf32_chars_and_len;
	GDExtensionInterfaceStringNewWithWideCharsAndLen string_new_with_wide_chars_and_len;
	GDExtensionInterfaceStringToLatin1Chars string_to_latin1_chars;
	GDExtensionInterfaceStringToUtf8Chars string_to_utf8_chars;
	GDExtensionInterfaceStringToUtf16Chars string_to_utf16_chars;
	GDExtensionInterfaceStringToUtf32Chars string_to_utf32_chars;
	GDExtensionInterfaceStringToWideChars string_to_wide_chars;
	GDExtensionInterfaceStringOperatorIndex string_operator_index;
	GDExtensionInterfaceStringOperatorIndexConst string_operator_index_const;

	GDExtensionInterfaceStringOperatorPlusEqString string_operator_plus_eq_string;
	GDExtensionInterfaceStringOperatorPlusEqChar string_operator_plus_eq_char;
	GDExtensionInterfaceStringOperatorPlusEqCstr string_operator_plus_eq_cstr;
	GDExtensionInterfaceStringOperatorPlusEqWcstr string_operator_plus_eq_wcstr;
	GDExtensionInterfaceStringOperatorPlusEqC32str string_operator_plus_eq_c32str;

	GDExtensionInterfaceXmlParserOpenBuffer xml_parser_open_buffer;

	GDExtensionInterfaceFileAccessStoreBuffer file_access_store_buffer;
	GDExtensionInterfaceFileAccessGetBuffer file_access_get_buffer;

	GDExtensionInterfaceWorkerThreadPoolAddNativeGroupTask worker_thread_pool_add_native_group_task;
	GDExtensionInterfaceWorkerThreadPoolAddNativeTask worker_thread_pool_add_native_task;

	GDExtensionInterfacePackedByteArrayOperatorIndex packed_byte_array_operator_index;
	GDExtensionInterfacePackedByteArrayOperatorIndexConst packed_byte_array_operator_index_const;
	GDExtensionInterfacePackedColorArrayOperatorIndex packed_color_array_operator_index;
	GDExtensionInterfacePackedColorArrayOperatorIndexConst packed_color_array_operator_index_const;
	GDExtensionInterfacePackedFloat32ArrayOperatorIndex packed_float32_array_operator_index;
	GDExtensionInterfacePackedFloat32ArrayOperatorIndexConst packed_float32_array_operator_index_const;
	GDExtensionInterfacePackedFloat64ArrayOperatorIndex packed_float64_array_operator_index;
	GDExtensionInterfacePackedFloat64ArrayOperatorIndexConst packed_float64_array_operator_index_const;
	GDExtensionInterfacePackedInt32ArrayOperatorIndex packed_int32_array_operator_index;
	GDExtensionInterfacePackedInt32ArrayOperatorIndexConst packed_int32_array_operator_index_const;
	GDExtensionInterfacePackedInt64ArrayOperatorIndex packed_int64_array_operator_index;
	GDExtensionInterfacePackedInt64ArrayOperatorIndexConst packed_int64_array_operator_index_const;
	GDExtensionInterfacePackedStringArrayOperatorIndex packed_string_array_operator_index;
	GDExtensionInterfacePackedStringArrayOperatorIndexConst packed_string_array_operator_index_const;
	GDExtensionInterfacePackedVector2ArrayOperatorIndex packed_vector2_array_operator_index;
	GDExtensionInterfacePackedVector2ArrayOperatorIndexConst packed_vector2_array_operator_index_const;
	GDExtensionInterfacePackedVector3ArrayOperatorIndex packed_vector3_array_operator_index;
	GDExtensionInterfacePackedVector3ArrayOperatorIndexConst packed_vector3_array_operator_index_const;
	GDExtensionInterfaceArrayOperatorIndex array_operator_index;
	GDExtensionInterfaceArrayOperatorIndexConst array_operator_index_const;
	GDExtensionInterfaceArrayRef array_ref;
	GDExtensionInterfaceArraySetTyped array_set_typed;

	GDExtensionInterfaceDictionaryOperatorIndex dictionary_operator_index;
	GDExtensionInterfaceDictionaryOperatorIndexConst dictionary_operator_index_const;

	GDExtensionInterfaceObjectMethodBindCall object_method_bind_call;
	GDExtensionInterfaceObjectMethodBindPtrcall object_method_bind_ptrcall;
	GDExtensionInterfaceObjectDestroy object_destroy;
	GDExtensionInterfaceGlobalGetSingleton global_get_singleton;
	GDExtensionInterfaceObjectGetInstanceBinding object_get_instance_binding;
	GDExtensionInterfaceObjectSetInstanceBinding object_set_instance_binding;
	GDExtensionInterfaceObjectSetInstance object_set_instance;
	GDExtensionInterfaceObjectCastTo object_cast_to;
	GDExtensionInterfaceObjectGetInstanceFromId object_get_instance_from_id;
	GDExtensionInterfaceObjectGetInstanceId object_get_instance_id;

	GDExtensionInterfaceRefGetObject ref_get_object;
	GDExtensionInterfaceRefSetObject ref_set_object;

	GDExtensionInterfaceScriptInstanceCreate script_instance_create;

	GDExtensionInterfaceClassdbConstructObject classdb_construct_object;
	GDExtensionInterfaceClassdbGetMethodBind classdb_get_method_bind;
	GDExtensionInterfaceClassdbGetClassTag classdb_get_class_tag;

	GDExtensionInterfaceClassdbRegisterExtensionClass classdb_register_extension_class;
	GDExtensionInterfaceClassdbRegisterExtensionClassMethod classdb_register_extension_class_method;
	GDExtensionInterfaceClassdbRegisterExtensionClassIntegerConstant classdb_register_extension_class_integer_constant;
	GDExtensionInterfaceClassdbRegisterExtensionClassProperty classdb_register_extension_class_property;
	GDExtensionInterfaceClassdbRegisterExtensionClassPropertyGroup classdb_register_extension_class_property_group;
	GDExtensionInterfaceClassdbRegisterExtensionClassPropertySubgroup classdb_register_extension_class_property_subgroup;
	GDExtensionInterfaceClassdbRegisterExtensionClassSignal classdb_register_extension_class_signal;
	GDExtensionInterfaceClassdbUnregisterExtensionClass classdb_unregister_extension_class;

	GDExtensionInterfaceGetLibraryPath get_library_path;

};

namespace internal {

extern "C" GDExtensionInterface *gde_interface;
extern "C" GDExtensionClassLibraryPtr library;
extern "C" void *token;

} // namespace internal

enum ModuleInitializationLevel {
	MODULE_INITIALIZATION_LEVEL_CORE = GDEXTENSION_INITIALIZATION_CORE,
	MODULE_INITIALIZATION_LEVEL_SERVERS = GDEXTENSION_INITIALIZATION_SERVERS,
	MODULE_INITIALIZATION_LEVEL_SCENE = GDEXTENSION_INITIALIZATION_SCENE,
	MODULE_INITIALIZATION_LEVEL_EDITOR = GDEXTENSION_INITIALIZATION_EDITOR
};

class GDExtensionBinding {
private:
	static GDExtensionInterface gdextension_interface;
	static void register_engine_classes();

public:
	using Callback = void (*)(ModuleInitializationLevel p_level);

	static Callback init_callback;
	static Callback terminate_callback;
	static GDExtensionInitializationLevel minimum_initialization_level;
	static GDExtensionBool init(GDExtensionInterfaceGetProcAddress p_get_proc_address, GDExtensionClassLibraryPtr p_library, GDExtensionInitialization *r_initialization);

public:
	static void initialize_level(void *userdata, GDExtensionInitializationLevel p_level);
	static void deinitialize_level(void *userdata, GDExtensionInitializationLevel p_level);

	class InitObject {
		GDExtensionInterfaceGetProcAddress get_proc_address;
		GDExtensionClassLibraryPtr library;
		GDExtensionInitialization *initialization;

	public:
		InitObject(GDExtensionInterfaceGetProcAddress p_get_proc_address, GDExtensionClassLibraryPtr p_library, GDExtensionInitialization *r_initialization);

		void register_initializer(Callback p_init) const;
		void register_terminator(Callback p_init) const;
		void set_minimum_library_initialization_level(ModuleInitializationLevel p_level) const;

		GDExtensionBool init() const;
	};
};

} // namespace godot

#endif // GODOT_GODOT_HPP

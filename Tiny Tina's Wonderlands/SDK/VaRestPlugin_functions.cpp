#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class VaRestPlugin.VaRestJsonObject
// (None)

class UClass* UVaRestJsonObject::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VaRestJsonObject");

	return Clss;
}


// VaRestJsonObject VaRestPlugin.Default__VaRestJsonObject
// (Public, ClassDefaultObject, ArchetypeObject)

class UVaRestJsonObject* UVaRestJsonObject::GetDefaultObj()
{
	static class UVaRestJsonObject* Default = nullptr;

	if (!Default)
		Default = static_cast<UVaRestJsonObject*>(UVaRestJsonObject::StaticClass()->DefaultObject);

	return Default;
}


// Function VaRestPlugin.VaRestJsonObject.SetStringField
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      StringValue                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVaRestJsonObject::SetStringField(const class FString& FieldName, const class FString& StringValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestJsonObject", "SetStringField");

	Params::UVaRestJsonObject_SetStringField_Params Parms{};

	Parms.FieldName = FieldName;
	Parms.StringValue = StringValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VaRestPlugin.VaRestJsonObject.SetStringArrayField
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              StringArray                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UVaRestJsonObject::SetStringArrayField(const class FString& FieldName, TArray<class FString>& StringArray)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestJsonObject", "SetStringArrayField");

	Params::UVaRestJsonObject_SetStringArrayField_Params Parms{};

	Parms.FieldName = FieldName;
	Parms.StringArray = StringArray;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VaRestPlugin.VaRestJsonObject.SetObjectField
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVaRestJsonObject*           JsonObject                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVaRestJsonObject::SetObjectField(const class FString& FieldName, class UVaRestJsonObject* JsonObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestJsonObject", "SetObjectField");

	Params::UVaRestJsonObject_SetObjectField_Params Parms{};

	Parms.FieldName = FieldName;
	Parms.JsonObject = JsonObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VaRestPlugin.VaRestJsonObject.SetObjectArrayField
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UVaRestJsonObject*>   ObjectArray                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UVaRestJsonObject::SetObjectArrayField(const class FString& FieldName, TArray<class UVaRestJsonObject*>& ObjectArray)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestJsonObject", "SetObjectArrayField");

	Params::UVaRestJsonObject_SetObjectArrayField_Params Parms{};

	Parms.FieldName = FieldName;
	Parms.ObjectArray = ObjectArray;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VaRestPlugin.VaRestJsonObject.SetNumberField
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Number                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVaRestJsonObject::SetNumberField(const class FString& FieldName, float Number)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestJsonObject", "SetNumberField");

	Params::UVaRestJsonObject_SetNumberField_Params Parms{};

	Parms.FieldName = FieldName;
	Parms.Number = Number;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VaRestPlugin.VaRestJsonObject.SetNumberArrayField
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                      NumberArray                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UVaRestJsonObject::SetNumberArrayField(const class FString& FieldName, TArray<float>& NumberArray)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestJsonObject", "SetNumberArrayField");

	Params::UVaRestJsonObject_SetNumberArrayField_Params Parms{};

	Parms.FieldName = FieldName;
	Parms.NumberArray = NumberArray;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VaRestPlugin.VaRestJsonObject.SetField
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVaRestJsonValue*            JsonValue                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVaRestJsonObject::SetField(const class FString& FieldName, class UVaRestJsonValue* JsonValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestJsonObject", "SetField");

	Params::UVaRestJsonObject_SetField_Params Parms{};

	Parms.FieldName = FieldName;
	Parms.JsonValue = JsonValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VaRestPlugin.VaRestJsonObject.SetBoolField
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVaRestJsonObject::SetBoolField(const class FString& FieldName, bool InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestJsonObject", "SetBoolField");

	Params::UVaRestJsonObject_SetBoolField_Params Parms{};

	Parms.FieldName = FieldName;
	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VaRestPlugin.VaRestJsonObject.SetBoolArrayField
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<bool>                       BoolArray                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UVaRestJsonObject::SetBoolArrayField(const class FString& FieldName, TArray<bool>& BoolArray)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestJsonObject", "SetBoolArrayField");

	Params::UVaRestJsonObject_SetBoolArrayField_Params Parms{};

	Parms.FieldName = FieldName;
	Parms.BoolArray = BoolArray;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VaRestPlugin.VaRestJsonObject.SetArrayField
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UVaRestJsonValue*>    InArray                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UVaRestJsonObject::SetArrayField(const class FString& FieldName, TArray<class UVaRestJsonValue*>& InArray)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestJsonObject", "SetArrayField");

	Params::UVaRestJsonObject_SetArrayField_Params Parms{};

	Parms.FieldName = FieldName;
	Parms.InArray = InArray;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VaRestPlugin.VaRestJsonObject.Reset
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UVaRestJsonObject::Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestJsonObject", "Reset");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function VaRestPlugin.VaRestJsonObject.RemoveField
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVaRestJsonObject::RemoveField(const class FString& FieldName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestJsonObject", "RemoveField");

	Params::UVaRestJsonObject_RemoveField_Params Parms{};

	Parms.FieldName = FieldName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VaRestPlugin.VaRestJsonObject.MergeJsonObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UVaRestJsonObject*           InJsonObject                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Overwrite                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVaRestJsonObject::MergeJsonObject(class UVaRestJsonObject* InJsonObject, bool Overwrite)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestJsonObject", "MergeJsonObject");

	Params::UVaRestJsonObject_MergeJsonObject_Params Parms{};

	Parms.InJsonObject = InJsonObject;
	Parms.Overwrite = Overwrite;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VaRestPlugin.VaRestJsonObject.HasField
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVaRestJsonObject::HasField(const class FString& FieldName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestJsonObject", "HasField");

	Params::UVaRestJsonObject_HasField_Params Parms{};

	Parms.FieldName = FieldName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRestPlugin.VaRestJsonObject.GetStringField
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UVaRestJsonObject::GetStringField(const class FString& FieldName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestJsonObject", "GetStringField");

	Params::UVaRestJsonObject_GetStringField_Params Parms{};

	Parms.FieldName = FieldName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRestPlugin.VaRestJsonObject.GetStringArrayField
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FString> UVaRestJsonObject::GetStringArrayField(const class FString& FieldName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestJsonObject", "GetStringArrayField");

	Params::UVaRestJsonObject_GetStringArrayField_Params Parms{};

	Parms.FieldName = FieldName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRestPlugin.VaRestJsonObject.GetObjectField
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVaRestJsonObject*           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UVaRestJsonObject* UVaRestJsonObject::GetObjectField(const class FString& FieldName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestJsonObject", "GetObjectField");

	Params::UVaRestJsonObject_GetObjectField_Params Parms{};

	Parms.FieldName = FieldName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRestPlugin.VaRestJsonObject.GetObjectArrayField
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UVaRestJsonObject*>   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UVaRestJsonObject*> UVaRestJsonObject::GetObjectArrayField(const class FString& FieldName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestJsonObject", "GetObjectArrayField");

	Params::UVaRestJsonObject_GetObjectArrayField_Params Parms{};

	Parms.FieldName = FieldName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRestPlugin.VaRestJsonObject.GetNumberField
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UVaRestJsonObject::GetNumberField(const class FString& FieldName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestJsonObject", "GetNumberField");

	Params::UVaRestJsonObject_GetNumberField_Params Parms{};

	Parms.FieldName = FieldName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRestPlugin.VaRestJsonObject.GetNumberArrayField
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<float> UVaRestJsonObject::GetNumberArrayField(const class FString& FieldName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestJsonObject", "GetNumberArrayField");

	Params::UVaRestJsonObject_GetNumberArrayField_Params Parms{};

	Parms.FieldName = FieldName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRestPlugin.VaRestJsonObject.GetFieldNames
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FString> UVaRestJsonObject::GetFieldNames()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestJsonObject", "GetFieldNames");

	Params::UVaRestJsonObject_GetFieldNames_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRestPlugin.VaRestJsonObject.GetField
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVaRestJsonValue*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UVaRestJsonValue* UVaRestJsonObject::GetField(const class FString& FieldName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestJsonObject", "GetField");

	Params::UVaRestJsonObject_GetField_Params Parms{};

	Parms.FieldName = FieldName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRestPlugin.VaRestJsonObject.GetBoolField
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVaRestJsonObject::GetBoolField(const class FString& FieldName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestJsonObject", "GetBoolField");

	Params::UVaRestJsonObject_GetBoolField_Params Parms{};

	Parms.FieldName = FieldName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRestPlugin.VaRestJsonObject.GetBoolArrayField
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<bool>                       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<bool> UVaRestJsonObject::GetBoolArrayField(const class FString& FieldName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestJsonObject", "GetBoolArrayField");

	Params::UVaRestJsonObject_GetBoolArrayField_Params Parms{};

	Parms.FieldName = FieldName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRestPlugin.VaRestJsonObject.GetArrayField
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UVaRestJsonValue*>    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UVaRestJsonValue*> UVaRestJsonObject::GetArrayField(const class FString& FieldName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestJsonObject", "GetArrayField");

	Params::UVaRestJsonObject_GetArrayField_Params Parms{};

	Parms.FieldName = FieldName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRestPlugin.VaRestJsonObject.EncodeJsonToSingleString
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UVaRestJsonObject::EncodeJsonToSingleString()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestJsonObject", "EncodeJsonToSingleString");

	Params::UVaRestJsonObject_EncodeJsonToSingleString_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRestPlugin.VaRestJsonObject.EncodeJson
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UVaRestJsonObject::EncodeJson()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestJsonObject", "EncodeJson");

	Params::UVaRestJsonObject_EncodeJson_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRestPlugin.VaRestJsonObject.DecodeJson
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      JsonString                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVaRestJsonObject::DecodeJson(const class FString& JsonString)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestJsonObject", "DecodeJson");

	Params::UVaRestJsonObject_DecodeJson_Params Parms{};

	Parms.JsonString = JsonString;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRestPlugin.VaRestJsonObject.ConstructJsonObject
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVaRestJsonObject*           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UVaRestJsonObject* UVaRestJsonObject::ConstructJsonObject(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestJsonObject", "ConstructJsonObject");

	Params::UVaRestJsonObject_ConstructJsonObject_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class VaRestPlugin.VaRestJsonValue
// (None)

class UClass* UVaRestJsonValue::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VaRestJsonValue");

	return Clss;
}


// VaRestJsonValue VaRestPlugin.Default__VaRestJsonValue
// (Public, ClassDefaultObject, ArchetypeObject)

class UVaRestJsonValue* UVaRestJsonValue::GetDefaultObj()
{
	static class UVaRestJsonValue* Default = nullptr;

	if (!Default)
		Default = static_cast<UVaRestJsonValue*>(UVaRestJsonValue::StaticClass()->DefaultObject);

	return Default;
}


// Function VaRestPlugin.VaRestJsonValue.IsNull
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVaRestJsonValue::IsNull()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestJsonValue", "IsNull");

	Params::UVaRestJsonValue_IsNull_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRestPlugin.VaRestJsonValue.GetTypeString
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UVaRestJsonValue::GetTypeString()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestJsonValue", "GetTypeString");

	Params::UVaRestJsonValue_GetTypeString_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRestPlugin.VaRestJsonValue.GetType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EVaJson                 ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EVaJson UVaRestJsonValue::GetType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestJsonValue", "GetType");

	Params::UVaRestJsonValue_GetType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRestPlugin.VaRestJsonValue.ConstructJsonValueString
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      StringValue                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVaRestJsonValue*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UVaRestJsonValue* UVaRestJsonValue::ConstructJsonValueString(class UObject* WorldContextObject, const class FString& StringValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestJsonValue", "ConstructJsonValueString");

	Params::UVaRestJsonValue_ConstructJsonValueString_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.StringValue = StringValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRestPlugin.VaRestJsonValue.ConstructJsonValueObject
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVaRestJsonObject*           JsonObject                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVaRestJsonValue*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UVaRestJsonValue* UVaRestJsonValue::ConstructJsonValueObject(class UObject* WorldContextObject, class UVaRestJsonObject* JsonObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestJsonValue", "ConstructJsonValueObject");

	Params::UVaRestJsonValue_ConstructJsonValueObject_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.JsonObject = JsonObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRestPlugin.VaRestJsonValue.ConstructJsonValueNumber
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Number                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVaRestJsonValue*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UVaRestJsonValue* UVaRestJsonValue::ConstructJsonValueNumber(class UObject* WorldContextObject, float Number)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestJsonValue", "ConstructJsonValueNumber");

	Params::UVaRestJsonValue_ConstructJsonValueNumber_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Number = Number;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRestPlugin.VaRestJsonValue.ConstructJsonValueBool
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVaRestJsonValue*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UVaRestJsonValue* UVaRestJsonValue::ConstructJsonValueBool(class UObject* WorldContextObject, bool InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestJsonValue", "ConstructJsonValueBool");

	Params::UVaRestJsonValue_ConstructJsonValueBool_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRestPlugin.VaRestJsonValue.ConstructJsonValueArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UVaRestJsonValue*>    InArray                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class UVaRestJsonValue*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UVaRestJsonValue* UVaRestJsonValue::ConstructJsonValueArray(class UObject* WorldContextObject, TArray<class UVaRestJsonValue*>& InArray)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestJsonValue", "ConstructJsonValueArray");

	Params::UVaRestJsonValue_ConstructJsonValueArray_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.InArray = InArray;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRestPlugin.VaRestJsonValue.AsString
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UVaRestJsonValue::AsString()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestJsonValue", "AsString");

	Params::UVaRestJsonValue_AsString_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRestPlugin.VaRestJsonValue.AsObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UVaRestJsonObject*           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UVaRestJsonObject* UVaRestJsonValue::AsObject()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestJsonValue", "AsObject");

	Params::UVaRestJsonValue_AsObject_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRestPlugin.VaRestJsonValue.AsNumber
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UVaRestJsonValue::AsNumber()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestJsonValue", "AsNumber");

	Params::UVaRestJsonValue_AsNumber_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRestPlugin.VaRestJsonValue.AsBool
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVaRestJsonValue::AsBool()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestJsonValue", "AsBool");

	Params::UVaRestJsonValue_AsBool_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRestPlugin.VaRestJsonValue.AsArray
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UVaRestJsonValue*>    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UVaRestJsonValue*> UVaRestJsonValue::AsArray()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestJsonValue", "AsArray");

	Params::UVaRestJsonValue_AsArray_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class VaRestPlugin.VaRestLibrary
// (None)

class UClass* UVaRestLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VaRestLibrary");

	return Clss;
}


// VaRestLibrary VaRestPlugin.Default__VaRestLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UVaRestLibrary* UVaRestLibrary::GetDefaultObj()
{
	static class UVaRestLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UVaRestLibrary*>(UVaRestLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function VaRestPlugin.VaRestLibrary.PercentEncode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Source                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UVaRestLibrary::PercentEncode(const class FString& Source)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestLibrary", "PercentEncode");

	Params::UVaRestLibrary_PercentEncode_Params Parms{};

	Parms.Source = Source;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRestPlugin.VaRestLibrary.CallURL
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      URL                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ERequestVerb            Verb                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ERequestContentType     ContentType                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVaRestJsonObject*           VaRestJson                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UVaRestLibrary::CallURL(class UObject* WorldContextObject, const class FString& URL, enum class ERequestVerb Verb, enum class ERequestContentType ContentType, class UVaRestJsonObject* VaRestJson, UDelegateProperty_& Callback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestLibrary", "CallURL");

	Params::UVaRestLibrary_CallURL_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.URL = URL;
	Parms.Verb = Verb;
	Parms.ContentType = ContentType;
	Parms.VaRestJson = VaRestJson;
	Parms.Callback = Callback;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VaRestPlugin.VaRestLibrary.Base64EncodeData
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<uint8>                      Data                                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Dest                                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVaRestLibrary::Base64EncodeData(TArray<uint8>& Data, class FString* Dest)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestLibrary", "Base64EncodeData");

	Params::UVaRestLibrary_Base64EncodeData_Params Parms{};

	Parms.Data = Data;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Dest != nullptr)
		*Dest = std::move(Parms.Dest);

	return Parms.ReturnValue;

}


// Function VaRestPlugin.VaRestLibrary.Base64Encode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Source                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UVaRestLibrary::Base64Encode(const class FString& Source)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestLibrary", "Base64Encode");

	Params::UVaRestLibrary_Base64Encode_Params Parms{};

	Parms.Source = Source;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRestPlugin.VaRestLibrary.Base64DecodeData
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      Source                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                      Dest                                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVaRestLibrary::Base64DecodeData(const class FString& Source, TArray<uint8>* Dest)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestLibrary", "Base64DecodeData");

	Params::UVaRestLibrary_Base64DecodeData_Params Parms{};

	Parms.Source = Source;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Dest != nullptr)
		*Dest = std::move(Parms.Dest);

	return Parms.ReturnValue;

}


// Function VaRestPlugin.VaRestLibrary.Base64Decode
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      Source                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Dest                                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVaRestLibrary::Base64Decode(const class FString& Source, class FString* Dest)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestLibrary", "Base64Decode");

	Params::UVaRestLibrary_Base64Decode_Params Parms{};

	Parms.Source = Source;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Dest != nullptr)
		*Dest = std::move(Parms.Dest);

	return Parms.ReturnValue;

}


// Class VaRestPlugin.VaRestRequestJSON
// (None)

class UClass* UVaRestRequestJSON::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VaRestRequestJSON");

	return Clss;
}


// VaRestRequestJSON VaRestPlugin.Default__VaRestRequestJSON
// (Public, ClassDefaultObject, ArchetypeObject)

class UVaRestRequestJSON* UVaRestRequestJSON::GetDefaultObj()
{
	static class UVaRestRequestJSON* Default = nullptr;

	if (!Default)
		Default = static_cast<UVaRestRequestJSON*>(UVaRestRequestJSON::StaticClass()->DefaultObject);

	return Default;
}


// Function VaRestPlugin.VaRestRequestJSON.SetVerb
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ERequestVerb            Verb                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVaRestRequestJSON::SetVerb(enum class ERequestVerb Verb)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestRequestJSON", "SetVerb");

	Params::UVaRestRequestJSON_SetVerb_Params Parms{};

	Parms.Verb = Verb;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VaRestPlugin.VaRestRequestJSON.SetStringRequestContent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Content                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVaRestRequestJSON::SetStringRequestContent(const class FString& Content)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestRequestJSON", "SetStringRequestContent");

	Params::UVaRestRequestJSON_SetStringRequestContent_Params Parms{};

	Parms.Content = Content;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VaRestPlugin.VaRestRequestJSON.SetResponseObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UVaRestJsonObject*           JsonObject                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVaRestRequestJSON::SetResponseObject(class UVaRestJsonObject* JsonObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestRequestJSON", "SetResponseObject");

	Params::UVaRestRequestJSON_SetResponseObject_Params Parms{};

	Parms.JsonObject = JsonObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VaRestPlugin.VaRestRequestJSON.SetRequestObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UVaRestJsonObject*           JsonObject                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVaRestRequestJSON::SetRequestObject(class UVaRestJsonObject* JsonObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestRequestJSON", "SetRequestObject");

	Params::UVaRestRequestJSON_SetRequestObject_Params Parms{};

	Parms.JsonObject = JsonObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VaRestPlugin.VaRestRequestJSON.SetHeader
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      HeaderName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      HeaderValue                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVaRestRequestJSON::SetHeader(const class FString& HeaderName, const class FString& HeaderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestRequestJSON", "SetHeader");

	Params::UVaRestRequestJSON_SetHeader_Params Parms{};

	Parms.HeaderName = HeaderName;
	Parms.HeaderValue = HeaderValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VaRestPlugin.VaRestRequestJSON.SetCustomVerb
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Verb                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVaRestRequestJSON::SetCustomVerb(const class FString& Verb)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestRequestJSON", "SetCustomVerb");

	Params::UVaRestRequestJSON_SetCustomVerb_Params Parms{};

	Parms.Verb = Verb;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VaRestPlugin.VaRestRequestJSON.SetContentType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ERequestContentType     ContentType                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVaRestRequestJSON::SetContentType(enum class ERequestContentType ContentType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestRequestJSON", "SetContentType");

	Params::UVaRestRequestJSON_SetContentType_Params Parms{};

	Parms.ContentType = ContentType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VaRestPlugin.VaRestRequestJSON.SetBinaryRequestContent
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<uint8>                      Content                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UVaRestRequestJSON::SetBinaryRequestContent(TArray<uint8>& Content)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestRequestJSON", "SetBinaryRequestContent");

	Params::UVaRestRequestJSON_SetBinaryRequestContent_Params Parms{};

	Parms.Content = Content;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VaRestPlugin.VaRestRequestJSON.SetBinaryContentType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ContentType                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVaRestRequestJSON::SetBinaryContentType(const class FString& ContentType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestRequestJSON", "SetBinaryContentType");

	Params::UVaRestRequestJSON_SetBinaryContentType_Params Parms{};

	Parms.ContentType = ContentType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VaRestPlugin.VaRestRequestJSON.ResetResponseData
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UVaRestRequestJSON::ResetResponseData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestRequestJSON", "ResetResponseData");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function VaRestPlugin.VaRestRequestJSON.ResetRequestData
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UVaRestRequestJSON::ResetRequestData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestRequestJSON", "ResetRequestData");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function VaRestPlugin.VaRestRequestJSON.ResetData
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UVaRestRequestJSON::ResetData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestRequestJSON", "ResetData");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function VaRestPlugin.VaRestRequestJSON.RemoveTag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        Tag                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UVaRestRequestJSON::RemoveTag(class FName Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestRequestJSON", "RemoveTag");

	Params::UVaRestRequestJSON_RemoveTag_Params Parms{};

	Parms.Tag = Tag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRestPlugin.VaRestRequestJSON.ProcessURL
// (Native, Public, BlueprintCallable)
// Parameters:
// class FString                      URL                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVaRestRequestJSON::ProcessURL(const class FString& URL)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestRequestJSON", "ProcessURL");

	Params::UVaRestRequestJSON_ProcessURL_Params Parms{};

	Parms.URL = URL;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VaRestPlugin.VaRestRequestJSON.HasTag
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        Tag                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVaRestRequestJSON::HasTag(class FName Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestRequestJSON", "HasTag");

	Params::UVaRestRequestJSON_HasTag_Params Parms{};

	Parms.Tag = Tag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRestPlugin.VaRestRequestJSON.GetURL
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UVaRestRequestJSON::GetURL()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestRequestJSON", "GetURL");

	Params::UVaRestRequestJSON_GetURL_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRestPlugin.VaRestRequestJSON.GetStatus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ERequestStatus          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ERequestStatus UVaRestRequestJSON::GetStatus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestRequestJSON", "GetStatus");

	Params::UVaRestRequestJSON_GetStatus_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRestPlugin.VaRestRequestJSON.GetResponseObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UVaRestJsonObject*           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UVaRestJsonObject* UVaRestRequestJSON::GetResponseObject()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestRequestJSON", "GetResponseObject");

	Params::UVaRestRequestJSON_GetResponseObject_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRestPlugin.VaRestRequestJSON.GetResponseHeader
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      HeaderName                                                       (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UVaRestRequestJSON::GetResponseHeader(const class FString& HeaderName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestRequestJSON", "GetResponseHeader");

	Params::UVaRestRequestJSON_GetResponseHeader_Params Parms{};

	Parms.HeaderName = HeaderName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRestPlugin.VaRestRequestJSON.GetResponseCode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UVaRestRequestJSON::GetResponseCode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestRequestJSON", "GetResponseCode");

	Params::UVaRestRequestJSON_GetResponseCode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRestPlugin.VaRestRequestJSON.GetRequestObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UVaRestJsonObject*           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UVaRestJsonObject* UVaRestRequestJSON::GetRequestObject()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestRequestJSON", "GetRequestObject");

	Params::UVaRestRequestJSON_GetRequestObject_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRestPlugin.VaRestRequestJSON.GetAllResponseHeaders
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FString> UVaRestRequestJSON::GetAllResponseHeaders()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestRequestJSON", "GetAllResponseHeaders");

	Params::UVaRestRequestJSON_GetAllResponseHeaders_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRestPlugin.VaRestRequestJSON.ConstructRequestExt
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ERequestVerb            Verb                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ERequestContentType     ContentType                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVaRestRequestJSON*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UVaRestRequestJSON* UVaRestRequestJSON::ConstructRequestExt(class UObject* WorldContextObject, enum class ERequestVerb Verb, enum class ERequestContentType ContentType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestRequestJSON", "ConstructRequestExt");

	Params::UVaRestRequestJSON_ConstructRequestExt_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Verb = Verb;
	Parms.ContentType = ContentType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRestPlugin.VaRestRequestJSON.ConstructRequest
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVaRestRequestJSON*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UVaRestRequestJSON* UVaRestRequestJSON::ConstructRequest(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestRequestJSON", "ConstructRequest");

	Params::UVaRestRequestJSON_ConstructRequest_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRestPlugin.VaRestRequestJSON.Cancel
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UVaRestRequestJSON::Cancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestRequestJSON", "Cancel");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function VaRestPlugin.VaRestRequestJSON.ApplyURL
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      URL                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVaRestJsonObject*           Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           LatentInfo                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UVaRestRequestJSON::ApplyURL(const class FString& URL, class UVaRestJsonObject** Result, class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestRequestJSON", "ApplyURL");

	Params::UVaRestRequestJSON_ApplyURL_Params Parms{};

	Parms.URL = URL;
	Parms.WorldContextObject = WorldContextObject;
	Parms.LatentInfo = LatentInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function VaRestPlugin.VaRestRequestJSON.AddTag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        Tag                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVaRestRequestJSON::AddTag(class FName Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestRequestJSON", "AddTag");

	Params::UVaRestRequestJSON_AddTag_Params Parms{};

	Parms.Tag = Tag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}



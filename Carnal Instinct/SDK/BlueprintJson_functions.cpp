#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class BlueprintJson.JsonLibrary
// (None)

class UClass* UJsonLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("JsonLibrary");

	return Clss;
}


// JsonLibrary BlueprintJson.Default__JsonLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UJsonLibrary* UJsonLibrary::GetDefaultObj()
{
	static class UJsonLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UJsonLibrary*>(UJsonLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function BlueprintJson.JsonLibrary.StringifyJsonObject
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UJsonObject*                 Object                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutJsonString                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UJsonLibrary::StringifyJsonObject(class UJsonObject* Object, class FString* OutJsonString)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonLibrary", "StringifyJsonObject");

	Params::UJsonLibrary_StringifyJsonObject_Params Parms{};

	Parms.Object = Object;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutJsonString != nullptr)
		*OutJsonString = std::move(Parms.OutJsonString);

	return Parms.ReturnValue;

}


// Function BlueprintJson.JsonLibrary.LoadJsonFile
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      FilePath                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UJsonObject*                 ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UJsonObject* UJsonLibrary::LoadJsonFile(const class FString& FilePath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonLibrary", "LoadJsonFile");

	Params::UJsonLibrary_LoadJsonFile_Params Parms{};

	Parms.FilePath = FilePath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BlueprintJson.JsonLibrary.JsonValue_Vector2D
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector2D                   Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UJsonValue*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UJsonValue* UJsonLibrary::JsonValue_Vector2D(struct FVector2D& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonLibrary", "JsonValue_Vector2D");

	Params::UJsonLibrary_JsonValue_Vector2D_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BlueprintJson.JsonLibrary.JsonValue_Vector
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UJsonValue*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UJsonValue* UJsonLibrary::JsonValue_Vector(struct FVector& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonLibrary", "JsonValue_Vector");

	Params::UJsonLibrary_JsonValue_Vector_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BlueprintJson.JsonLibrary.JsonValue_Transform
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTransform                  Value                                                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class UJsonValue*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UJsonValue* UJsonLibrary::JsonValue_Transform(struct FTransform& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonLibrary", "JsonValue_Transform");

	Params::UJsonLibrary_JsonValue_Transform_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BlueprintJson.JsonLibrary.JsonValue_ToVector
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UJsonValue*                  Object                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UJsonLibrary::JsonValue_ToVector(class UJsonValue* Object)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonLibrary", "JsonValue_ToVector");

	Params::UJsonLibrary_JsonValue_ToVector_Params Parms{};

	Parms.Object = Object;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BlueprintJson.JsonLibrary.JsonValue_ToTransform
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UJsonValue*                  Object                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FTransform UJsonLibrary::JsonValue_ToTransform(class UJsonValue* Object)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonLibrary", "JsonValue_ToTransform");

	Params::UJsonLibrary_JsonValue_ToTransform_Params Parms{};

	Parms.Object = Object;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BlueprintJson.JsonLibrary.JsonValue_ToString
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UJsonValue*                  Object                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UJsonLibrary::JsonValue_ToString(class UJsonValue* Object)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonLibrary", "JsonValue_ToString");

	Params::UJsonLibrary_JsonValue_ToString_Params Parms{};

	Parms.Object = Object;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BlueprintJson.JsonLibrary.JsonValue_ToRotator
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UJsonValue*                  Object                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FRotator UJsonLibrary::JsonValue_ToRotator(class UJsonValue* Object)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonLibrary", "JsonValue_ToRotator");

	Params::UJsonLibrary_JsonValue_ToRotator_Params Parms{};

	Parms.Object = Object;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BlueprintJson.JsonLibrary.JsonValue_ToObject
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UJsonValue*                  Object                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UJsonObject*                 ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UJsonObject* UJsonLibrary::JsonValue_ToObject(class UJsonValue* Object)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonLibrary", "JsonValue_ToObject");

	Params::UJsonLibrary_JsonValue_ToObject_Params Parms{};

	Parms.Object = Object;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BlueprintJson.JsonLibrary.JsonValue_ToInteger64
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UJsonValue*                  Object                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int64                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int64 UJsonLibrary::JsonValue_ToInteger64(class UJsonValue* Object)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonLibrary", "JsonValue_ToInteger64");

	Params::UJsonLibrary_JsonValue_ToInteger64_Params Parms{};

	Parms.Object = Object;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BlueprintJson.JsonLibrary.JsonValue_ToInteger
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UJsonValue*                  Object                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UJsonLibrary::JsonValue_ToInteger(class UJsonValue* Object)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonLibrary", "JsonValue_ToInteger");

	Params::UJsonLibrary_JsonValue_ToInteger_Params Parms{};

	Parms.Object = Object;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BlueprintJson.JsonLibrary.JsonValue_ToFloat
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UJsonValue*                  Object                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UJsonLibrary::JsonValue_ToFloat(class UJsonValue* Object)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonLibrary", "JsonValue_ToFloat");

	Params::UJsonLibrary_JsonValue_ToFloat_Params Parms{};

	Parms.Object = Object;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BlueprintJson.JsonLibrary.JsonValue_ToBool
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UJsonValue*                  Object                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UJsonLibrary::JsonValue_ToBool(class UJsonValue* Object)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonLibrary", "JsonValue_ToBool");

	Params::UJsonLibrary_JsonValue_ToBool_Params Parms{};

	Parms.Object = Object;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BlueprintJson.JsonLibrary.JsonValue_ToArray
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UJsonValue*                  Object                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UJsonValue*>          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UJsonValue*> UJsonLibrary::JsonValue_ToArray(class UJsonValue* Object)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonLibrary", "JsonValue_ToArray");

	Params::UJsonLibrary_JsonValue_ToArray_Params Parms{};

	Parms.Object = Object;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BlueprintJson.JsonLibrary.JsonValue_Text
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class FText                        Value                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UJsonValue*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UJsonValue* UJsonLibrary::JsonValue_Text(class FText& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonLibrary", "JsonValue_Text");

	Params::UJsonLibrary_JsonValue_Text_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BlueprintJson.JsonLibrary.JsonValue_String
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UJsonValue*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UJsonValue* UJsonLibrary::JsonValue_String(const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonLibrary", "JsonValue_String");

	Params::UJsonLibrary_JsonValue_String_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BlueprintJson.JsonLibrary.JsonValue_Rotator
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRotator                    Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class UJsonValue*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UJsonValue* UJsonLibrary::JsonValue_Rotator(struct FRotator& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonLibrary", "JsonValue_Rotator");

	Params::UJsonLibrary_JsonValue_Rotator_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BlueprintJson.JsonLibrary.JsonValue_Quat
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FQuat                       Value                                                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class UJsonValue*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UJsonValue* UJsonLibrary::JsonValue_Quat(struct FQuat& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonLibrary", "JsonValue_Quat");

	Params::UJsonLibrary_JsonValue_Quat_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BlueprintJson.JsonLibrary.JsonValue_Name
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UJsonValue*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UJsonValue* UJsonLibrary::JsonValue_Name(class FName& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonLibrary", "JsonValue_Name");

	Params::UJsonLibrary_JsonValue_Name_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BlueprintJson.JsonLibrary.JsonValue_LinearColor
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLinearColor                Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UJsonValue*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UJsonValue* UJsonLibrary::JsonValue_LinearColor(struct FLinearColor& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonLibrary", "JsonValue_LinearColor");

	Params::UJsonLibrary_JsonValue_LinearColor_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BlueprintJson.JsonLibrary.JsonValue_JsonObject
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UJsonObject*                 Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UJsonValue*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UJsonValue* UJsonLibrary::JsonValue_JsonObject(class UJsonObject* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonLibrary", "JsonValue_JsonObject");

	Params::UJsonLibrary_JsonValue_JsonObject_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BlueprintJson.JsonLibrary.JsonValue_Int64
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int64                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UJsonValue*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UJsonValue* UJsonLibrary::JsonValue_Int64(int64 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonLibrary", "JsonValue_Int64");

	Params::UJsonLibrary_JsonValue_Int64_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BlueprintJson.JsonLibrary.JsonValue_HitResult
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FHitResult                  Value                                                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// class UJsonValue*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UJsonValue* UJsonLibrary::JsonValue_HitResult(struct FHitResult& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonLibrary", "JsonValue_HitResult");

	Params::UJsonLibrary_JsonValue_HitResult_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BlueprintJson.JsonLibrary.JsonValue_Float
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UJsonValue*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UJsonValue* UJsonLibrary::JsonValue_Float(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonLibrary", "JsonValue_Float");

	Params::UJsonLibrary_JsonValue_Float_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BlueprintJson.JsonLibrary.JsonValue_Color
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FColor                      Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UJsonValue*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UJsonValue* UJsonLibrary::JsonValue_Color(struct FColor& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonLibrary", "JsonValue_Color");

	Params::UJsonLibrary_JsonValue_Color_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BlueprintJson.JsonLibrary.JsonValue_Boolean
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UJsonValue*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UJsonValue* UJsonLibrary::JsonValue_Boolean(bool Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonLibrary", "JsonValue_Boolean");

	Params::UJsonLibrary_JsonValue_Boolean_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BlueprintJson.JsonLibrary.JsonValue_Bool
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UJsonValue*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UJsonValue* UJsonLibrary::JsonValue_Bool(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonLibrary", "JsonValue_Bool");

	Params::UJsonLibrary_JsonValue_Bool_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BlueprintJson.JsonLibrary.GetFieldAsString
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLightJsonObject            Object                                                           (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UJsonLibrary::GetFieldAsString(struct FLightJsonObject& Object, const class FString& FieldName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonLibrary", "GetFieldAsString");

	Params::UJsonLibrary_GetFieldAsString_Params Parms{};

	Parms.Object = Object;
	Parms.FieldName = FieldName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BlueprintJson.JsonLibrary.GetFieldAsObjectArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLightJsonObject            Object                                                           (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FLightJsonObject>    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FLightJsonObject> UJsonLibrary::GetFieldAsObjectArray(struct FLightJsonObject& Object, const class FString& FieldName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonLibrary", "GetFieldAsObjectArray");

	Params::UJsonLibrary_GetFieldAsObjectArray_Params Parms{};

	Parms.Object = Object;
	Parms.FieldName = FieldName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BlueprintJson.JsonLibrary.GetFieldAsObject
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLightJsonObject            Object                                                           (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLightJsonObject            ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FLightJsonObject UJsonLibrary::GetFieldAsObject(struct FLightJsonObject& Object, const class FString& FieldName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonLibrary", "GetFieldAsObject");

	Params::UJsonLibrary_GetFieldAsObject_Params Parms{};

	Parms.Object = Object;
	Parms.FieldName = FieldName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BlueprintJson.JsonLibrary.GetFieldAsInt64
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLightJsonObject            Object                                                           (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int64                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int64 UJsonLibrary::GetFieldAsInt64(struct FLightJsonObject& Object, const class FString& FieldName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonLibrary", "GetFieldAsInt64");

	Params::UJsonLibrary_GetFieldAsInt64_Params Parms{};

	Parms.Object = Object;
	Parms.FieldName = FieldName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BlueprintJson.JsonLibrary.GetFieldAsInt32
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLightJsonObject            Object                                                           (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UJsonLibrary::GetFieldAsInt32(struct FLightJsonObject& Object, const class FString& FieldName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonLibrary", "GetFieldAsInt32");

	Params::UJsonLibrary_GetFieldAsInt32_Params Parms{};

	Parms.Object = Object;
	Parms.FieldName = FieldName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BlueprintJson.JsonLibrary.GetFieldAsFloatArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLightJsonObject            Object                                                           (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<float> UJsonLibrary::GetFieldAsFloatArray(struct FLightJsonObject& Object, const class FString& FieldName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonLibrary", "GetFieldAsFloatArray");

	Params::UJsonLibrary_GetFieldAsFloatArray_Params Parms{};

	Parms.Object = Object;
	Parms.FieldName = FieldName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BlueprintJson.JsonLibrary.GetFieldAsFloat
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLightJsonObject            Object                                                           (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UJsonLibrary::GetFieldAsFloat(struct FLightJsonObject& Object, const class FString& FieldName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonLibrary", "GetFieldAsFloat");

	Params::UJsonLibrary_GetFieldAsFloat_Params Parms{};

	Parms.Object = Object;
	Parms.FieldName = FieldName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BlueprintJson.JsonLibrary.ConvertLightObject
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLightJsonObject            Object                                                           (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UJsonObject*                 ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UJsonObject* UJsonLibrary::ConvertLightObject(struct FLightJsonObject& Object)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonLibrary", "ConvertLightObject");

	Params::UJsonLibrary_ConvertLightObject_Params Parms{};

	Parms.Object = Object;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class BlueprintJson.InternalJsonLibrary
// (None)

class UClass* UInternalJsonLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InternalJsonLibrary");

	return Clss;
}


// InternalJsonLibrary BlueprintJson.Default__InternalJsonLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UInternalJsonLibrary* UInternalJsonLibrary::GetDefaultObj()
{
	static class UInternalJsonLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UInternalJsonLibrary*>(UInternalJsonLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function BlueprintJson.InternalJsonLibrary.JO_AddField_Vector2D
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UJsonObject*                 JsonObject                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   FieldValue                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInternalJsonLibrary::JO_AddField_Vector2D(class UJsonObject* JsonObject, const class FString& FieldName, struct FVector2D& FieldValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InternalJsonLibrary", "JO_AddField_Vector2D");

	Params::UInternalJsonLibrary_JO_AddField_Vector2D_Params Parms{};

	Parms.JsonObject = JsonObject;
	Parms.FieldName = FieldName;
	Parms.FieldValue = FieldValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function BlueprintJson.InternalJsonLibrary.JO_AddField_Vector
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UJsonObject*                 JsonObject                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     FieldValue                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInternalJsonLibrary::JO_AddField_Vector(class UJsonObject* JsonObject, const class FString& FieldName, struct FVector& FieldValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InternalJsonLibrary", "JO_AddField_Vector");

	Params::UInternalJsonLibrary_JO_AddField_Vector_Params Parms{};

	Parms.JsonObject = JsonObject;
	Parms.FieldName = FieldName;
	Parms.FieldValue = FieldValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function BlueprintJson.InternalJsonLibrary.JO_AddField_Transform
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UJsonObject*                 JsonObject                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  FieldValue                                                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UInternalJsonLibrary::JO_AddField_Transform(class UJsonObject* JsonObject, const class FString& FieldName, struct FTransform& FieldValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InternalJsonLibrary", "JO_AddField_Transform");

	Params::UInternalJsonLibrary_JO_AddField_Transform_Params Parms{};

	Parms.JsonObject = JsonObject;
	Parms.FieldName = FieldName;
	Parms.FieldValue = FieldValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function BlueprintJson.InternalJsonLibrary.JO_AddField_Text
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UJsonObject*                 JsonObject                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        FieldValue                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UInternalJsonLibrary::JO_AddField_Text(class UJsonObject* JsonObject, const class FString& FieldName, class FText& FieldValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InternalJsonLibrary", "JO_AddField_Text");

	Params::UInternalJsonLibrary_JO_AddField_Text_Params Parms{};

	Parms.JsonObject = JsonObject;
	Parms.FieldName = FieldName;
	Parms.FieldValue = FieldValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function BlueprintJson.InternalJsonLibrary.JO_AddField_String
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UJsonObject*                 JsonObject                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      FieldValue                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInternalJsonLibrary::JO_AddField_String(class UJsonObject* JsonObject, const class FString& FieldName, const class FString& FieldValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InternalJsonLibrary", "JO_AddField_String");

	Params::UInternalJsonLibrary_JO_AddField_String_Params Parms{};

	Parms.JsonObject = JsonObject;
	Parms.FieldName = FieldName;
	Parms.FieldValue = FieldValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function BlueprintJson.InternalJsonLibrary.JO_AddField_Rotator
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UJsonObject*                 JsonObject                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    FieldValue                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UInternalJsonLibrary::JO_AddField_Rotator(class UJsonObject* JsonObject, const class FString& FieldName, struct FRotator& FieldValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InternalJsonLibrary", "JO_AddField_Rotator");

	Params::UInternalJsonLibrary_JO_AddField_Rotator_Params Parms{};

	Parms.JsonObject = JsonObject;
	Parms.FieldName = FieldName;
	Parms.FieldValue = FieldValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function BlueprintJson.InternalJsonLibrary.JO_AddField_Quat
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UJsonObject*                 JsonObject                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FQuat                       FieldValue                                                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UInternalJsonLibrary::JO_AddField_Quat(class UJsonObject* JsonObject, const class FString& FieldName, struct FQuat& FieldValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InternalJsonLibrary", "JO_AddField_Quat");

	Params::UInternalJsonLibrary_JO_AddField_Quat_Params Parms{};

	Parms.JsonObject = JsonObject;
	Parms.FieldName = FieldName;
	Parms.FieldValue = FieldValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function BlueprintJson.InternalJsonLibrary.JO_AddField_Object
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UJsonObject*                 JsonObject                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     FieldValue                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInternalJsonLibrary::JO_AddField_Object(class UJsonObject* JsonObject, const class FString& FieldName, class UObject* FieldValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InternalJsonLibrary", "JO_AddField_Object");

	Params::UInternalJsonLibrary_JO_AddField_Object_Params Parms{};

	Parms.JsonObject = JsonObject;
	Parms.FieldName = FieldName;
	Parms.FieldValue = FieldValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function BlueprintJson.InternalJsonLibrary.JO_AddField_Name
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UJsonObject*                 JsonObject                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        FieldValue                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInternalJsonLibrary::JO_AddField_Name(class UJsonObject* JsonObject, const class FString& FieldName, class FName& FieldValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InternalJsonLibrary", "JO_AddField_Name");

	Params::UInternalJsonLibrary_JO_AddField_Name_Params Parms{};

	Parms.JsonObject = JsonObject;
	Parms.FieldName = FieldName;
	Parms.FieldValue = FieldValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function BlueprintJson.InternalJsonLibrary.JO_AddField_LinearColor
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UJsonObject*                 JsonObject                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                FieldValue                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInternalJsonLibrary::JO_AddField_LinearColor(class UJsonObject* JsonObject, const class FString& FieldName, struct FLinearColor& FieldValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InternalJsonLibrary", "JO_AddField_LinearColor");

	Params::UInternalJsonLibrary_JO_AddField_LinearColor_Params Parms{};

	Parms.JsonObject = JsonObject;
	Parms.FieldName = FieldName;
	Parms.FieldValue = FieldValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function BlueprintJson.InternalJsonLibrary.JO_AddField_Int64
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UJsonObject*                 JsonObject                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int64                              FieldValue                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInternalJsonLibrary::JO_AddField_Int64(class UJsonObject* JsonObject, const class FString& FieldName, int64 FieldValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InternalJsonLibrary", "JO_AddField_Int64");

	Params::UInternalJsonLibrary_JO_AddField_Int64_Params Parms{};

	Parms.JsonObject = JsonObject;
	Parms.FieldName = FieldName;
	Parms.FieldValue = FieldValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function BlueprintJson.InternalJsonLibrary.JO_AddField_Int
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UJsonObject*                 JsonObject                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FieldValue                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInternalJsonLibrary::JO_AddField_Int(class UJsonObject* JsonObject, const class FString& FieldName, int32 FieldValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InternalJsonLibrary", "JO_AddField_Int");

	Params::UInternalJsonLibrary_JO_AddField_Int_Params Parms{};

	Parms.JsonObject = JsonObject;
	Parms.FieldName = FieldName;
	Parms.FieldValue = FieldValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function BlueprintJson.InternalJsonLibrary.JO_AddField_HitResult
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UJsonObject*                 JsonObject                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult                  FieldValue                                                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UInternalJsonLibrary::JO_AddField_HitResult(class UJsonObject* JsonObject, const class FString& FieldName, struct FHitResult& FieldValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InternalJsonLibrary", "JO_AddField_HitResult");

	Params::UInternalJsonLibrary_JO_AddField_HitResult_Params Parms{};

	Parms.JsonObject = JsonObject;
	Parms.FieldName = FieldName;
	Parms.FieldValue = FieldValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function BlueprintJson.InternalJsonLibrary.JO_AddField_Float
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UJsonObject*                 JsonObject                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              FieldValue                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInternalJsonLibrary::JO_AddField_Float(class UJsonObject* JsonObject, const class FString& FieldName, float FieldValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InternalJsonLibrary", "JO_AddField_Float");

	Params::UInternalJsonLibrary_JO_AddField_Float_Params Parms{};

	Parms.JsonObject = JsonObject;
	Parms.FieldName = FieldName;
	Parms.FieldValue = FieldValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function BlueprintJson.InternalJsonLibrary.JO_AddField_Boolean
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UJsonObject*                 JsonObject                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               FieldValue                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInternalJsonLibrary::JO_AddField_Boolean(class UJsonObject* JsonObject, const class FString& FieldName, bool FieldValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InternalJsonLibrary", "JO_AddField_Boolean");

	Params::UInternalJsonLibrary_JO_AddField_Boolean_Params Parms{};

	Parms.JsonObject = JsonObject;
	Parms.FieldName = FieldName;
	Parms.FieldValue = FieldValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function BlueprintJson.InternalJsonLibrary.JO_AddField_Arr_Vector2D
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UJsonObject*                 JsonObject                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector2D>           FieldValue                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UInternalJsonLibrary::JO_AddField_Arr_Vector2D(class UJsonObject* JsonObject, const class FString& FieldName, TArray<struct FVector2D>& FieldValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InternalJsonLibrary", "JO_AddField_Arr_Vector2D");

	Params::UInternalJsonLibrary_JO_AddField_Arr_Vector2D_Params Parms{};

	Parms.JsonObject = JsonObject;
	Parms.FieldName = FieldName;
	Parms.FieldValue = FieldValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function BlueprintJson.InternalJsonLibrary.JO_AddField_Arr_Vector
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UJsonObject*                 JsonObject                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>             FieldValue                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UInternalJsonLibrary::JO_AddField_Arr_Vector(class UJsonObject* JsonObject, const class FString& FieldName, TArray<struct FVector>& FieldValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InternalJsonLibrary", "JO_AddField_Arr_Vector");

	Params::UInternalJsonLibrary_JO_AddField_Arr_Vector_Params Parms{};

	Parms.JsonObject = JsonObject;
	Parms.FieldName = FieldName;
	Parms.FieldValue = FieldValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function BlueprintJson.InternalJsonLibrary.JO_AddField_Arr_Transform
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UJsonObject*                 JsonObject                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FTransform>          FieldValue                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UInternalJsonLibrary::JO_AddField_Arr_Transform(class UJsonObject* JsonObject, const class FString& FieldName, TArray<struct FTransform>& FieldValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InternalJsonLibrary", "JO_AddField_Arr_Transform");

	Params::UInternalJsonLibrary_JO_AddField_Arr_Transform_Params Parms{};

	Parms.JsonObject = JsonObject;
	Parms.FieldName = FieldName;
	Parms.FieldValue = FieldValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function BlueprintJson.InternalJsonLibrary.JO_AddField_Arr_String
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UJsonObject*                 JsonObject                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              FieldValue                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UInternalJsonLibrary::JO_AddField_Arr_String(class UJsonObject* JsonObject, const class FString& FieldName, TArray<class FString>& FieldValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InternalJsonLibrary", "JO_AddField_Arr_String");

	Params::UInternalJsonLibrary_JO_AddField_Arr_String_Params Parms{};

	Parms.JsonObject = JsonObject;
	Parms.FieldName = FieldName;
	Parms.FieldValue = FieldValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function BlueprintJson.InternalJsonLibrary.JO_AddField_Arr_Rotator
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UJsonObject*                 JsonObject                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FRotator>            FieldValue                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UInternalJsonLibrary::JO_AddField_Arr_Rotator(class UJsonObject* JsonObject, const class FString& FieldName, TArray<struct FRotator>& FieldValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InternalJsonLibrary", "JO_AddField_Arr_Rotator");

	Params::UInternalJsonLibrary_JO_AddField_Arr_Rotator_Params Parms{};

	Parms.JsonObject = JsonObject;
	Parms.FieldName = FieldName;
	Parms.FieldValue = FieldValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function BlueprintJson.InternalJsonLibrary.JO_AddField_Arr_Quat
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UJsonObject*                 JsonObject                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FQuat>               FieldValue                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UInternalJsonLibrary::JO_AddField_Arr_Quat(class UJsonObject* JsonObject, const class FString& FieldName, TArray<struct FQuat>& FieldValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InternalJsonLibrary", "JO_AddField_Arr_Quat");

	Params::UInternalJsonLibrary_JO_AddField_Arr_Quat_Params Parms{};

	Parms.JsonObject = JsonObject;
	Parms.FieldName = FieldName;
	Parms.FieldValue = FieldValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function BlueprintJson.InternalJsonLibrary.JO_AddField_Arr_Object
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UJsonObject*                 JsonObject                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UObject*>             FieldValue                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UInternalJsonLibrary::JO_AddField_Arr_Object(class UJsonObject* JsonObject, const class FString& FieldName, TArray<class UObject*>& FieldValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InternalJsonLibrary", "JO_AddField_Arr_Object");

	Params::UInternalJsonLibrary_JO_AddField_Arr_Object_Params Parms{};

	Parms.JsonObject = JsonObject;
	Parms.FieldName = FieldName;
	Parms.FieldValue = FieldValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function BlueprintJson.InternalJsonLibrary.JO_AddField_Arr_LinearColor
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UJsonObject*                 JsonObject                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FLinearColor>        FieldValue                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UInternalJsonLibrary::JO_AddField_Arr_LinearColor(class UJsonObject* JsonObject, const class FString& FieldName, TArray<struct FLinearColor>& FieldValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InternalJsonLibrary", "JO_AddField_Arr_LinearColor");

	Params::UInternalJsonLibrary_JO_AddField_Arr_LinearColor_Params Parms{};

	Parms.JsonObject = JsonObject;
	Parms.FieldName = FieldName;
	Parms.FieldValue = FieldValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function BlueprintJson.InternalJsonLibrary.JO_AddField_Arr_Int64
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UJsonObject*                 JsonObject                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int64>                      FieldValue                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UInternalJsonLibrary::JO_AddField_Arr_Int64(class UJsonObject* JsonObject, const class FString& FieldName, TArray<int64>& FieldValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InternalJsonLibrary", "JO_AddField_Arr_Int64");

	Params::UInternalJsonLibrary_JO_AddField_Arr_Int64_Params Parms{};

	Parms.JsonObject = JsonObject;
	Parms.FieldName = FieldName;
	Parms.FieldValue = FieldValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function BlueprintJson.InternalJsonLibrary.JO_AddField_Arr_Int
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UJsonObject*                 JsonObject                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int32>                      FieldValue                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UInternalJsonLibrary::JO_AddField_Arr_Int(class UJsonObject* JsonObject, const class FString& FieldName, TArray<int32>& FieldValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InternalJsonLibrary", "JO_AddField_Arr_Int");

	Params::UInternalJsonLibrary_JO_AddField_Arr_Int_Params Parms{};

	Parms.JsonObject = JsonObject;
	Parms.FieldName = FieldName;
	Parms.FieldValue = FieldValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function BlueprintJson.InternalJsonLibrary.JO_AddField_Arr_HitResult
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UJsonObject*                 JsonObject                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FHitResult>          FieldValue                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UInternalJsonLibrary::JO_AddField_Arr_HitResult(class UJsonObject* JsonObject, const class FString& FieldName, TArray<struct FHitResult>& FieldValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InternalJsonLibrary", "JO_AddField_Arr_HitResult");

	Params::UInternalJsonLibrary_JO_AddField_Arr_HitResult_Params Parms{};

	Parms.JsonObject = JsonObject;
	Parms.FieldName = FieldName;
	Parms.FieldValue = FieldValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function BlueprintJson.InternalJsonLibrary.JO_AddField_Arr_Float
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UJsonObject*                 JsonObject                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                      FieldValue                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UInternalJsonLibrary::JO_AddField_Arr_Float(class UJsonObject* JsonObject, const class FString& FieldName, TArray<float>& FieldValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InternalJsonLibrary", "JO_AddField_Arr_Float");

	Params::UInternalJsonLibrary_JO_AddField_Arr_Float_Params Parms{};

	Parms.JsonObject = JsonObject;
	Parms.FieldName = FieldName;
	Parms.FieldValue = FieldValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function BlueprintJson.InternalJsonLibrary.JO_AddField_Arr_Boolean
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UJsonObject*                 JsonObject                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<bool>                       FieldValue                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UInternalJsonLibrary::JO_AddField_Arr_Boolean(class UJsonObject* JsonObject, const class FString& FieldName, TArray<bool>& FieldValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InternalJsonLibrary", "JO_AddField_Arr_Boolean");

	Params::UInternalJsonLibrary_JO_AddField_Arr_Boolean_Params Parms{};

	Parms.JsonObject = JsonObject;
	Parms.FieldName = FieldName;
	Parms.FieldValue = FieldValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class BlueprintJson.JsonLoadAsyncProxyBase
// (None)

class UClass* UJsonLoadAsyncProxyBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("JsonLoadAsyncProxyBase");

	return Clss;
}


// JsonLoadAsyncProxyBase BlueprintJson.Default__JsonLoadAsyncProxyBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UJsonLoadAsyncProxyBase* UJsonLoadAsyncProxyBase::GetDefaultObj()
{
	static class UJsonLoadAsyncProxyBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UJsonLoadAsyncProxyBase*>(UJsonLoadAsyncProxyBase::StaticClass()->DefaultObject);

	return Default;
}


// Class BlueprintJson.JsonLoadAsyncFromFileProxy
// (None)

class UClass* UJsonLoadAsyncFromFileProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("JsonLoadAsyncFromFileProxy");

	return Clss;
}


// JsonLoadAsyncFromFileProxy BlueprintJson.Default__JsonLoadAsyncFromFileProxy
// (Public, ClassDefaultObject, ArchetypeObject)

class UJsonLoadAsyncFromFileProxy* UJsonLoadAsyncFromFileProxy::GetDefaultObj()
{
	static class UJsonLoadAsyncFromFileProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<UJsonLoadAsyncFromFileProxy*>(UJsonLoadAsyncFromFileProxy::StaticClass()->DefaultObject);

	return Default;
}


// Function BlueprintJson.JsonLoadAsyncFromFileProxy.LoadJsonFileAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      FilePath                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UJsonLoadAsyncFromFileProxy* ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UJsonLoadAsyncFromFileProxy* UJsonLoadAsyncFromFileProxy::LoadJsonFileAsync(const class FString& FilePath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonLoadAsyncFromFileProxy", "LoadJsonFileAsync");

	Params::UJsonLoadAsyncFromFileProxy_LoadJsonFileAsync_Params Parms{};

	Parms.FilePath = FilePath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class BlueprintJson.JsonParseAsyncProxy
// (None)

class UClass* UJsonParseAsyncProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("JsonParseAsyncProxy");

	return Clss;
}


// JsonParseAsyncProxy BlueprintJson.Default__JsonParseAsyncProxy
// (Public, ClassDefaultObject, ArchetypeObject)

class UJsonParseAsyncProxy* UJsonParseAsyncProxy::GetDefaultObj()
{
	static class UJsonParseAsyncProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<UJsonParseAsyncProxy*>(UJsonParseAsyncProxy::StaticClass()->DefaultObject);

	return Default;
}


// Function BlueprintJson.JsonParseAsyncProxy.ParseJsonAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Json                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UJsonParseAsyncProxy*        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UJsonParseAsyncProxy* UJsonParseAsyncProxy::ParseJsonAsync(const class FString& Json)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonParseAsyncProxy", "ParseJsonAsync");

	Params::UJsonParseAsyncProxy_ParseJsonAsync_Params Parms{};

	Parms.Json = Json;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class BlueprintJson.JsonSaveAsyncProxy
// (None)

class UClass* UJsonSaveAsyncProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("JsonSaveAsyncProxy");

	return Clss;
}


// JsonSaveAsyncProxy BlueprintJson.Default__JsonSaveAsyncProxy
// (Public, ClassDefaultObject, ArchetypeObject)

class UJsonSaveAsyncProxy* UJsonSaveAsyncProxy::GetDefaultObj()
{
	static class UJsonSaveAsyncProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<UJsonSaveAsyncProxy*>(UJsonSaveAsyncProxy::StaticClass()->DefaultObject);

	return Default;
}


// Function BlueprintJson.JsonSaveAsyncProxy.SaveJsonToFileAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      FilePath                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UJsonObject*                 ObjectToSave                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UJsonSaveAsyncProxy*         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UJsonSaveAsyncProxy* UJsonSaveAsyncProxy::SaveJsonToFileAsync(const class FString& FilePath, class UJsonObject* ObjectToSave)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonSaveAsyncProxy", "SaveJsonToFileAsync");

	Params::UJsonSaveAsyncProxy_SaveJsonToFileAsync_Params Parms{};

	Parms.FilePath = FilePath;
	Parms.ObjectToSave = ObjectToSave;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class BlueprintJson.JsonValue
// (None)

class UClass* UJsonValue::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("JsonValue");

	return Clss;
}


// JsonValue BlueprintJson.Default__JsonValue
// (Public, ClassDefaultObject, ArchetypeObject)

class UJsonValue* UJsonValue::GetDefaultObj()
{
	static class UJsonValue* Default = nullptr;

	if (!Default)
		Default = static_cast<UJsonValue*>(UJsonValue::StaticClass()->DefaultObject);

	return Default;
}


// Function BlueprintJson.JsonValue.SwitchValueType
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// enum class EJsonType               Branches                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UJsonValue::SwitchValueType(enum class EJsonType* Branches)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonValue", "SwitchValueType");

	Params::UJsonValue_SwitchValueType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Branches != nullptr)
		*Branches = Parms.Branches;

}


// Function BlueprintJson.JsonValue.IsNull
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UJsonValue::IsNull()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonValue", "IsNull");

	Params::UJsonValue_IsNull_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class BlueprintJson.JsonObject
// (None)

class UClass* UJsonObject::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("JsonObject");

	return Clss;
}


// JsonObject BlueprintJson.Default__JsonObject
// (Public, ClassDefaultObject, ArchetypeObject)

class UJsonObject* UJsonObject::GetDefaultObj()
{
	static class UJsonObject* Default = nullptr;

	if (!Default)
		Default = static_cast<UJsonObject*>(UJsonObject::StaticClass()->DefaultObject);

	return Default;
}


// Function BlueprintJson.JsonObject.ToJsonValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UJsonValue*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UJsonValue* UJsonObject::ToJsonValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonObject", "ToJsonValue");

	Params::UJsonObject_ToJsonValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BlueprintJson.JsonObject.SetVectorField
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     FieldValue                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UJsonObject::SetVectorField(const class FString& FieldName, struct FVector& FieldValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonObject", "SetVectorField");

	Params::UJsonObject_SetVectorField_Params Parms{};

	Parms.FieldName = FieldName;
	Parms.FieldValue = FieldValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function BlueprintJson.JsonObject.SetVector2DField
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   FieldValue                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UJsonObject::SetVector2DField(const class FString& FieldName, struct FVector2D& FieldValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonObject", "SetVector2DField");

	Params::UJsonObject_SetVector2DField_Params Parms{};

	Parms.FieldName = FieldName;
	Parms.FieldValue = FieldValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function BlueprintJson.JsonObject.SetUObjectField
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     FieldValue                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UJsonObject::SetUObjectField(const class FString& FieldName, class UObject* FieldValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonObject", "SetUObjectField");

	Params::UJsonObject_SetUObjectField_Params Parms{};

	Parms.FieldName = FieldName;
	Parms.FieldValue = FieldValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function BlueprintJson.JsonObject.SetTransformField
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  FieldValue                                                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UJsonObject::SetTransformField(const class FString& FieldName, struct FTransform& FieldValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonObject", "SetTransformField");

	Params::UJsonObject_SetTransformField_Params Parms{};

	Parms.FieldName = FieldName;
	Parms.FieldValue = FieldValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function BlueprintJson.JsonObject.SetStringField
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      FieldValue                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UJsonObject::SetStringField(const class FString& FieldName, const class FString& FieldValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonObject", "SetStringField");

	Params::UJsonObject_SetStringField_Params Parms{};

	Parms.FieldName = FieldName;
	Parms.FieldValue = FieldValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function BlueprintJson.JsonObject.SetRotatorField
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    FieldValue                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UJsonObject::SetRotatorField(const class FString& FieldName, struct FRotator& FieldValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonObject", "SetRotatorField");

	Params::UJsonObject_SetRotatorField_Params Parms{};

	Parms.FieldName = FieldName;
	Parms.FieldValue = FieldValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function BlueprintJson.JsonObject.SetQuatField
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FQuat                       FieldValue                                                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UJsonObject::SetQuatField(const class FString& FieldName, struct FQuat& FieldValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonObject", "SetQuatField");

	Params::UJsonObject_SetQuatField_Params Parms{};

	Parms.FieldName = FieldName;
	Parms.FieldValue = FieldValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function BlueprintJson.JsonObject.SetObjectField
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UJsonObject*                 JsonObject                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UJsonObject::SetObjectField(const class FString& FieldName, class UJsonObject* JsonObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonObject", "SetObjectField");

	Params::UJsonObject_SetObjectField_Params Parms{};

	Parms.FieldName = FieldName;
	Parms.JsonObject = JsonObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function BlueprintJson.JsonObject.SetNullField
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UJsonObject::SetNullField(const class FString& FieldName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonObject", "SetNullField");

	Params::UJsonObject_SetNullField_Params Parms{};

	Parms.FieldName = FieldName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function BlueprintJson.JsonObject.SetLinearColorField
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                FieldValue                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UJsonObject::SetLinearColorField(const class FString& FieldName, struct FLinearColor& FieldValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonObject", "SetLinearColorField");

	Params::UJsonObject_SetLinearColorField_Params Parms{};

	Parms.FieldName = FieldName;
	Parms.FieldValue = FieldValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function BlueprintJson.JsonObject.SetIntegerField
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FieldValue                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UJsonObject::SetIntegerField(const class FString& FieldName, int32 FieldValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonObject", "SetIntegerField");

	Params::UJsonObject_SetIntegerField_Params Parms{};

	Parms.FieldName = FieldName;
	Parms.FieldValue = FieldValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function BlueprintJson.JsonObject.SetInteger64Field
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int64                              FieldValue                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UJsonObject::SetInteger64Field(const class FString& FieldName, int64 FieldValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonObject", "SetInteger64Field");

	Params::UJsonObject_SetInteger64Field_Params Parms{};

	Parms.FieldName = FieldName;
	Parms.FieldValue = FieldValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function BlueprintJson.JsonObject.SetHitResultField
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult                  FieldValue                                                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UJsonObject::SetHitResultField(const class FString& FieldName, struct FHitResult& FieldValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonObject", "SetHitResultField");

	Params::UJsonObject_SetHitResultField_Params Parms{};

	Parms.FieldName = FieldName;
	Parms.FieldValue = FieldValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function BlueprintJson.JsonObject.SetFloatField
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              FieldValue                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UJsonObject::SetFloatField(const class FString& FieldName, float FieldValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonObject", "SetFloatField");

	Params::UJsonObject_SetFloatField_Params Parms{};

	Parms.FieldName = FieldName;
	Parms.FieldValue = FieldValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function BlueprintJson.JsonObject.SetField
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UJsonValue*                  FieldValue                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UJsonObject::SetField(const class FString& FieldName, class UJsonValue* FieldValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonObject", "SetField");

	Params::UJsonObject_SetField_Params Parms{};

	Parms.FieldName = FieldName;
	Parms.FieldValue = FieldValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function BlueprintJson.JsonObject.SetColorField
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FColor                      FieldValue                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UJsonObject::SetColorField(const class FString& FieldName, struct FColor& FieldValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonObject", "SetColorField");

	Params::UJsonObject_SetColorField_Params Parms{};

	Parms.FieldName = FieldName;
	Parms.FieldValue = FieldValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function BlueprintJson.JsonObject.SetBooleanField
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               FieldValue                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UJsonObject::SetBooleanField(const class FString& FieldName, bool FieldValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonObject", "SetBooleanField");

	Params::UJsonObject_SetBooleanField_Params Parms{};

	Parms.FieldName = FieldName;
	Parms.FieldValue = FieldValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function BlueprintJson.JsonObject.SetArrayField
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UJsonValue*>          FieldValue                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UJsonObject::SetArrayField(const class FString& FieldName, TArray<class UJsonValue*>& FieldValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonObject", "SetArrayField");

	Params::UJsonObject_SetArrayField_Params Parms{};

	Parms.FieldName = FieldName;
	Parms.FieldValue = FieldValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function BlueprintJson.JsonObject.ParseJson
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      Json                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UJsonObject*                 ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UJsonObject* UJsonObject::ParseJson(const class FString& Json, bool* bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonObject", "ParseJson");

	Params::UJsonObject_ParseJson_Params Parms{};

	Parms.Json = Json;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

	return Parms.ReturnValue;

}


// Function BlueprintJson.JsonObject.IsFieldNull
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UJsonObject::IsFieldNull(const class FString& FieldName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonObject", "IsFieldNull");

	Params::UJsonObject_IsFieldNull_Params Parms{};

	Parms.FieldName = FieldName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BlueprintJson.JsonObject.HasField
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UJsonObject::HasField(const class FString& FieldName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonObject", "HasField");

	Params::UJsonObject_HasField_Params Parms{};

	Parms.FieldName = FieldName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BlueprintJson.JsonObject.GetFieldAsVector
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UJsonObject::GetFieldAsVector(const class FString& FieldName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonObject", "GetFieldAsVector");

	Params::UJsonObject_GetFieldAsVector_Params Parms{};

	Parms.FieldName = FieldName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BlueprintJson.JsonObject.GetFieldAsValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UJsonValue*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UJsonValue* UJsonObject::GetFieldAsValue(const class FString& FieldName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonObject", "GetFieldAsValue");

	Params::UJsonObject_GetFieldAsValue_Params Parms{};

	Parms.FieldName = FieldName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BlueprintJson.JsonObject.GetFieldAsString
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UJsonObject::GetFieldAsString(const class FString& FieldName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonObject", "GetFieldAsString");

	Params::UJsonObject_GetFieldAsString_Params Parms{};

	Parms.FieldName = FieldName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BlueprintJson.JsonObject.GetFieldAsObjectWrapper
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLightJsonObject            ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FLightJsonObject UJsonObject::GetFieldAsObjectWrapper(const class FString& FieldName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonObject", "GetFieldAsObjectWrapper");

	Params::UJsonObject_GetFieldAsObjectWrapper_Params Parms{};

	Parms.FieldName = FieldName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BlueprintJson.JsonObject.GetFieldAsObjectExec
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UJsonObject*                 ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UJsonObject* UJsonObject::GetFieldAsObjectExec(const class FString& FieldName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonObject", "GetFieldAsObjectExec");

	Params::UJsonObject_GetFieldAsObjectExec_Params Parms{};

	Parms.FieldName = FieldName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BlueprintJson.JsonObject.GetFieldAsObject
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UJsonObject*                 ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UJsonObject* UJsonObject::GetFieldAsObject(const class FString& FieldName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonObject", "GetFieldAsObject");

	Params::UJsonObject_GetFieldAsObject_Params Parms{};

	Parms.FieldName = FieldName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BlueprintJson.JsonObject.GetFieldAsInteger64
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int64                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int64 UJsonObject::GetFieldAsInteger64(const class FString& FieldName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonObject", "GetFieldAsInteger64");

	Params::UJsonObject_GetFieldAsInteger64_Params Parms{};

	Parms.FieldName = FieldName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BlueprintJson.JsonObject.GetFieldAsInteger
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UJsonObject::GetFieldAsInteger(const class FString& FieldName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonObject", "GetFieldAsInteger");

	Params::UJsonObject_GetFieldAsInteger_Params Parms{};

	Parms.FieldName = FieldName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BlueprintJson.JsonObject.GetFieldAsInt32Array
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int32>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<int32> UJsonObject::GetFieldAsInt32Array(const class FString& FieldName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonObject", "GetFieldAsInt32Array");

	Params::UJsonObject_GetFieldAsInt32Array_Params Parms{};

	Parms.FieldName = FieldName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BlueprintJson.JsonObject.GetFieldAsFloatArray
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<float> UJsonObject::GetFieldAsFloatArray(const class FString& FieldName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonObject", "GetFieldAsFloatArray");

	Params::UJsonObject_GetFieldAsFloatArray_Params Parms{};

	Parms.FieldName = FieldName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BlueprintJson.JsonObject.GetFieldAsFloat
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UJsonObject::GetFieldAsFloat(const class FString& FieldName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonObject", "GetFieldAsFloat");

	Params::UJsonObject_GetFieldAsFloat_Params Parms{};

	Parms.FieldName = FieldName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BlueprintJson.JsonObject.GetFieldAsBoolean
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UJsonObject::GetFieldAsBoolean(const class FString& FieldName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonObject", "GetFieldAsBoolean");

	Params::UJsonObject_GetFieldAsBoolean_Params Parms{};

	Parms.FieldName = FieldName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BlueprintJson.JsonObject.GetFieldAsArrayExec
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UJsonValue*>          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UJsonValue*> UJsonObject::GetFieldAsArrayExec(const class FString& FieldName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonObject", "GetFieldAsArrayExec");

	Params::UJsonObject_GetFieldAsArrayExec_Params Parms{};

	Parms.FieldName = FieldName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BlueprintJson.JsonObject.GetFieldAsArray
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UJsonValue*>          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UJsonValue*> UJsonObject::GetFieldAsArray(const class FString& FieldName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonObject", "GetFieldAsArray");

	Params::UJsonObject_GetFieldAsArray_Params Parms{};

	Parms.FieldName = FieldName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BlueprintJson.JsonObject.GetAllProperties
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FJsonObjectField>    OutValues                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UJsonObject::GetAllProperties(TArray<struct FJsonObjectField>* OutValues)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonObject", "GetAllProperties");

	Params::UJsonObject_GetAllProperties_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutValues != nullptr)
		*OutValues = std::move(Parms.OutValues);

}


// Function BlueprintJson.JsonObject.CreateJsonObject
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UJsonObject*                 ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UJsonObject* UJsonObject::CreateJsonObject()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonObject", "CreateJsonObject");

	Params::UJsonObject_CreateJsonObject_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}



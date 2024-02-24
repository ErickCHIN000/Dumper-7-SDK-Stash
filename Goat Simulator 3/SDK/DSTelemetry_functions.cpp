#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class DSTelemetry.DJSONArray
// (None)

class UClass* UDJSONArray::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DJSONArray");

	return Clss;
}


// DJSONArray DSTelemetry.Default__DJSONArray
// (Public, ClassDefaultObject, ArchetypeObject)

class UDJSONArray* UDJSONArray::GetDefaultObj()
{
	static class UDJSONArray* Default = nullptr;

	if (!Default)
		Default = static_cast<UDJSONArray*>(UDJSONArray::StaticClass()->DefaultObject);

	return Default;
}


// Function DSTelemetry.DJSONArray.CreateJSONArray
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDJSONArray*                 ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDJSONArray* UDJSONArray::CreateJSONArray(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DJSONArray", "CreateJSONArray");

	Params::UDJSONArray_CreateJSONArray_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DSTelemetry.DJSONArray.Clear
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDJSONArray::Clear()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DJSONArray", "Clear");

	Params::UDJSONArray_Clear_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DSTelemetry.DJSONArray.AsString
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UDJSONArray::AsString()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DJSONArray", "AsString");

	Params::UDJSONArray_AsString_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DSTelemetry.DJSONArray.AddStringItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Item                                                             (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDJSONArray::AddStringItem(const class FString& Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DJSONArray", "AddStringItem");

	Params::UDJSONArray_AddStringItem_Params Parms{};

	Parms.Item = Item;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DSTelemetry.DJSONArray.AddStringArrayItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class FString>              Item                                                             (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDJSONArray::AddStringArrayItem(const TArray<class FString>& Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DJSONArray", "AddStringArrayItem");

	Params::UDJSONArray_AddStringArrayItem_Params Parms{};

	Parms.Item = Item;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DSTelemetry.DJSONArray.AddJSONObjectItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDJSONObject*                Item                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDJSONArray::AddJSONObjectItem(class UDJSONObject* Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DJSONArray", "AddJSONObjectItem");

	Params::UDJSONArray_AddJSONObjectItem_Params Parms{};

	Parms.Item = Item;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DSTelemetry.DJSONArray.AddJSONObjectArrayItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class UDJSONObject*>        Item                                                             (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDJSONArray::AddJSONObjectArrayItem(const TArray<class UDJSONObject*>& Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DJSONArray", "AddJSONObjectArrayItem");

	Params::UDJSONArray_AddJSONObjectArrayItem_Params Parms{};

	Parms.Item = Item;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DSTelemetry.DJSONArray.AddJSONArrayItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDJSONArray*                 Item                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDJSONArray::AddJSONArrayItem(class UDJSONArray* Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DJSONArray", "AddJSONArrayItem");

	Params::UDJSONArray_AddJSONArrayItem_Params Parms{};

	Parms.Item = Item;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DSTelemetry.DJSONArray.AddJSONArrayArrayItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class UDJSONArray*>         Item                                                             (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDJSONArray::AddJSONArrayArrayItem(const TArray<class UDJSONArray*>& Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DJSONArray", "AddJSONArrayArrayItem");

	Params::UDJSONArray_AddJSONArrayArrayItem_Params Parms{};

	Parms.Item = Item;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DSTelemetry.DJSONArray.AddIntegerItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Item                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDJSONArray::AddIntegerItem(int32 Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DJSONArray", "AddIntegerItem");

	Params::UDJSONArray_AddIntegerItem_Params Parms{};

	Parms.Item = Item;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DSTelemetry.DJSONArray.AddIntegerArrayItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<int32>                      Item                                                             (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDJSONArray::AddIntegerArrayItem(const TArray<int32>& Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DJSONArray", "AddIntegerArrayItem");

	Params::UDJSONArray_AddIntegerArrayItem_Params Parms{};

	Parms.Item = Item;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DSTelemetry.DJSONArray.AddFloatItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Item                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDJSONArray::AddFloatItem(float Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DJSONArray", "AddFloatItem");

	Params::UDJSONArray_AddFloatItem_Params Parms{};

	Parms.Item = Item;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DSTelemetry.DJSONArray.AddFloatArrayItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<float>                      Item                                                             (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDJSONArray::AddFloatArrayItem(const TArray<float>& Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DJSONArray", "AddFloatArrayItem");

	Params::UDJSONArray_AddFloatArrayItem_Params Parms{};

	Parms.Item = Item;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DSTelemetry.DJSONArray.AddEmptyItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDJSONArray::AddEmptyItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DJSONArray", "AddEmptyItem");

	Params::UDJSONArray_AddEmptyItem_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DSTelemetry.DJSONArray.AddBooleanItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               Item                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDJSONArray::AddBooleanItem(bool Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DJSONArray", "AddBooleanItem");

	Params::UDJSONArray_AddBooleanItem_Params Parms{};

	Parms.Item = Item;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DSTelemetry.DJSONArray.AddBooleanArrayItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<bool>                       Item                                                             (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDJSONArray::AddBooleanArrayItem(const TArray<bool>& Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DJSONArray", "AddBooleanArrayItem");

	Params::UDJSONArray_AddBooleanArrayItem_Params Parms{};

	Parms.Item = Item;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class DSTelemetry.DJSONObject
// (None)

class UClass* UDJSONObject::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DJSONObject");

	return Clss;
}


// DJSONObject DSTelemetry.Default__DJSONObject
// (Public, ClassDefaultObject, ArchetypeObject)

class UDJSONObject* UDJSONObject::GetDefaultObj()
{
	static class UDJSONObject* Default = nullptr;

	if (!Default)
		Default = static_cast<UDJSONObject*>(UDJSONObject::StaticClass()->DefaultObject);

	return Default;
}


// Function DSTelemetry.DJSONObject.CreateJSONObject
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDJSONObject*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDJSONObject* UDJSONObject::CreateJSONObject(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DJSONObject", "CreateJSONObject");

	Params::UDJSONObject_CreateJSONObject_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DSTelemetry.DJSONObject.Clear
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDJSONObject::Clear()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DJSONObject", "Clear");

	Params::UDJSONObject_Clear_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DSTelemetry.DJSONObject.AsString
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UDJSONObject::AsString()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DJSONObject", "AsString");

	Params::UDJSONObject_AsString_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DSTelemetry.DJSONObject.AddStringField
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Value                                                            (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDJSONObject::AddStringField(const class FString& Key, const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DJSONObject", "AddStringField");

	Params::UDJSONObject_AddStringField_Params Parms{};

	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DSTelemetry.DJSONObject.AddStringArrayField
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              Value                                                            (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDJSONObject::AddStringArrayField(const class FString& Key, const TArray<class FString>& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DJSONObject", "AddStringArrayField");

	Params::UDJSONObject_AddStringArrayField_Params Parms{};

	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DSTelemetry.DJSONObject.AddJSONObjectField
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDJSONObject*                Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDJSONObject::AddJSONObjectField(const class FString& Key, class UDJSONObject* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DJSONObject", "AddJSONObjectField");

	Params::UDJSONObject_AddJSONObjectField_Params Parms{};

	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DSTelemetry.DJSONObject.AddJSONObjectArrayField
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UDJSONObject*>        Value                                                            (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDJSONObject::AddJSONObjectArrayField(const class FString& Key, const TArray<class UDJSONObject*>& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DJSONObject", "AddJSONObjectArrayField");

	Params::UDJSONObject_AddJSONObjectArrayField_Params Parms{};

	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DSTelemetry.DJSONObject.AddJSONArrayField
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDJSONArray*                 Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDJSONObject::AddJSONArrayField(const class FString& Key, class UDJSONArray* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DJSONObject", "AddJSONArrayField");

	Params::UDJSONObject_AddJSONArrayField_Params Parms{};

	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DSTelemetry.DJSONObject.AddJSONArrayArrayField
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UDJSONArray*>         Value                                                            (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDJSONObject::AddJSONArrayArrayField(const class FString& Key, const TArray<class UDJSONArray*>& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DJSONObject", "AddJSONArrayArrayField");

	Params::UDJSONObject_AddJSONArrayArrayField_Params Parms{};

	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DSTelemetry.DJSONObject.AddIntegerField
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDJSONObject::AddIntegerField(const class FString& Key, int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DJSONObject", "AddIntegerField");

	Params::UDJSONObject_AddIntegerField_Params Parms{};

	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DSTelemetry.DJSONObject.AddIntegerArrayField
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int32>                      Value                                                            (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDJSONObject::AddIntegerArrayField(const class FString& Key, const TArray<int32>& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DJSONObject", "AddIntegerArrayField");

	Params::UDJSONObject_AddIntegerArrayField_Params Parms{};

	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DSTelemetry.DJSONObject.AddFloatField
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDJSONObject::AddFloatField(const class FString& Key, float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DJSONObject", "AddFloatField");

	Params::UDJSONObject_AddFloatField_Params Parms{};

	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DSTelemetry.DJSONObject.AddFloatArrayField
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                      Value                                                            (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDJSONObject::AddFloatArrayField(const class FString& Key, const TArray<float>& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DJSONObject", "AddFloatArrayField");

	Params::UDJSONObject_AddFloatArrayField_Params Parms{};

	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DSTelemetry.DJSONObject.AddEmptyField
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDJSONObject::AddEmptyField(const class FString& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DJSONObject", "AddEmptyField");

	Params::UDJSONObject_AddEmptyField_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DSTelemetry.DJSONObject.AddBooleanField
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDJSONObject::AddBooleanField(const class FString& Key, bool Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DJSONObject", "AddBooleanField");

	Params::UDJSONObject_AddBooleanField_Params Parms{};

	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DSTelemetry.DJSONObject.AddBooleanArrayField
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<bool>                       Value                                                            (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDJSONObject::AddBooleanArrayField(const class FString& Key, const TArray<bool>& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DJSONObject", "AddBooleanArrayField");

	Params::UDJSONObject_AddBooleanArrayField_Params Parms{};

	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class DSTelemetry.DSTelemetry
// (None)

class UClass* UDSTelemetry::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DSTelemetry");

	return Clss;
}


// DSTelemetry DSTelemetry.Default__DSTelemetry
// (Public, ClassDefaultObject, ArchetypeObject)

class UDSTelemetry* UDSTelemetry::GetDefaultObj()
{
	static class UDSTelemetry* Default = nullptr;

	if (!Default)
		Default = static_cast<UDSTelemetry*>(UDSTelemetry::StaticClass()->DefaultObject);

	return Default;
}


// Function DSTelemetry.DSTelemetry.Terminate
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UDSTelemetry::Terminate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DSTelemetry", "Terminate");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function DSTelemetry.DSTelemetry.SubmitString
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      EventKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      EventData                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDSTelemetry::SubmitString(const class FString& EventKey, const class FString& EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DSTelemetry", "SubmitString");

	Params::UDSTelemetry_SubmitString_Params Parms{};

	Parms.EventKey = EventKey;
	Parms.EventData = EventData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DSTelemetry.DSTelemetry.SubmitSerialized
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      EventKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      EventData                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDSTelemetry::SubmitSerialized(const class FString& EventKey, const class FString& EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DSTelemetry", "SubmitSerialized");

	Params::UDSTelemetry_SubmitSerialized_Params Parms{};

	Parms.EventKey = EventKey;
	Parms.EventData = EventData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DSTelemetry.DSTelemetry.SubmitJSONObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      EventKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDJSONObject*                EventData                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDSTelemetry::SubmitJSONObject(const class FString& EventKey, class UDJSONObject* EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DSTelemetry", "SubmitJSONObject");

	Params::UDSTelemetry_SubmitJSONObject_Params Parms{};

	Parms.EventKey = EventKey;
	Parms.EventData = EventData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DSTelemetry.DSTelemetry.SubmitJSONArray
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      EventKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDJSONArray*                 EventData                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDSTelemetry::SubmitJSONArray(const class FString& EventKey, class UDJSONArray* EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DSTelemetry", "SubmitJSONArray");

	Params::UDSTelemetry_SubmitJSONArray_Params Parms{};

	Parms.EventKey = EventKey;
	Parms.EventData = EventData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DSTelemetry.DSTelemetry.SubmitInteger
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      EventKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              EventData                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDSTelemetry::SubmitInteger(const class FString& EventKey, int32 EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DSTelemetry", "SubmitInteger");

	Params::UDSTelemetry_SubmitInteger_Params Parms{};

	Parms.EventKey = EventKey;
	Parms.EventData = EventData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DSTelemetry.DSTelemetry.SubmitFloat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      EventKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              EventData                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDSTelemetry::SubmitFloat(const class FString& EventKey, float EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DSTelemetry", "SubmitFloat");

	Params::UDSTelemetry_SubmitFloat_Params Parms{};

	Parms.EventKey = EventKey;
	Parms.EventData = EventData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DSTelemetry.DSTelemetry.SubmitEmpty
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      EventKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDSTelemetry::SubmitEmpty(const class FString& EventKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DSTelemetry", "SubmitEmpty");

	Params::UDSTelemetry_SubmitEmpty_Params Parms{};

	Parms.EventKey = EventKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DSTelemetry.DSTelemetry.SubmitBoolean
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      EventKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               EventData                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDSTelemetry::SubmitBoolean(const class FString& EventKey, bool EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DSTelemetry", "SubmitBoolean");

	Params::UDSTelemetry_SubmitBoolean_Params Parms{};

	Parms.EventKey = EventKey;
	Parms.EventData = EventData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DSTelemetry.DSTelemetry.Start
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      GameID                                                           (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      BuildID                                                          (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDSTelemetry::Start(const class FString& GameID, const class FString& BuildID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DSTelemetry", "Start");

	Params::UDSTelemetry_Start_Params Parms{};

	Parms.GameID = GameID;
	Parms.BuildID = BuildID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DSTelemetry.DSTelemetry.SetStateString
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      StateKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      StateData                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDSTelemetry::SetStateString(const class FString& StateKey, const class FString& StateData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DSTelemetry", "SetStateString");

	Params::UDSTelemetry_SetStateString_Params Parms{};

	Parms.StateKey = StateKey;
	Parms.StateData = StateData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DSTelemetry.DSTelemetry.SetStateSerialized
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      StateKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      StateData                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDSTelemetry::SetStateSerialized(const class FString& StateKey, const class FString& StateData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DSTelemetry", "SetStateSerialized");

	Params::UDSTelemetry_SetStateSerialized_Params Parms{};

	Parms.StateKey = StateKey;
	Parms.StateData = StateData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DSTelemetry.DSTelemetry.SetStateJSONObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      StateKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDJSONObject*                StateData                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDSTelemetry::SetStateJSONObject(const class FString& StateKey, class UDJSONObject* StateData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DSTelemetry", "SetStateJSONObject");

	Params::UDSTelemetry_SetStateJSONObject_Params Parms{};

	Parms.StateKey = StateKey;
	Parms.StateData = StateData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DSTelemetry.DSTelemetry.SetStateJSONArray
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      StateKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDJSONArray*                 StateData                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDSTelemetry::SetStateJSONArray(const class FString& StateKey, class UDJSONArray* StateData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DSTelemetry", "SetStateJSONArray");

	Params::UDSTelemetry_SetStateJSONArray_Params Parms{};

	Parms.StateKey = StateKey;
	Parms.StateData = StateData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DSTelemetry.DSTelemetry.SetStateInteger
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      StateKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              StateData                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDSTelemetry::SetStateInteger(const class FString& StateKey, int32 StateData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DSTelemetry", "SetStateInteger");

	Params::UDSTelemetry_SetStateInteger_Params Parms{};

	Parms.StateKey = StateKey;
	Parms.StateData = StateData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DSTelemetry.DSTelemetry.SetStateFloat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      StateKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              StateData                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDSTelemetry::SetStateFloat(const class FString& StateKey, float StateData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DSTelemetry", "SetStateFloat");

	Params::UDSTelemetry_SetStateFloat_Params Parms{};

	Parms.StateKey = StateKey;
	Parms.StateData = StateData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DSTelemetry.DSTelemetry.SetStateEmpty
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      StateKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDSTelemetry::SetStateEmpty(const class FString& StateKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DSTelemetry", "SetStateEmpty");

	Params::UDSTelemetry_SetStateEmpty_Params Parms{};

	Parms.StateKey = StateKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DSTelemetry.DSTelemetry.SetStateBoolean
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      StateKey                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               StateData                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDSTelemetry::SetStateBoolean(const class FString& StateKey, bool StateData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DSTelemetry", "SetStateBoolean");

	Params::UDSTelemetry_SetStateBoolean_Params Parms{};

	Parms.StateKey = StateKey;
	Parms.StateData = StateData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DSTelemetry.DSTelemetry.SetOnlinePlatformUserID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      OnlinePlatformUserID                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDSTelemetry::SetOnlinePlatformUserID(const class FString& OnlinePlatformUserID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DSTelemetry", "SetOnlinePlatformUserID");

	Params::UDSTelemetry_SetOnlinePlatformUserID_Params Parms{};

	Parms.OnlinePlatformUserID = OnlinePlatformUserID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DSTelemetry.DSTelemetry.SetOnlinePlatformIdentifier
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      OnlinePlatformIdentifier                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDSTelemetry::SetOnlinePlatformIdentifier(const class FString& OnlinePlatformIdentifier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DSTelemetry", "SetOnlinePlatformIdentifier");

	Params::UDSTelemetry_SetOnlinePlatformIdentifier_Params Parms{};

	Parms.OnlinePlatformIdentifier = OnlinePlatformIdentifier;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DSTelemetry.DSTelemetry.Resume
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UDSTelemetry::Resume()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DSTelemetry", "Resume");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function DSTelemetry.DSTelemetry.Pause
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UDSTelemetry::Pause()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DSTelemetry", "Pause");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function DSTelemetry.DSTelemetry.IsTerminated
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDSTelemetry::IsTerminated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DSTelemetry", "IsTerminated");

	Params::UDSTelemetry_IsTerminated_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DSTelemetry.DSTelemetry.IsPaused
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDSTelemetry::IsPaused()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DSTelemetry", "IsPaused");

	Params::UDSTelemetry_IsPaused_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DSTelemetry.DSTelemetry.GetTelemetryInstanceID
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int64                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int64 UDSTelemetry::GetTelemetryInstanceID()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DSTelemetry", "GetTelemetryInstanceID");

	Params::UDSTelemetry_GetTelemetryInstanceID_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DSTelemetry.DSTelemetry.CreateTelemetry
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDSTelemetry*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDSTelemetry* UDSTelemetry::CreateTelemetry(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DSTelemetry", "CreateTelemetry");

	Params::UDSTelemetry_CreateTelemetry_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}



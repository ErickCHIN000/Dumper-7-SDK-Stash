#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class TelemetryRuntime.TelemetrySerializationInterface
// (None)

class UClass* ITelemetrySerializationInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TelemetrySerializationInterface");

	return Clss;
}


// TelemetrySerializationInterface TelemetryRuntime.Default__TelemetrySerializationInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class ITelemetrySerializationInterface* ITelemetrySerializationInterface::GetDefaultObj()
{
	static class ITelemetrySerializationInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<ITelemetrySerializationInterface*>(ITelemetrySerializationInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function TelemetryRuntime.TelemetrySerializationInterface.GetTelemetryAttribute_PositionVector
// (Native, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                     OutPositionVector                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ITelemetrySerializationInterface::GetTelemetryAttribute_PositionVector(struct FVector* OutPositionVector)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TelemetrySerializationInterface", "GetTelemetryAttribute_PositionVector");

	Params::ITelemetrySerializationInterface_GetTelemetryAttribute_PositionVector_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutPositionVector != nullptr)
		*OutPositionVector = std::move(Parms.OutPositionVector);

	return Parms.ReturnValue;

}


// Function TelemetryRuntime.TelemetrySerializationInterface.GetTelemetryAttribute_ObjectUniqueId
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FString                      OutUniqueID                                                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ITelemetrySerializationInterface::GetTelemetryAttribute_ObjectUniqueId(class FString* OutUniqueID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TelemetrySerializationInterface", "GetTelemetryAttribute_ObjectUniqueId");

	Params::ITelemetrySerializationInterface_GetTelemetryAttribute_ObjectUniqueId_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutUniqueID != nullptr)
		*OutUniqueID = std::move(Parms.OutUniqueID);

	return Parms.ReturnValue;

}


// Function TelemetryRuntime.TelemetrySerializationInterface.GetTelemetryAttribute_ObjectType
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FString                      OutObjectType                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ITelemetrySerializationInterface::GetTelemetryAttribute_ObjectType(class FString* OutObjectType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TelemetrySerializationInterface", "GetTelemetryAttribute_ObjectType");

	Params::ITelemetrySerializationInterface_GetTelemetryAttribute_ObjectType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutObjectType != nullptr)
		*OutObjectType = std::move(Parms.OutObjectType);

}


// Function TelemetryRuntime.TelemetrySerializationInterface.GetTelemetryAttribute_ObjectName
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FString                      OutObjectName                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ITelemetrySerializationInterface::GetTelemetryAttribute_ObjectName(class FString* OutObjectName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TelemetrySerializationInterface", "GetTelemetryAttribute_ObjectName");

	Params::ITelemetrySerializationInterface_GetTelemetryAttribute_ObjectName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutObjectName != nullptr)
		*OutObjectName = std::move(Parms.OutObjectName);

	return Parms.ReturnValue;

}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PingComponent.BP_PingComponent_C
// (None)

class UClass* UBP_PingComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PingComponent_C");

	return Clss;
}


// BP_PingComponent_C BP_PingComponent.Default__BP_PingComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PingComponent_C* UBP_PingComponent_C::GetDefaultObj()
{
	static class UBP_PingComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PingComponent_C*>(UBP_PingComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PingComponent.BP_PingComponent_C.GetDefaultActionStationType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_ActionStationType  ActionStationType                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PingComponent_C::GetDefaultActionStationType(enum class Enum_ActionStationType* ActionStationType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PingComponent_C", "GetDefaultActionStationType");

	Params::UBP_PingComponent_C_GetDefaultActionStationType_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ActionStationType != nullptr)
		*ActionStationType = Parms.ActionStationType;

}


// Function BP_PingComponent.BP_PingComponent_C.GetPingObjectType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_PingObjectType        PingObjectType                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        DataTableRowName                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PingComponent_C::GetPingObjectType(enum class E_PingObjectType* PingObjectType, class FName* DataTableRowName, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PingComponent_C", "GetPingObjectType");

	Params::UBP_PingComponent_C_GetPingObjectType_Params Parms{};

	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PingObjectType != nullptr)
		*PingObjectType = Parms.PingObjectType;

	if (DataTableRowName != nullptr)
		*DataTableRowName = Parms.DataTableRowName;

}


// Function BP_PingComponent.BP_PingComponent_C.OnRep_PingObjectType
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PingComponent_C::OnRep_PingObjectType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PingComponent_C", "OnRep_PingObjectType");



	UObject::ProcessEvent(Func, nullptr);

}

}



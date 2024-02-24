#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Modifier_Enraged.BP_Modifier_Enraged_C
// (None)

class UClass* UBP_Modifier_Enraged_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Modifier_Enraged_C");

	return Clss;
}


// BP_Modifier_Enraged_C BP_Modifier_Enraged.Default__BP_Modifier_Enraged_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Modifier_Enraged_C* UBP_Modifier_Enraged_C::GetDefaultObj()
{
	static class UBP_Modifier_Enraged_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Modifier_Enraged_C*>(UBP_Modifier_Enraged_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Modifier_Enraged.BP_Modifier_Enraged_C.ModifierRemoved
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_NPC_RockDog_Character_C* K2Node_DynamicCast_AsBP_NPC_Rock_Dog_Character                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ModifierRemoved_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBP_Modifier_Enraged_C::ModifierRemoved(bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABP_NPC_RockDog_Character_C* K2Node_DynamicCast_AsBP_NPC_Rock_Dog_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_ModifierRemoved_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Modifier_Enraged_C", "ModifierRemoved");

	Params::UBP_Modifier_Enraged_C_ModifierRemoved_Params Parms{};

	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_NPC_Rock_Dog_Character = K2Node_DynamicCast_AsBP_NPC_Rock_Dog_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_ModifierRemoved_ReturnValue = CallFunc_ModifierRemoved_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Modifier_Enraged.BP_Modifier_Enraged_C.ModifierTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Modifier_Enraged_C::ModifierTick(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Modifier_Enraged_C", "ModifierTick");

	Params::UBP_Modifier_Enraged_C_ModifierTick_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Modifier_Enraged.BP_Modifier_Enraged_C.InitComponent
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_Modifier_Enraged_C::InitComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Modifier_Enraged_C", "InitComponent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Modifier_Enraged.BP_Modifier_Enraged_C.ExecuteUbergraph_BP_Modifier_Enraged
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_NPC_RockDog_Character_C* K2Node_DynamicCast_AsBP_NPC_Rock_Dog_Character                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaTime                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Modifier_Enraged_C::ExecuteUbergraph_BP_Modifier_Enraged(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, class ABP_NPC_RockDog_Character_C* K2Node_DynamicCast_AsBP_NPC_Rock_Dog_Character, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Modifier_Enraged_C", "ExecuteUbergraph_BP_Modifier_Enraged");

	Params::UBP_Modifier_Enraged_C_ExecuteUbergraph_BP_Modifier_Enraged_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_NPC_Rock_Dog_Character = K2Node_DynamicCast_AsBP_NPC_Rock_Dog_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_DeltaTime = K2Node_Event_DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}

}



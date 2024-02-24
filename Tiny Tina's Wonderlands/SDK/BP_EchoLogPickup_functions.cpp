#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_EchoLogPickup.BP_EchoLogPickup_C
// (Actor)

class UClass* ABP_EchoLogPickup_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_EchoLogPickup_C");

	return Clss;
}


// BP_EchoLogPickup_C BP_EchoLogPickup.Default__BP_EchoLogPickup_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_EchoLogPickup_C* ABP_EchoLogPickup_C::GetDefaultObj()
{
	static class ABP_EchoLogPickup_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_EchoLogPickup_C*>(ABP_EchoLogPickup_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_EchoLogPickup.BP_EchoLogPickup_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_EchoLogPickup_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EchoLogPickup_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_EchoLogPickup.BP_EchoLogPickup_C.OnPickedUpEvent
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      WasPickedUpBy                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EchoLogPickup_C::OnPickedUpEvent(class AActor* WasPickedUpBy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EchoLogPickup_C", "OnPickedUpEvent");

	Params::ABP_EchoLogPickup_C_OnPickedUpEvent_Params Parms{};

	Parms.WasPickedUpBy = WasPickedUpBy;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EchoLogPickup.BP_EchoLogPickup_C.ExecuteUbergraph_BP_EchoLogPickup
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_WasPickedUpBy                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOakCharacter_Player*        K2Node_DynamicCast_AsOak_Character_Player                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AOakCharacter_Overworld*     K2Node_DynamicCast_AsOak_Character_Overworld                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_EchoLogPickup_C::ExecuteUbergraph_BP_EchoLogPickup(int32 EntryPoint, class AActor* K2Node_Event_WasPickedUpBy, class AOakCharacter_Player* K2Node_DynamicCast_AsOak_Character_Player, bool K2Node_DynamicCast_bSuccess, class AOakCharacter_Overworld* K2Node_DynamicCast_AsOak_Character_Overworld, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EchoLogPickup_C", "ExecuteUbergraph_BP_EchoLogPickup");

	Params::ABP_EchoLogPickup_C_ExecuteUbergraph_BP_EchoLogPickup_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_WasPickedUpBy = K2Node_Event_WasPickedUpBy;
	Parms.K2Node_DynamicCast_AsOak_Character_Player = K2Node_DynamicCast_AsOak_Character_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsOak_Character_Overworld = K2Node_DynamicCast_AsOak_Character_Overworld;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}



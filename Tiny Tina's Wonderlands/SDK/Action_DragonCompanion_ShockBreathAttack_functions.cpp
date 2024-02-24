#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_DragonCompanion_ShockBreathAttack.Action_DragonCompanion_ShockBreathAttack_C
// (None)

class UClass* UAction_DragonCompanion_ShockBreathAttack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_DragonCompanion_ShockBreathAttack_C");

	return Clss;
}


// Action_DragonCompanion_ShockBreathAttack_C Action_DragonCompanion_ShockBreathAttack.Default__Action_DragonCompanion_ShockBreathAttack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_DragonCompanion_ShockBreathAttack_C* UAction_DragonCompanion_ShockBreathAttack_C::GetDefaultObj()
{
	static class UAction_DragonCompanion_ShockBreathAttack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_DragonCompanion_ShockBreathAttack_C*>(UAction_DragonCompanion_ShockBreathAttack_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Action_DragonCompanion_ShockBreathAttack.Action_DragonCompanion_ShockBreathAttack_C.StartAttack
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAction_DragonCompanion_ShockBreathAttack_C::StartAttack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_DragonCompanion_ShockBreathAttack_C", "StartAttack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Action_DragonCompanion_ShockBreathAttack.Action_DragonCompanion_ShockBreathAttack_C.StopAttack
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAction_DragonCompanion_ShockBreathAttack_C::StopAttack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_DragonCompanion_ShockBreathAttack_C", "StopAttack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Action_DragonCompanion_ShockBreathAttack.Action_DragonCompanion_ShockBreathAttack_C.ExecuteUbergraph_Action_DragonCompanion_ShockBreathAttack
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IIDrone_KnightOfTheClaw_DragonPet_C>K2Node_DynamicCast_AsIDrone_Knight_Of_the_Claw_Dragon_Pet        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IIDrone_KnightOfTheClaw_DragonPet_C>K2Node_DynamicCast_AsIDrone_Knight_Of_the_Claw_Dragon_Pet1       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ExternalDragonCompanionCreateShockBreath_Res            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ExternalDragonCompanionStopShockBreath_Res              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAction_DragonCompanion_ShockBreathAttack_C::ExecuteUbergraph_Action_DragonCompanion_ShockBreathAttack(int32 EntryPoint, class AActor* CallFunc_K2_GetActor_ReturnValue, TScriptInterface<class IIDrone_KnightOfTheClaw_DragonPet_C> K2Node_DynamicCast_AsIDrone_Knight_Of_the_Claw_Dragon_Pet, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IIDrone_KnightOfTheClaw_DragonPet_C> K2Node_DynamicCast_AsIDrone_Knight_Of_the_Claw_Dragon_Pet1, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_ExternalDragonCompanionCreateShockBreath_Res, bool CallFunc_ExternalDragonCompanionStopShockBreath_Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_DragonCompanion_ShockBreathAttack_C", "ExecuteUbergraph_Action_DragonCompanion_ShockBreathAttack");

	Params::UAction_DragonCompanion_ShockBreathAttack_C_ExecuteUbergraph_Action_DragonCompanion_ShockBreathAttack_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_GetActor_ReturnValue = CallFunc_K2_GetActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsIDrone_Knight_Of_the_Claw_Dragon_Pet = K2Node_DynamicCast_AsIDrone_Knight_Of_the_Claw_Dragon_Pet;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsIDrone_Knight_Of_the_Claw_Dragon_Pet1 = K2Node_DynamicCast_AsIDrone_Knight_Of_the_Claw_Dragon_Pet1;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_ExternalDragonCompanionCreateShockBreath_Res = CallFunc_ExternalDragonCompanionCreateShockBreath_Res;
	Parms.CallFunc_ExternalDragonCompanionStopShockBreath_Res = CallFunc_ExternalDragonCompanionStopShockBreath_Res;

	UObject::ProcessEvent(Func, &Parms);

}

}



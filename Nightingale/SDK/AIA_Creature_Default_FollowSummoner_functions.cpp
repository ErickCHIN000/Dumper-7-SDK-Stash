#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AIA_Creature_Default_FollowSummoner.AIA_Creature_Default_FollowSummoner_C
// (None)

class UClass* UAIA_Creature_Default_FollowSummoner_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIA_Creature_Default_FollowSummoner_C");

	return Clss;
}


// AIA_Creature_Default_FollowSummoner_C AIA_Creature_Default_FollowSummoner.Default__AIA_Creature_Default_FollowSummoner_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAIA_Creature_Default_FollowSummoner_C* UAIA_Creature_Default_FollowSummoner_C::GetDefaultObj()
{
	static class UAIA_Creature_Default_FollowSummoner_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIA_Creature_Default_FollowSummoner_C*>(UAIA_Creature_Default_FollowSummoner_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AIA_Creature_Default_FollowSummoner.AIA_Creature_Default_FollowSummoner_C.CheckStaticTargetRequirements
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_TryGetBlackboardObject_Value                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EBlackboardGetResult    CallFunc_TryGetBlackboardObject_Branches                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UAIA_Creature_Default_FollowSummoner_C::CheckStaticTargetRequirements(class AActor* Target, class UObject* CallFunc_TryGetBlackboardObject_Value, enum class EBlackboardGetResult CallFunc_TryGetBlackboardObject_Branches, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIA_Creature_Default_FollowSummoner_C", "CheckStaticTargetRequirements");

	Params::UAIA_Creature_Default_FollowSummoner_C_CheckStaticTargetRequirements_Params Parms{};

	Parms.Target = Target;
	Parms.CallFunc_TryGetBlackboardObject_Value = CallFunc_TryGetBlackboardObject_Value;
	Parms.CallFunc_TryGetBlackboardObject_Branches = CallFunc_TryGetBlackboardObject_Branches;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIA_Creature_Default_FollowSummoner.AIA_Creature_Default_FollowSummoner_C.CheckOwnerRequirements
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UAIA_Creature_Default_FollowSummoner_C::CheckOwnerRequirements(const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_ActorHasTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIA_Creature_Default_FollowSummoner_C", "CheckOwnerRequirements");

	Params::UAIA_Creature_Default_FollowSummoner_C_CheckOwnerRequirements_Params Parms{};

	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_ActorHasTag_ReturnValue = CallFunc_ActorHasTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIA_Creature_Default_FollowSummoner.AIA_Creature_Default_FollowSummoner_C.Start
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UAIA_Creature_Default_FollowSummoner_C::Start(class AActor* Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIA_Creature_Default_FollowSummoner_C", "Start");

	Params::UAIA_Creature_Default_FollowSummoner_C_Start_Params Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIA_Creature_Default_FollowSummoner.AIA_Creature_Default_FollowSummoner_C.ExecuteUbergraph_AIA_Creature_Default_FollowSummoner
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Target                                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IAICCreatureDataInterface>CallFunc_GetCreatureDispersionRadius_self_CastInput              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCreatureDispersionRadius_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetBBVar_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIA_Creature_Default_FollowSummoner_C::ExecuteUbergraph_AIA_Creature_Default_FollowSummoner(int32 EntryPoint, class AActor* K2Node_Event_Target, TScriptInterface<class IAICCreatureDataInterface> CallFunc_GetCreatureDispersionRadius_self_CastInput, float CallFunc_GetCreatureDispersionRadius_ReturnValue, class FName CallFunc_GetBBVar_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIA_Creature_Default_FollowSummoner_C", "ExecuteUbergraph_AIA_Creature_Default_FollowSummoner");

	Params::UAIA_Creature_Default_FollowSummoner_C_ExecuteUbergraph_AIA_Creature_Default_FollowSummoner_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Target = K2Node_Event_Target;
	Parms.CallFunc_GetCreatureDispersionRadius_self_CastInput = CallFunc_GetCreatureDispersionRadius_self_CastInput;
	Parms.CallFunc_GetCreatureDispersionRadius_ReturnValue = CallFunc_GetCreatureDispersionRadius_ReturnValue;
	Parms.CallFunc_GetBBVar_ReturnValue = CallFunc_GetBBVar_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}



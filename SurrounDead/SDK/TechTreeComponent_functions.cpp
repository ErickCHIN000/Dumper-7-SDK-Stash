#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TechTreeComponent.TechTreeComponent_C
// (None)

class UClass* UTechTreeComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TechTreeComponent_C");

	return Clss;
}


// TechTreeComponent_C TechTreeComponent.Default__TechTreeComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTechTreeComponent_C* UTechTreeComponent_C::GetDefaultObj()
{
	static class UTechTreeComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTechTreeComponent_C*>(UTechTreeComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TechTreeComponent.TechTreeComponent_C.ResetTreeComplete
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_MPPlayerController_C*    K2Node_DynamicCast_AsBP_MPPlayer_Controller                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerCharacter_C*       K2Node_DynamicCast_AsBP_Player_Character                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTechTreeComponent_C::ResetTreeComplete(class AActor* CallFunc_GetOwner_ReturnValue, class ABP_MPPlayerController_C* K2Node_DynamicCast_AsBP_MPPlayer_Controller, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue, class ABP_PlayerCharacter_C* K2Node_DynamicCast_AsBP_Player_Character, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TechTreeComponent_C", "ResetTreeComplete");

	Params::UTechTreeComponent_C_ResetTreeComplete_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_MPPlayer_Controller = K2Node_DynamicCast_AsBP_MPPlayer_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Player_Character = K2Node_DynamicCast_AsBP_Player_Character;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TechTreeComponent.TechTreeComponent_C.ResetTree
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_MPPlayerController_C*    K2Node_DynamicCast_AsBP_MPPlayer_Controller                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerCharacter_C*       K2Node_DynamicCast_AsBP_Player_Character                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTechTreeComponent_C::ResetTree(class AActor* CallFunc_GetOwner_ReturnValue, class ABP_MPPlayerController_C* K2Node_DynamicCast_AsBP_MPPlayer_Controller, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue, class ABP_PlayerCharacter_C* K2Node_DynamicCast_AsBP_Player_Character, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TechTreeComponent_C", "ResetTree");

	Params::UTechTreeComponent_C_ResetTree_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_MPPlayer_Controller = K2Node_DynamicCast_AsBP_MPPlayer_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Player_Character = K2Node_DynamicCast_AsBP_Player_Character;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TechTreeComponent.TechTreeComponent_C.Add Skill Points
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTechTreeComponent_C::Add_Skill_Points(int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TechTreeComponent_C", "Add Skill Points");

	Params::UTechTreeComponent_C_Add_Skill_Points_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TechTreeComponent.TechTreeComponent_C.PayCost
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Cost                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTechTreeComponent_C::PayCost(int32 Cost, int32 CallFunc_Subtract_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TechTreeComponent_C", "PayCost");

	Params::UTechTreeComponent_C_PayCost_Params Parms{};

	Parms.Cost = Cost;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TechTreeComponent.TechTreeComponent_C.HasEnoughResources
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              TechnologyCost                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               EnoughResources                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTechTreeComponent_C::HasEnoughResources(int32 TechnologyCost, bool* EnoughResources, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TechTreeComponent_C", "HasEnoughResources");

	Params::UTechTreeComponent_C_HasEnoughResources_Params Parms{};

	Parms.TechnologyCost = TechnologyCost;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (EnoughResources != nullptr)
		*EnoughResources = Parms.EnoughResources;

}


// Function TechTreeComponent.TechTreeComponent_C.TryPayTechnologyCost
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Cost                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasEnoughResources_EnoughResources                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTechTreeComponent_C::TryPayTechnologyCost(int32 Cost, bool* Success, bool CallFunc_HasEnoughResources_EnoughResources)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TechTreeComponent_C", "TryPayTechnologyCost");

	Params::UTechTreeComponent_C_TryPayTechnologyCost_Params Parms{};

	Parms.Cost = Cost;
	Parms.CallFunc_HasEnoughResources_EnoughResources = CallFunc_HasEnoughResources_EnoughResources;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function TechTreeComponent.TechTreeComponent_C.CheckUnlockCost
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTechnologyAsset*            Technology                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CanUnlock                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_SkillTreeAsset_C*        K2Node_DynamicCast_AsBP_Skill_Tree_Asset                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryPayTechnologyCost_Success                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTechTreeComponent_C::CheckUnlockCost(class UTechnologyAsset* Technology, bool* CanUnlock, class UBP_SkillTreeAsset_C* K2Node_DynamicCast_AsBP_Skill_Tree_Asset, bool K2Node_DynamicCast_bSuccess, bool CallFunc_TryPayTechnologyCost_Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TechTreeComponent_C", "CheckUnlockCost");

	Params::UTechTreeComponent_C_CheckUnlockCost_Params Parms{};

	Parms.Technology = Technology;
	Parms.K2Node_DynamicCast_AsBP_Skill_Tree_Asset = K2Node_DynamicCast_AsBP_Skill_Tree_Asset;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_TryPayTechnologyCost_Success = CallFunc_TryPayTechnologyCost_Success;

	UObject::ProcessEvent(Func, &Parms);

	if (CanUnlock != nullptr)
		*CanUnlock = Parms.CanUnlock;

}


// Function TechTreeComponent.TechTreeComponent_C.TryToUnlockTechnology
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTechnologyAsset*            Technology                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UTechTreeComponent_C::TryToUnlockTechnology(class UTechnologyAsset* Technology)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TechTreeComponent_C", "TryToUnlockTechnology");

	Params::UTechTreeComponent_C_TryToUnlockTechnology_Params Parms{};

	Parms.Technology = Technology;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TechTreeComponent.TechTreeComponent_C.ComponentPreSave
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTechTreeComponent_C::ComponentPreSave()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TechTreeComponent_C", "ComponentPreSave");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TechTreeComponent.TechTreeComponent_C.ComponentLoaded
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTechTreeComponent_C::ComponentLoaded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TechTreeComponent_C", "ComponentLoaded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TechTreeComponent.TechTreeComponent_C.ExecuteUbergraph_TechTreeComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTechnologyAsset*            K2Node_CustomEvent_Technology                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckUnlockCost_CanUnlock                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasUnlockedParents_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsTechnologyUnlocked_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTechTreeComponent_C::ExecuteUbergraph_TechTreeComponent(int32 EntryPoint, class UTechnologyAsset* K2Node_CustomEvent_Technology, bool CallFunc_CheckUnlockCost_CanUnlock, bool CallFunc_HasUnlockedParents_ReturnValue, bool CallFunc_IsTechnologyUnlocked_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TechTreeComponent_C", "ExecuteUbergraph_TechTreeComponent");

	Params::UTechTreeComponent_C_ExecuteUbergraph_TechTreeComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Technology = K2Node_CustomEvent_Technology;
	Parms.CallFunc_CheckUnlockCost_CanUnlock = CallFunc_CheckUnlockCost_CanUnlock;
	Parms.CallFunc_HasUnlockedParents_ReturnValue = CallFunc_HasUnlockedParents_ReturnValue;
	Parms.CallFunc_IsTechnologyUnlocked_ReturnValue = CallFunc_IsTechnologyUnlocked_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}



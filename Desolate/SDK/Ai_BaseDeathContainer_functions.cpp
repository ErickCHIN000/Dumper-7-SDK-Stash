#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ai_BaseDeathContainer.Ai_BaseDeathContainer_C
// (Actor)

class UClass* AAi_BaseDeathContainer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ai_BaseDeathContainer_C");

	return Clss;
}


// Ai_BaseDeathContainer_C Ai_BaseDeathContainer.Default__Ai_BaseDeathContainer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAi_BaseDeathContainer_C* AAi_BaseDeathContainer_C::GetDefaultObj()
{
	static class AAi_BaseDeathContainer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAi_BaseDeathContainer_C*>(AAi_BaseDeathContainer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Ai_BaseDeathContainer.Ai_BaseDeathContainer_C.RollBonusLootList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      LootList                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetDefaultObject_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ClassClass_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGenericLootList_C*          K2Node_DynamicCast_AsGeneric_Loot_List                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_Roll_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void AAi_BaseDeathContainer_C::RollBonusLootList(class UClass* LootList, class UObject* CallFunc_GetDefaultObject_ReturnValue, bool CallFunc_NotEqual_ClassClass_ReturnValue, class AGenericLootList_C* K2Node_DynamicCast_AsGeneric_Loot_List, bool K2Node_DynamicCast_bSuccess, class UClass* CallFunc_Roll_ReturnValue, bool CallFunc_IsValidClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ai_BaseDeathContainer_C", "RollBonusLootList");

	Params::AAi_BaseDeathContainer_C_RollBonusLootList_Params Parms{};

	Parms.LootList = LootList;
	Parms.CallFunc_GetDefaultObject_ReturnValue = CallFunc_GetDefaultObject_ReturnValue;
	Parms.CallFunc_NotEqual_ClassClass_ReturnValue = CallFunc_NotEqual_ClassClass_ReturnValue;
	Parms.K2Node_DynamicCast_AsGeneric_Loot_List = K2Node_DynamicCast_AsGeneric_Loot_List;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Roll_ReturnValue = CallFunc_Roll_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ai_BaseDeathContainer.Ai_BaseDeathContainer_C.RollSkillBasedLootList
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASHPlayerCharacter*          PlayerCharacter                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RollSecondSkinDrop_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RollSecondMeatDrop_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RollSkillBasedLootList_Result                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void AAi_BaseDeathContainer_C::RollSkillBasedLootList(class ASHPlayerCharacter* PlayerCharacter, bool* Result, bool CallFunc_RollSecondSkinDrop_ReturnValue, bool CallFunc_RollSecondMeatDrop_ReturnValue, bool CallFunc_RollSkillBasedLootList_Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ai_BaseDeathContainer_C", "RollSkillBasedLootList");

	Params::AAi_BaseDeathContainer_C_RollSkillBasedLootList_Params Parms{};

	Parms.PlayerCharacter = PlayerCharacter;
	Parms.CallFunc_RollSecondSkinDrop_ReturnValue = CallFunc_RollSecondSkinDrop_ReturnValue;
	Parms.CallFunc_RollSecondMeatDrop_ReturnValue = CallFunc_RollSecondMeatDrop_ReturnValue;
	Parms.CallFunc_RollSkillBasedLootList_Result = CallFunc_RollSkillBasedLootList_Result;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function Ai_BaseDeathContainer.Ai_BaseDeathContainer_C.GetTrophyRollAdditionalChance
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ASHPlayerCharacter*          PlayerCharacter                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Chance                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAiTrophyLootChance_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAi_BaseDeathContainer_C::GetTrophyRollAdditionalChance(class ASHPlayerCharacter* PlayerCharacter, float* Chance, float CallFunc_GetAiTrophyLootChance_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ai_BaseDeathContainer_C", "GetTrophyRollAdditionalChance");

	Params::AAi_BaseDeathContainer_C_GetTrophyRollAdditionalChance_Params Parms{};

	Parms.PlayerCharacter = PlayerCharacter;
	Parms.CallFunc_GetAiTrophyLootChance_ReturnValue = CallFunc_GetAiTrophyLootChance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Chance != nullptr)
		*Chance = Parms.Chance;

}

}



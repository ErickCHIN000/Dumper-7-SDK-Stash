#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NPC_Engineer.NPC_Engineer_C
// (Actor, Pawn)

class UClass* ANPC_Engineer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NPC_Engineer_C");

	return Clss;
}


// NPC_Engineer_C NPC_Engineer.Default__NPC_Engineer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ANPC_Engineer_C* ANPC_Engineer_C::GetDefaultObj()
{
	static class ANPC_Engineer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ANPC_Engineer_C*>(ANPC_Engineer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function NPC_Engineer.NPC_Engineer_C.OnUseActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASHPlayerCharacter*          Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANPC_Engineer_C::OnUseActor(class ASHPlayerCharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Engineer_C", "OnUseActor");

	Params::ANPC_Engineer_C_OnUseActor_Params Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Engineer.NPC_Engineer_C.ExecuteUbergraph_NPC_Engineer
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASHPlayerCharacter*          K2Node_Event_Character                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IICharacterStatObserver_C>K2Node_DynamicCast_AsICharacter_Stat_Observer                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USHQuestDiaryComponent*      CallFunc_GetQuestDiary_Return                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HaveActiveQuestTask_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HaveActiveQuestTask_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void ANPC_Engineer_C::ExecuteUbergraph_NPC_Engineer(int32 EntryPoint, class ASHPlayerCharacter* K2Node_Event_Character, TScriptInterface<class IICharacterStatObserver_C> K2Node_DynamicCast_AsICharacter_Stat_Observer, bool K2Node_DynamicCast_bSuccess, class USHQuestDiaryComponent* CallFunc_GetQuestDiary_Return, bool CallFunc_HaveActiveQuestTask_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_HaveActiveQuestTask_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Engineer_C", "ExecuteUbergraph_NPC_Engineer");

	Params::ANPC_Engineer_C_ExecuteUbergraph_NPC_Engineer_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Character = K2Node_Event_Character;
	Parms.K2Node_DynamicCast_AsICharacter_Stat_Observer = K2Node_DynamicCast_AsICharacter_Stat_Observer;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetQuestDiary_Return = CallFunc_GetQuestDiary_Return;
	Parms.CallFunc_HaveActiveQuestTask_ReturnValue = CallFunc_HaveActiveQuestTask_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_HaveActiveQuestTask_ReturnValue_1 = CallFunc_HaveActiveQuestTask_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}



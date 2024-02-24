#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GenericCarContainer.GenericCarContainer_C
// (Actor)

class UClass* AGenericCarContainer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GenericCarContainer_C");

	return Clss;
}


// GenericCarContainer_C GenericCarContainer.Default__GenericCarContainer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGenericCarContainer_C* AGenericCarContainer_C::GetDefaultObj()
{
	static class AGenericCarContainer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGenericCarContainer_C*>(AGenericCarContainer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GenericCarContainer.GenericCarContainer_C.ShouldNotBeExplored
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASHPlayerCharacter*          PlayerCharacter                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_isCarBreakerLearned_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

bool AGenericCarContainer_C::ShouldNotBeExplored(class ASHPlayerCharacter* PlayerCharacter, bool CallFunc_isCarBreakerLearned_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericCarContainer_C", "ShouldNotBeExplored");

	Params::AGenericCarContainer_C_ShouldNotBeExplored_Params Parms{};

	Parms.PlayerCharacter = PlayerCharacter;
	Parms.CallFunc_isCarBreakerLearned_ReturnValue = CallFunc_isCarBreakerLearned_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GenericCarContainer.GenericCarContainer_C.GetSelectionInfo
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      TargetActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Selection                Result                                                           (Parm, OutParm, HasGetValueTypeHash)
// struct FS_Selection                CallFunc_GetSelectionInfo_result                                 (HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Selection                K2Node_MakeStruct_S_Selection                                    (HasGetValueTypeHash)
// TScriptInterface<class IICharacterStatObserver_C>K2Node_DynamicCast_AsICharacter_Stat_Observer                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USHPlayerStat_Skills*        CallFunc_GetSkills_Skills                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_isCarBreakerLearned_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGenericCarContainer_C::GetSelectionInfo(class AActor* TargetActor, struct FS_Selection* Result, const struct FS_Selection& CallFunc_GetSelectionInfo_result, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, const struct FS_Selection& K2Node_MakeStruct_S_Selection, TScriptInterface<class IICharacterStatObserver_C> K2Node_DynamicCast_AsICharacter_Stat_Observer, bool K2Node_DynamicCast_bSuccess, class USHPlayerStat_Skills* CallFunc_GetSkills_Skills, bool CallFunc_isCarBreakerLearned_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericCarContainer_C", "GetSelectionInfo");

	Params::AGenericCarContainer_C_GetSelectionInfo_Params Parms{};

	Parms.TargetActor = TargetActor;
	Parms.CallFunc_GetSelectionInfo_result = CallFunc_GetSelectionInfo_result;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.K2Node_MakeStruct_S_Selection = K2Node_MakeStruct_S_Selection;
	Parms.K2Node_DynamicCast_AsICharacter_Stat_Observer = K2Node_DynamicCast_AsICharacter_Stat_Observer;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetSkills_Skills = CallFunc_GetSkills_Skills;
	Parms.CallFunc_isCarBreakerLearned_ReturnValue = CallFunc_isCarBreakerLearned_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = std::move(Parms.Result);

}


// Function GenericCarContainer.GenericCarContainer_C.OnUseActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASHPlayerCharacter*          Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGenericCarContainer_C::OnUseActor(class ASHPlayerCharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericCarContainer_C", "OnUseActor");

	Params::AGenericCarContainer_C_OnUseActor_Params Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GenericCarContainer.GenericCarContainer_C.Outline
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsHighlighted                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AGenericCarContainer_C::Outline(bool IsHighlighted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericCarContainer_C", "Outline");

	Params::AGenericCarContainer_C_Outline_Params Parms{};

	Parms.IsHighlighted = IsHighlighted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GenericCarContainer.GenericCarContainer_C.ExecuteUbergraph_GenericCarContainer
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASHPlayerCharacter*          K2Node_Event_Character                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_isHighlighted                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_isCarBreakerLearned_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGenericCarContainer_C::ExecuteUbergraph_GenericCarContainer(int32 EntryPoint, class ASHPlayerCharacter* K2Node_Event_Character, bool K2Node_Event_isHighlighted, bool CallFunc_IsValid_ReturnValue, bool CallFunc_isCarBreakerLearned_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericCarContainer_C", "ExecuteUbergraph_GenericCarContainer");

	Params::AGenericCarContainer_C_ExecuteUbergraph_GenericCarContainer_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Character = K2Node_Event_Character;
	Parms.K2Node_Event_isHighlighted = K2Node_Event_isHighlighted;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_isCarBreakerLearned_ReturnValue = CallFunc_isCarBreakerLearned_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}



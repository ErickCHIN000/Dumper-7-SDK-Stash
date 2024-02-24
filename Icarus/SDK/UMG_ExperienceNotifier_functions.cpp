#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_ExperienceNotifier.UMG_ExperienceNotifier_C
// (None)

class UClass* UUMG_ExperienceNotifier_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_ExperienceNotifier_C");

	return Clss;
}


// UMG_ExperienceNotifier_C UMG_ExperienceNotifier.Default__UMG_ExperienceNotifier_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_ExperienceNotifier_C* UUMG_ExperienceNotifier_C::GetDefaultObj()
{
	static class UUMG_ExperienceNotifier_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_ExperienceNotifier_C*>(UUMG_ExperienceNotifier_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_ExperienceNotifier.UMG_ExperienceNotifier_C.OnExperienceEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FExperienceEventsRowHandle  ExperienceEvent                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// int32                              ExperienceGained                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ExperienceNotifier_C::OnExperienceEvent(const struct FExperienceEventsRowHandle& ExperienceEvent, int32 ExperienceGained)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ExperienceNotifier_C", "OnExperienceEvent");

	Params::UUMG_ExperienceNotifier_C_OnExperienceEvent_Params Parms{};

	Parms.ExperienceEvent = ExperienceEvent;
	Parms.ExperienceGained = ExperienceGained;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ExperienceNotifier.UMG_ExperienceNotifier_C.OnBestiaryProgress
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBestiaryDataRowHandle      Group                                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// int32                              NowPoints                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MaxPoints                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ExperienceNotifier_C::OnBestiaryProgress(const struct FBestiaryDataRowHandle& Group, int32 NowPoints, int32 MaxPoints)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ExperienceNotifier_C", "OnBestiaryProgress");

	Params::UUMG_ExperienceNotifier_C_OnBestiaryProgress_Params Parms{};

	Parms.Group = Group;
	Parms.NowPoints = NowPoints;
	Parms.MaxPoints = MaxPoints;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ExperienceNotifier.UMG_ExperienceNotifier_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_ExperienceNotifier_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ExperienceNotifier_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_ExperienceNotifier.UMG_ExperienceNotifier_C.OnChallengeProgressed
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemData                   ItemData                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// int32                              ProgressAmount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ExperienceNotifier_C::OnChallengeProgressed(struct FItemData& ItemData, int32 ProgressAmount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ExperienceNotifier_C", "OnChallengeProgressed");

	Params::UUMG_ExperienceNotifier_C_OnChallengeProgressed_Params Parms{};

	Parms.ItemData = ItemData;
	Parms.ProgressAmount = ProgressAmount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ExperienceNotifier.UMG_ExperienceNotifier_C.AddNotify
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Content                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ExperienceNotifier_C::AddNotify(class UWidget* Content)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ExperienceNotifier_C", "AddNotify");

	Params::UUMG_ExperienceNotifier_C_AddNotify_Params Parms{};

	Parms.Content = Content;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ExperienceNotifier.UMG_ExperienceNotifier_C.ExecuteUbergraph_UMG_ExperienceNotifier
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetIcarusPlayerController_IsValid                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_BestiaryExperience_C*   CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerControllerSurvival*K2Node_DynamicCast_AsIcarus_Player_Controller_Survival           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_ChallengeExperienceNotification_C*CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FExperienceEventsRowHandle  K2Node_CustomEvent_ExperienceEvent                               (NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_ExperienceGained                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetIcarusPlayerCharacter_IsValid                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacter*      CallFunc_GetIcarusPlayerCharacter_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBestiaryDataRowHandle      K2Node_CustomEvent_Group                                         (NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_NowPoints                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_MaxPoints                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// struct FItemData                   K2Node_CustomEvent_ItemData                                      (ConstParm, ContainsInstancedReference)
// int32                              K2Node_CustomEvent_ProgressAmount                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// struct FLivingItemSlotState        CallFunc_GetLivingItemActiveChallengeSlotState_ActiveQuestSlot   (None)
// bool                               CallFunc_GetLivingItemActiveChallengeSlotState_ReturnValue       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     K2Node_CustomEvent_Content                                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ExperienceGained_C*     CallFunc_Create_ReturnValue_2                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ExperienceNotifier_C::ExecuteUbergraph_UMG_ExperienceNotifier(int32 EntryPoint, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, class UUMG_BestiaryExperience_C* CallFunc_Create_ReturnValue, class AIcarusPlayerControllerSurvival* K2Node_DynamicCast_AsIcarus_Player_Controller_Survival, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, class UUMG_ChallengeExperienceNotification_C* CallFunc_Create_ReturnValue_1, const struct FExperienceEventsRowHandle& K2Node_CustomEvent_ExperienceEvent, int32 K2Node_CustomEvent_ExperienceGained, enum class EValid CallFunc_GetIcarusPlayerCharacter_IsValid, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, const struct FBestiaryDataRowHandle& K2Node_CustomEvent_Group, int32 K2Node_CustomEvent_NowPoints, int32 K2Node_CustomEvent_MaxPoints, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FItemData& K2Node_CustomEvent_ItemData, int32 K2Node_CustomEvent_ProgressAmount, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FLivingItemSlotState& CallFunc_GetLivingItemActiveChallengeSlotState_ActiveQuestSlot, bool CallFunc_GetLivingItemActiveChallengeSlotState_ReturnValue, class UWidget* K2Node_CustomEvent_Content, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UUMG_ExperienceGained_C* CallFunc_Create_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ExperienceNotifier_C", "ExecuteUbergraph_UMG_ExperienceNotifier");

	Params::UUMG_ExperienceNotifier_C_ExecuteUbergraph_UMG_ExperienceNotifier_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetIcarusPlayerController_IsValid = CallFunc_GetIcarusPlayerController_IsValid;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue = CallFunc_GetIcarusPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_Player_Controller_Survival = K2Node_DynamicCast_AsIcarus_Player_Controller_Survival;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.K2Node_CustomEvent_ExperienceEvent = K2Node_CustomEvent_ExperienceEvent;
	Parms.K2Node_CustomEvent_ExperienceGained = K2Node_CustomEvent_ExperienceGained;
	Parms.CallFunc_GetIcarusPlayerCharacter_IsValid = CallFunc_GetIcarusPlayerCharacter_IsValid;
	Parms.CallFunc_GetIcarusPlayerCharacter_ReturnValue = CallFunc_GetIcarusPlayerCharacter_ReturnValue;
	Parms.K2Node_CustomEvent_Group = K2Node_CustomEvent_Group;
	Parms.K2Node_CustomEvent_NowPoints = K2Node_CustomEvent_NowPoints;
	Parms.K2Node_CustomEvent_MaxPoints = K2Node_CustomEvent_MaxPoints;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_ItemData = K2Node_CustomEvent_ItemData;
	Parms.K2Node_CustomEvent_ProgressAmount = K2Node_CustomEvent_ProgressAmount;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetLivingItemActiveChallengeSlotState_ActiveQuestSlot = CallFunc_GetLivingItemActiveChallengeSlotState_ActiveQuestSlot;
	Parms.CallFunc_GetLivingItemActiveChallengeSlotState_ReturnValue = CallFunc_GetLivingItemActiveChallengeSlotState_ReturnValue;
	Parms.K2Node_CustomEvent_Content = K2Node_CustomEvent_Content;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_2 = CallFunc_Create_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}



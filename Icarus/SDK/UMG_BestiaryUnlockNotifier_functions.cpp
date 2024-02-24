#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_BestiaryUnlockNotifier.UMG_BestiaryUnlockNotifier_C
// (None)

class UClass* UUMG_BestiaryUnlockNotifier_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_BestiaryUnlockNotifier_C");

	return Clss;
}


// UMG_BestiaryUnlockNotifier_C UMG_BestiaryUnlockNotifier.Default__UMG_BestiaryUnlockNotifier_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_BestiaryUnlockNotifier_C* UUMG_BestiaryUnlockNotifier_C::GetDefaultObj()
{
	static class UUMG_BestiaryUnlockNotifier_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_BestiaryUnlockNotifier_C*>(UUMG_BestiaryUnlockNotifier_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_BestiaryUnlockNotifier.UMG_BestiaryUnlockNotifier_C.OnBestiaryUnlock
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBestiaryDataRowHandle      Group                                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// enum class EBestiaryUnlockPopup    PopType                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_BestiaryUnlockNotifier_C::OnBestiaryUnlock(const struct FBestiaryDataRowHandle& Group, enum class EBestiaryUnlockPopup PopType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BestiaryUnlockNotifier_C", "OnBestiaryUnlock");

	Params::UUMG_BestiaryUnlockNotifier_C_OnBestiaryUnlock_Params Parms{};

	Parms.Group = Group;
	Parms.PopType = PopType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_BestiaryUnlockNotifier.UMG_BestiaryUnlockNotifier_C.OnFishUnlock
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFishTypeTracking           Tracking                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// int32                              PopType                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_BestiaryUnlockNotifier_C::OnFishUnlock(const struct FFishTypeTracking& Tracking, int32 PopType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BestiaryUnlockNotifier_C", "OnFishUnlock");

	Params::UUMG_BestiaryUnlockNotifier_C_OnFishUnlock_Params Parms{};

	Parms.Tracking = Tracking;
	Parms.PopType = PopType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_BestiaryUnlockNotifier.UMG_BestiaryUnlockNotifier_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_BestiaryUnlockNotifier_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BestiaryUnlockNotifier_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_BestiaryUnlockNotifier.UMG_BestiaryUnlockNotifier_C.ExecuteUbergraph_UMG_BestiaryUnlockNotifier
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UUMG_FishUnlock_C*           CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetIcarusPlayerController_IsValid                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_IcarusPlayerControllerSurvival_C*K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FBestiaryDataRowHandle      K2Node_CustomEvent_Group                                         (NoDestructor, HasGetValueTypeHash)
// enum class EBestiaryUnlockPopup    K2Node_CustomEvent_PopType_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFishTypeTracking           K2Node_CustomEvent_Tracking                                      (NoDestructor)
// int32                              K2Node_CustomEvent_PopType                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_BestiaryUnlock_C*       CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue_1                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_BestiaryUnlockNotifier_C::ExecuteUbergraph_UMG_BestiaryUnlockNotifier(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UUMG_FishUnlock_C* CallFunc_Create_ReturnValue, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, class ABP_IcarusPlayerControllerSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, const struct FBestiaryDataRowHandle& K2Node_CustomEvent_Group, enum class EBestiaryUnlockPopup K2Node_CustomEvent_PopType_1, const struct FFishTypeTracking& K2Node_CustomEvent_Tracking, int32 K2Node_CustomEvent_PopType, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UUMG_BestiaryUnlock_C* CallFunc_Create_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BestiaryUnlockNotifier_C", "ExecuteUbergraph_UMG_BestiaryUnlockNotifier");

	Params::UUMG_BestiaryUnlockNotifier_C_ExecuteUbergraph_UMG_BestiaryUnlockNotifier_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerController_IsValid = CallFunc_GetIcarusPlayerController_IsValid;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue = CallFunc_GetIcarusPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival = K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_CustomEvent_Group = K2Node_CustomEvent_Group;
	Parms.K2Node_CustomEvent_PopType_1 = K2Node_CustomEvent_PopType_1;
	Parms.K2Node_CustomEvent_Tracking = K2Node_CustomEvent_Tracking;
	Parms.K2Node_CustomEvent_PopType = K2Node_CustomEvent_PopType;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_AddChild_ReturnValue_1 = CallFunc_AddChild_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}



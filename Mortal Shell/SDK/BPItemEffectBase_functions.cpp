#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPItemEffectBase.BPItemEffectBase_C
// (None)

class UClass* UBPItemEffectBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPItemEffectBase_C");

	return Clss;
}


// BPItemEffectBase_C BPItemEffectBase.Default__BPItemEffectBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPItemEffectBase_C* UBPItemEffectBase_C::GetDefaultObj()
{
	static class UBPItemEffectBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPItemEffectBase_C*>(UBPItemEffectBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPItemEffectBase.BPItemEffectBase_C.OnAppliedBPMightFail
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABarbarous_C*                Barbarous                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               GameplayPC                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFamiliarityUnlocked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPItemEffectBase_C::OnAppliedBPMightFail(class ABarbarous_C* Barbarous, class AGameplayPC_C* GameplayPC, bool bFamiliarityUnlocked, bool* bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPItemEffectBase_C", "OnAppliedBPMightFail");

	Params::UBPItemEffectBase_C_OnAppliedBPMightFail_Params Parms{};

	Parms.Barbarous = Barbarous;
	Parms.GameplayPC = GameplayPC;
	Parms.bFamiliarityUnlocked = bFamiliarityUnlocked;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

}


// Function BPItemEffectBase.BPItemEffectBase_C.OnApplied
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      PlayerCharacter                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABarbarous_C*                K2Node_DynamicCast_AsBarbarous                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               K2Node_DynamicCast_AsGameplay_PC                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetItemMaxFamiliarity_MaxFamiliarity                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetItemFamiliarity_Value                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_OnAppliedBPMightFail_bSuccess                           (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBPItemEffectBase_C::OnApplied(class FName ItemId, class AActor* PlayerCharacter, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class ABarbarous_C* K2Node_DynamicCast_AsBarbarous, bool K2Node_DynamicCast_bSuccess, class AController* CallFunc_GetController_ReturnValue, class AGameplayPC_C* K2Node_DynamicCast_AsGameplay_PC, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_GetItemMaxFamiliarity_MaxFamiliarity, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_GetItemFamiliarity_Value, bool CallFunc_GreaterEqual_IntInt_ReturnValue, float CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_OnAppliedBPMightFail_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPItemEffectBase_C", "OnApplied");

	Params::UBPItemEffectBase_C_OnApplied_Params Parms{};

	Parms.ItemId = ItemId;
	Parms.PlayerCharacter = PlayerCharacter;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.K2Node_DynamicCast_AsBarbarous = K2Node_DynamicCast_AsBarbarous;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsGameplay_PC = K2Node_DynamicCast_AsGameplay_PC;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetItemMaxFamiliarity_MaxFamiliarity = CallFunc_GetItemMaxFamiliarity_MaxFamiliarity;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetItemFamiliarity_Value = CallFunc_GetItemFamiliarity_Value;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_OnAppliedBPMightFail_bSuccess = CallFunc_OnAppliedBPMightFail_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BPItemEffectBase.BPItemEffectBase_C.OnEndPlay_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPItemEffectBase_C::OnEndPlay_Set(class AActor* Actor, enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPItemEffectBase_C", "OnEndPlay_Set");

	Params::UBPItemEffectBase_C_OnEndPlay_Set_Params Parms{};

	Parms.Actor = Actor;
	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPItemEffectBase.BPItemEffectBase_C.OverrideSettings
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Duration                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPItemEffectBase_C::OverrideSettings(float Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPItemEffectBase_C", "OverrideSettings");

	Params::UBPItemEffectBase_C_OverrideSettings_Params Parms{};

	Parms.Duration = Duration;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPItemEffectBase.BPItemEffectBase_C.OnCutsceneStart_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPItemEffectBase_C::OnCutsceneStart_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPItemEffectBase_C", "OnCutsceneStart_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPItemEffectBase.BPItemEffectBase_C.OnCutsceneStart_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPItemEffectBase_C::OnCutsceneStart_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPItemEffectBase_C", "OnCutsceneStart_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPItemEffectBase.BPItemEffectBase_C.OnEndPlay_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPItemEffectBase_C::OnEndPlay_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPItemEffectBase_C", "OnEndPlay_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPItemEffectBase.BPItemEffectBase_C.OnCutsceneEnd_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPItemEffectBase_C::OnCutsceneEnd_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPItemEffectBase_C", "OnCutsceneEnd_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPItemEffectBase.BPItemEffectBase_C.OnCutsceneEnd_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPItemEffectBase_C::OnCutsceneEnd_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPItemEffectBase_C", "OnCutsceneEnd_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPItemEffectBase.BPItemEffectBase_C.OnEquipmentMenuPressed_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPItemEffectBase_C::OnEquipmentMenuPressed_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPItemEffectBase_C", "OnEquipmentMenuPressed_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPItemEffectBase.BPItemEffectBase_C.OnAppliedBP
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABarbarous_C*                Barbarous                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               GameplayPC                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFamiliarityUnlocked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPItemEffectBase_C::OnAppliedBP(class ABarbarous_C* Barbarous, class AGameplayPC_C* GameplayPC, bool bFamiliarityUnlocked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPItemEffectBase_C", "OnAppliedBP");

	Params::UBPItemEffectBase_C_OnAppliedBP_Params Parms{};

	Parms.Barbarous = Barbarous;
	Parms.GameplayPC = GameplayPC;
	Parms.bFamiliarityUnlocked = bFamiliarityUnlocked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPItemEffectBase.BPItemEffectBase_C.OnEquipmentMenuPressed_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Close                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_EquipmentMenuType  Menu                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPItemEffectBase_C::OnEquipmentMenuPressed_Set(bool Close, enum class Enum_EquipmentMenuType Menu)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPItemEffectBase_C", "OnEquipmentMenuPressed_Set");

	Params::UBPItemEffectBase_C_OnEquipmentMenuPressed_Set_Params Parms{};

	Parms.Close = Close;
	Parms.Menu = Menu;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPItemEffectBase.BPItemEffectBase_C.OnPhotoModePressed_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPItemEffectBase_C::OnPhotoModePressed_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPItemEffectBase_C", "OnPhotoModePressed_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPItemEffectBase.BPItemEffectBase_C.OnPhotoModePressed_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bEnterred                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPItemEffectBase_C::OnPhotoModePressed_Set(bool bEnterred)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPItemEffectBase_C", "OnPhotoModePressed_Set");

	Params::UBPItemEffectBase_C_OnPhotoModePressed_Set_Params Parms{};

	Parms.bEnterred = bEnterred;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPItemEffectBase.BPItemEffectBase_C.ExecuteUbergraph_BPItemEffectBase
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class AActor*                      K2Node_CustomEvent_Actor                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_CustomEvent_EndPlayReason                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// float                              K2Node_CustomEvent_Duration                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABarbarous_C*                K2Node_CustomEvent_Barbarous                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               K2Node_CustomEvent_GameplayPC                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bFamiliarityUnlocked                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_Close                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_EquipmentMenuType  K2Node_CustomEvent_Menu                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bEnterred                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPItemEffectBase_C::ExecuteUbergraph_BPItemEffectBase(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class AActor* K2Node_CustomEvent_Actor, enum class EEndPlayReason K2Node_CustomEvent_EndPlayReason, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, float K2Node_CustomEvent_Duration, class ABarbarous_C* K2Node_CustomEvent_Barbarous, class AGameplayPC_C* K2Node_CustomEvent_GameplayPC, bool K2Node_CustomEvent_bFamiliarityUnlocked, bool K2Node_CustomEvent_Close, enum class Enum_EquipmentMenuType K2Node_CustomEvent_Menu, bool K2Node_CustomEvent_bEnterred)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPItemEffectBase_C", "ExecuteUbergraph_BPItemEffectBase");

	Params::UBPItemEffectBase_C_ExecuteUbergraph_BPItemEffectBase_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CustomEvent_Actor = K2Node_CustomEvent_Actor;
	Parms.K2Node_CustomEvent_EndPlayReason = K2Node_CustomEvent_EndPlayReason;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CustomEvent_Duration = K2Node_CustomEvent_Duration;
	Parms.K2Node_CustomEvent_Barbarous = K2Node_CustomEvent_Barbarous;
	Parms.K2Node_CustomEvent_GameplayPC = K2Node_CustomEvent_GameplayPC;
	Parms.K2Node_CustomEvent_bFamiliarityUnlocked = K2Node_CustomEvent_bFamiliarityUnlocked;
	Parms.K2Node_CustomEvent_Close = K2Node_CustomEvent_Close;
	Parms.K2Node_CustomEvent_Menu = K2Node_CustomEvent_Menu;
	Parms.K2Node_CustomEvent_bEnterred = K2Node_CustomEvent_bEnterred;

	UObject::ProcessEvent(Func, &Parms);

}

}



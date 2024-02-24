#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Usable_Weapon.Usable_Weapon_C
// (Actor)

class UClass* AUsable_Weapon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Usable_Weapon_C");

	return Clss;
}


// Usable_Weapon_C Usable_Weapon.Default__Usable_Weapon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AUsable_Weapon_C* AUsable_Weapon_C::GetDefaultObj()
{
	static class AUsable_Weapon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AUsable_Weapon_C*>(AUsable_Weapon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Usable_Weapon.Usable_Weapon_C.AxatanaSkin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TwitchDrop_ShouldUseWeaponSkin_bYes                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUsable_Weapon_C::AxatanaSkin(bool Temp_bool_Variable, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable_1, bool CallFunc_TwitchDrop_ShouldUseWeaponSkin_bYes, class UMaterialInterface* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Weapon_C", "AxatanaSkin");

	Params::AUsable_Weapon_C_AxatanaSkin_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.CallFunc_TwitchDrop_ShouldUseWeaponSkin_bYes = CallFunc_TwitchDrop_ShouldUseWeaponSkin_bYes;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Usable_Weapon.Usable_Weapon_C.OldWeaponIsAxatana
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

bool AUsable_Weapon_C::OldWeaponIsAxatana(bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Weapon_C", "OldWeaponIsAxatana");

	Params::AUsable_Weapon_C_OldWeaponIsAxatana_Params Parms{};

	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Usable_Weapon.Usable_Weapon_C.Weapon_Invisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AUsable_Weapon_C::Weapon_Invisible()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Weapon_C", "Weapon_Invisible");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_Weapon.Usable_Weapon_C.Weapon_Unequippable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AUsable_Weapon_C::Weapon_Unequippable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Weapon_C", "Weapon_Unequippable");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_Weapon.Usable_Weapon_C.Weapon_Equippable
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EComboTypes             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        Temp_text_Variable_2                                             (None)
// class FText                        Temp_text_Variable_3                                             (None)
// class FText                        Temp_text_Variable_4                                             (None)
// class FText                        Temp_text_Variable_5                                             (None)
// class FText                        Temp_text_Variable_6                                             (None)
// class FText                        K2Node_Select_Default                                            (None)

void AUsable_Weapon_C::Weapon_Equippable(enum class EComboTypes Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText Temp_text_Variable_6, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Weapon_C", "Weapon_Equippable");

	Params::AUsable_Weapon_C_Weapon_Equippable_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.Temp_text_Variable_4 = Temp_text_Variable_4;
	Parms.Temp_text_Variable_5 = Temp_text_Variable_5;
	Parms.Temp_text_Variable_6 = Temp_text_Variable_6;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Usable_Weapon.Usable_Weapon_C.IsAxatanaWeapon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

bool AUsable_Weapon_C::IsAxatanaWeapon(bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Weapon_C", "IsAxatanaWeapon");

	Params::AUsable_Weapon_C_IsAxatanaWeapon_Params Parms{};

	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Usable_Weapon.Usable_Weapon_C.IsHoldingAxatana
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAxatanaWeapon_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryItem              CallFunc_GetMainHandWeapon_EquippedMainHandWeapon                (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

bool AUsable_Weapon_C::IsHoldingAxatana(bool CallFunc_IsAxatanaWeapon_ReturnValue, const struct FInventoryItem& CallFunc_GetMainHandWeapon_EquippedMainHandWeapon, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Weapon_C", "IsHoldingAxatana");

	Params::AUsable_Weapon_C_IsHoldingAxatana_Params Parms{};

	Parms.CallFunc_IsAxatanaWeapon_ReturnValue = CallFunc_IsAxatanaWeapon_ReturnValue;
	Parms.CallFunc_GetMainHandWeapon_EquippedMainHandWeapon = CallFunc_GetMainHandWeapon_EquippedMainHandWeapon;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Usable_Weapon.Usable_Weapon_C.DualSenseAudio_Stop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AUsable_Weapon_C::DualSenseAudio_Stop(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Weapon_C", "DualSenseAudio_Stop");

	Params::AUsable_Weapon_C_DualSenseAudio_Stop_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Usable_Weapon.Usable_Weapon_C.DualSenseAudio_Play
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EComboTypes             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_4                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_5                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_6                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_Spawn2DControllerSound_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUsable_Weapon_C::DualSenseAudio_Play(enum class EComboTypes Temp_byte_Variable, class USoundBase* Temp_object_Variable, class USoundBase* Temp_object_Variable_1, class USoundBase* Temp_object_Variable_2, class USoundBase* Temp_object_Variable_3, class USoundBase* Temp_object_Variable_4, class USoundBase* Temp_object_Variable_5, class USoundBase* Temp_object_Variable_6, class USoundBase* K2Node_Select_Default, class UAudioComponent* CallFunc_Spawn2DControllerSound_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Weapon_C", "DualSenseAudio_Play");

	Params::AUsable_Weapon_C_DualSenseAudio_Play_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.Temp_object_Variable_4 = Temp_object_Variable_4;
	Parms.Temp_object_Variable_5 = Temp_object_Variable_5;
	Parms.Temp_object_Variable_6 = Temp_object_Variable_6;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Spawn2DControllerSound_ReturnValue = CallFunc_Spawn2DControllerSound_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Usable_Weapon.Usable_Weapon_C.SetActorNameAndAction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EComboTypes             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        Temp_text_Variable_2                                             (None)
// class FText                        Temp_text_Variable_3                                             (None)
// class FText                        Temp_text_Variable_4                                             (None)
// class FText                        Temp_text_Variable_5                                             (None)
// class FText                        Temp_text_Variable_6                                             (None)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable_7                                             (None)
// class FText                        K2Node_Select_Default                                            (None)
// class FText                        K2Node_Select_Default_1                                          (None)

void AUsable_Weapon_C::SetActorNameAndAction(enum class EComboTypes Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText Temp_text_Variable_6, bool Temp_bool_Variable, class FText Temp_text_Variable_7, class FText K2Node_Select_Default, class FText K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Weapon_C", "SetActorNameAndAction");

	Params::AUsable_Weapon_C_SetActorNameAndAction_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.Temp_text_Variable_4 = Temp_text_Variable_4;
	Parms.Temp_text_Variable_5 = Temp_text_Variable_5;
	Parms.Temp_text_Variable_6 = Temp_text_Variable_6;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable_7 = Temp_text_Variable_7;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Usable_Weapon.Usable_Weapon_C.DiscoverWeapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AUsable_Weapon_C::DiscoverWeapon(class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Weapon_C", "DiscoverWeapon");

	Params::AUsable_Weapon_C_DiscoverWeapon_Params Parms{};

	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Usable_Weapon.Usable_Weapon_C.HideVFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEmitter*                    K2Node_DynamicCast_AsEmitter                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AUsable_Weapon_C::HideVFX(class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class AEmitter* K2Node_DynamicCast_AsEmitter, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Weapon_C", "HideVFX");

	Params::AUsable_Weapon_C_HideVFX_Params Parms{};

	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsEmitter = K2Node_DynamicCast_AsEmitter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Usable_Weapon.Usable_Weapon_C.FadeOutMusic
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGamePlayGameState_C*        CallFunc_GetGameStateAsGameplayGameState_AsGamePlayGameState     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void AUsable_Weapon_C::FadeOutMusic(class AGamePlayGameState_C* CallFunc_GetGameStateAsGameplayGameState_AsGamePlayGameState, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Weapon_C", "FadeOutMusic");

	Params::AUsable_Weapon_C_FadeOutMusic_Params Parms{};

	Parms.CallFunc_GetGameStateAsGameplayGameState_AsGamePlayGameState = CallFunc_GetGameStateAsGameplayGameState_AsGamePlayGameState;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Usable_Weapon.Usable_Weapon_C.Usable_Weapon_AutoGenFunc
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Audio_CinematicAudioTrigger_C*K2Node_DynamicCast_AsBP_Audio_Cinematic_Audio_Trigger            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGamePlayGameState_C*        CallFunc_GetGameStateAsGameplayGameState_AsGamePlayGameState     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABPUsable_DarkFather_C*      K2Node_DynamicCast_AsBPUsable_Dark_Father                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue_1                (ZeroConstructor, IsPlainOldData, NoDestructor)

void AUsable_Weapon_C::Usable_Weapon_AutoGenFunc(class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class ABP_Audio_CinematicAudioTrigger_C* K2Node_DynamicCast_AsBP_Audio_Cinematic_Audio_Trigger, bool K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess_1, class AGamePlayGameState_C* CallFunc_GetGameStateAsGameplayGameState_AsGamePlayGameState, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1, class ABPUsable_DarkFather_C* K2Node_DynamicCast_AsBPUsable_Dark_Father, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValidSoftObjectReference_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Weapon_C", "Usable_Weapon_AutoGenFunc");

	Params::AUsable_Weapon_C_Usable_Weapon_AutoGenFunc_Params Parms{};

	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Audio_Cinematic_Audio_Trigger = K2Node_DynamicCast_AsBP_Audio_Cinematic_Audio_Trigger;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue = CallFunc_GetPlayerCameraManager_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface = K2Node_DynamicCast_AsGame_Play_PCInterface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetGameStateAsGameplayGameState_AsGamePlayGameState = CallFunc_GetGameStateAsGameplayGameState_AsGamePlayGameState;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1 = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBPUsable_Dark_Father = K2Node_DynamicCast_AsBPUsable_Dark_Father;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue_1 = CallFunc_IsValidSoftObjectReference_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Usable_Weapon.Usable_Weapon_C.SetDefaultMaterials
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void AUsable_Weapon_C::SetDefaultMaterials(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UMaterialInterface* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Weapon_C", "SetDefaultMaterials");

	Params::AUsable_Weapon_C_SetDefaultMaterials_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Usable_Weapon.Usable_Weapon_C.SaveDefaultMaterials
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UMaterialInterface*>  CallFunc_GetMaterials_ReturnValue                                (ReferenceParm, HasGetValueTypeHash)

void AUsable_Weapon_C::SaveDefaultMaterials(TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Weapon_C", "SaveDefaultMaterials");

	Params::AUsable_Weapon_C_SaveDefaultMaterials_Params Parms{};

	Parms.CallFunc_GetMaterials_ReturnValue = CallFunc_GetMaterials_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Usable_Weapon.Usable_Weapon_C.SetWeaponDefaultStaticMesh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EComboTypes             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*                 Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*                 Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*                 Temp_object_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*                 Temp_object_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*                 Temp_object_Variable_4                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*                 Temp_object_Variable_5                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*                 Temp_object_Variable_6                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*                 K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void AUsable_Weapon_C::SetWeaponDefaultStaticMesh(enum class EComboTypes Temp_byte_Variable, class UStaticMesh* Temp_object_Variable, class UStaticMesh* Temp_object_Variable_1, class UStaticMesh* Temp_object_Variable_2, class UStaticMesh* Temp_object_Variable_3, class UStaticMesh* Temp_object_Variable_4, class UStaticMesh* Temp_object_Variable_5, class UStaticMesh* Temp_object_Variable_6, class UStaticMesh* K2Node_Select_Default, bool CallFunc_SetStaticMesh_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Weapon_C", "SetWeaponDefaultStaticMesh");

	Params::AUsable_Weapon_C_SetWeaponDefaultStaticMesh_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.Temp_object_Variable_4 = Temp_object_Variable_4;
	Parms.Temp_object_Variable_5 = Temp_object_Variable_5;
	Parms.Temp_object_Variable_6 = Temp_object_Variable_6;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Usable_Weapon.Usable_Weapon_C.IsCryptSuperBuff
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUsable_Weapon_C::IsCryptSuperBuff(class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Weapon_C", "IsCryptSuperBuff");

	Params::AUsable_Weapon_C_IsCryptSuperBuff_Params Parms{};

	Parms.CallFunc_GetCharacterAs0_Base_As0_Base = CallFunc_GetCharacterAs0_Base_As0_Base;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Usable_Weapon.Usable_Weapon_C.IsBurnedMace
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUsable_Weapon_C::IsBurnedMace(class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Weapon_C", "IsBurnedMace");

	Params::AUsable_Weapon_C_IsBurnedMace_Params Parms{};

	Parms.CallFunc_GetCharacterAs0_Base_As0_Base = CallFunc_GetCharacterAs0_Base_As0_Base;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Usable_Weapon.Usable_Weapon_C.UseGhostWeapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void AUsable_Weapon_C::UseGhostWeapon(bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Weapon_C", "UseGhostWeapon");

	Params::AUsable_Weapon_C_UseGhostWeapon_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Usable_Weapon.Usable_Weapon_C.SetGhostMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AUsable_Weapon_C::SetGhostMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Weapon_C", "SetGhostMode");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_Weapon.Usable_Weapon_C.GetIsActorUsable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsUsable                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckForNearbyEnemies_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsActorUsable_IsUsable                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void AUsable_Weapon_C::GetIsActorUsable(bool* IsUsable, bool CallFunc_CheckForNearbyEnemies_ReturnValue, bool CallFunc_GetIsActorUsable_IsUsable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Weapon_C", "GetIsActorUsable");

	Params::AUsable_Weapon_C_GetIsActorUsable_Params Parms{};

	Parms.CallFunc_CheckForNearbyEnemies_ReturnValue = CallFunc_CheckForNearbyEnemies_ReturnValue;
	Parms.CallFunc_GetIsActorUsable_IsUsable = CallFunc_GetIsActorUsable_IsUsable;

	UObject::ProcessEvent(Func, &Parms);

	if (IsUsable != nullptr)
		*IsUsable = Parms.IsUsable;

}


// Function Usable_Weapon.Usable_Weapon_C.Update Visibility
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsAxatanaUnlocked_bUnlocked                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsHoldingAxatana_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAxatanaWeapon_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_StormModeIsActive_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetCharacterWeaponIDFromEnum_ID                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAxatanaUnlocked_StormMode_bUnlocked                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryItem              CallFunc_GetMainHandWeapon_EquippedMainHandWeapon                (HasGetValueTypeHash)
// class FName                        CallFunc_GetCharacterWeaponIDFromEnum_ID_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void AUsable_Weapon_C::Update_Visibility(bool CallFunc_IsAxatanaUnlocked_bUnlocked, bool CallFunc_IsHoldingAxatana_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsAxatanaWeapon_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_StormModeIsActive_ReturnValue, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class FName CallFunc_GetCharacterWeaponIDFromEnum_ID, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_IsAxatanaUnlocked_StormMode_bUnlocked, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3, const struct FInventoryItem& CallFunc_GetMainHandWeapon_EquippedMainHandWeapon, class FName CallFunc_GetCharacterWeaponIDFromEnum_ID_1, bool CallFunc_EqualEqual_NameName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Weapon_C", "Update Visibility");

	Params::AUsable_Weapon_C_Update_Visibility_Params Parms{};

	Parms.CallFunc_IsAxatanaUnlocked_bUnlocked = CallFunc_IsAxatanaUnlocked_bUnlocked;
	Parms.CallFunc_IsHoldingAxatana_ReturnValue = CallFunc_IsHoldingAxatana_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_IsAxatanaWeapon_ReturnValue = CallFunc_IsAxatanaWeapon_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_StormModeIsActive_ReturnValue = CallFunc_StormModeIsActive_ReturnValue;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_GetCharacterWeaponIDFromEnum_ID = CallFunc_GetCharacterWeaponIDFromEnum_ID;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_IsAxatanaUnlocked_StormMode_bUnlocked = CallFunc_IsAxatanaUnlocked_StormMode_bUnlocked;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;
	Parms.CallFunc_GetMainHandWeapon_EquippedMainHandWeapon = CallFunc_GetMainHandWeapon_EquippedMainHandWeapon;
	Parms.CallFunc_GetCharacterWeaponIDFromEnum_ID_1 = CallFunc_GetCharacterWeaponIDFromEnum_ID_1;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Usable_Weapon.Usable_Weapon_C.OnActorUsed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OnActorUsed_Success                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckForNearbyEnemies_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void AUsable_Weapon_C::OnActorUsed(class APlayerController* Controller, bool* Success, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, bool CallFunc_OnActorUsed_Success, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_CheckForNearbyEnemies_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Weapon_C", "OnActorUsed");

	Params::AUsable_Weapon_C_OnActorUsed_Params Parms{};

	Parms.Controller = Controller;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base = CallFunc_GetCharacterAs0_Base_As0_Base;
	Parms.CallFunc_OnActorUsed_Success = CallFunc_OnActorUsed_Success;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_CheckForNearbyEnemies_ReturnValue = CallFunc_CheckForNearbyEnemies_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function Usable_Weapon.Usable_Weapon_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void AUsable_Weapon_C::UserConstructionScript(bool CallFunc_K2_AttachToComponent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Weapon_C", "UserConstructionScript");

	Params::AUsable_Weapon_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Usable_Weapon.Usable_Weapon_C.Timeline_Weapon_Hide__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AUsable_Weapon_C::Timeline_Weapon_Hide__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Weapon_C", "Timeline_Weapon_Hide__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_Weapon.Usable_Weapon_C.Timeline_Weapon_Hide__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AUsable_Weapon_C::Timeline_Weapon_Hide__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Weapon_C", "Timeline_Weapon_Hide__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_Weapon.Usable_Weapon_C.Timeline_Weapon_Show__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AUsable_Weapon_C::Timeline_Weapon_Show__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Weapon_C", "Timeline_Weapon_Show__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_Weapon.Usable_Weapon_C.Timeline_Weapon_Show__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AUsable_Weapon_C::Timeline_Weapon_Show__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Weapon_C", "Timeline_Weapon_Show__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_Weapon.Usable_Weapon_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AUsable_Weapon_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Weapon_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_Weapon.Usable_Weapon_C.HideWeaponIfEquipped
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AUsable_Weapon_C::HideWeaponIfEquipped()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Weapon_C", "HideWeaponIfEquipped");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_Weapon.Usable_Weapon_C.EquipWeaponPostFade
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AUsable_Weapon_C::EquipWeaponPostFade()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Weapon_C", "EquipWeaponPostFade");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_Weapon.Usable_Weapon_C.FadeCompletedWeaponEquipped
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AUsable_Weapon_C::FadeCompletedWeaponEquipped()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Weapon_C", "FadeCompletedWeaponEquipped");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_Weapon.Usable_Weapon_C.DamageTakenWhileFading
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AUsable_Weapon_C::DamageTakenWhileFading()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Weapon_C", "DamageTakenWhileFading");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_Weapon.Usable_Weapon_C.ResetPlayerDisable
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AUsable_Weapon_C::ResetPlayerDisable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Weapon_C", "ResetPlayerDisable");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_Weapon.Usable_Weapon_C.EquipWeapon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           PlayerController                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUsable_Weapon_C::EquipWeapon(class APlayerController* PlayerController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Weapon_C", "EquipWeapon");

	Params::AUsable_Weapon_C_EquipWeapon_Params Parms{};

	Parms.PlayerController = PlayerController;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Usable_Weapon.Usable_Weapon_C.StartGhostCutscene
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AUsable_Weapon_C::StartGhostCutscene()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Weapon_C", "StartGhostCutscene");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_Weapon.Usable_Weapon_C.Weapon_Hide
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AUsable_Weapon_C::Weapon_Hide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Weapon_C", "Weapon_Hide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_Weapon.Usable_Weapon_C.Weapon_Show
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AUsable_Weapon_C::Weapon_Show()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Weapon_C", "Weapon_Show");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_Weapon.Usable_Weapon_C.OnWeaponSummoned
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EComboTypes             Weapon                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUsable_Weapon_C::OnWeaponSummoned(enum class EComboTypes Weapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Weapon_C", "OnWeaponSummoned");

	Params::AUsable_Weapon_C_OnWeaponSummoned_Params Parms{};

	Parms.Weapon = Weapon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Usable_Weapon.Usable_Weapon_C.OnAxatanaTutDismissed_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AUsable_Weapon_C::OnAxatanaTutDismissed_1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Weapon_C", "OnAxatanaTutDismissed_1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_Weapon.Usable_Weapon_C.OnAxatanaTutDismissed_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AUsable_Weapon_C::OnAxatanaTutDismissed_2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Weapon_C", "OnAxatanaTutDismissed_2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_Weapon.Usable_Weapon_C.OnSummonedEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AUsable_Weapon_C::OnSummonedEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Weapon_C", "OnSummonedEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_Weapon.Usable_Weapon_C.OnSkinChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_Skins              SkinChanged                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUsable_Weapon_C::OnSkinChanged(enum class Enum_Skins SkinChanged)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Weapon_C", "OnSkinChanged");

	Params::AUsable_Weapon_C_OnSkinChanged_Params Parms{};

	Parms.SkinChanged = SkinChanged;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Usable_Weapon.Usable_Weapon_C.ExecuteUbergraph_Usable_Weapon
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// TArray<class AUsable_Weapon_C*>    CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                K2Node_DynamicCast_As0_Base                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMainHandWeaponItemIndex_Index                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ICharacterUtilInterface_C>CallFunc_CharacterUtils_WeaponSwitched_self_CastInput            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           K2Node_CustomEvent_PlayerController                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// class ABP_Audio_CinematicAudioTrigger_C*K2Node_DynamicCast_AsBP_Audio_Cinematic_Audio_Trigger            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ALevelSequenceActor*         K2Node_DynamicCast_AsLevel_Sequence_Actor                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ULevelSequencePlayer*        CallFunc_GetSequencePlayer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_3               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// class FName                        CallFunc_GetCharacterWeaponIDFromEnum_ID                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryItem              CallFunc_GetItemFromID_Item                                      (HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_4               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetInventoryItem_Success                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_5               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_6               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EComboTypes             K2Node_CustomEvent_Weapon                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base_4                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBriefReturnFromBlackFade_C* CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AUsable_Weapon_C*            CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base_5                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_7               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABPUsable_DarkFather_C*      K2Node_DynamicCast_AsBPUsable_Dark_Father                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_OldWeaponIsAxatana_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAxatanaWeapon_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsTutorialUnlocked_Unlocked_                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULargeTutorial_C*            CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULargeTutorial_C*            CallFunc_Create_ReturnValue_2                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base_6                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_1                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base_7                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_8               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAxatanaWeapon_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_Skins              K2Node_CustomEvent_SkinChanged                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_StormModeContentIsEnabled_Enabled_                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AUsable_Weapon_C::ExecuteUbergraph_Usable_Weapon(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, TArray<class AUsable_Weapon_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, int32 CallFunc_GetMainHandWeaponItemIndex_Index, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, TScriptInterface<class ICharacterUtilInterface_C> CallFunc_CharacterUtils_WeaponSwitched_self_CastInput, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_1, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_2, class APlayerController* K2Node_CustomEvent_PlayerController, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_IsValidSoftObjectReference_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue_1, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class ABP_Audio_CinematicAudioTrigger_C* K2Node_DynamicCast_AsBP_Audio_Cinematic_Audio_Trigger, bool K2Node_DynamicCast_bSuccess_1, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1, class ALevelSequenceActor* K2Node_DynamicCast_AsLevel_Sequence_Actor, bool K2Node_DynamicCast_bSuccess_2, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_1, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_3, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class FName CallFunc_GetCharacterWeaponIDFromEnum_ID, const struct FInventoryItem& CallFunc_GetItemFromID_Item, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_4, bool CallFunc_SetInventoryItem_Success, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_5, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_6, enum class EComboTypes K2Node_CustomEvent_Weapon, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_4, class UBriefReturnFromBlackFade_C* CallFunc_Create_ReturnValue, int32 Temp_int_Array_Index_Variable, class AUsable_Weapon_C* CallFunc_Array_Get_Item, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_5, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_7, class FName Temp_name_Variable, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2, class ABPUsable_DarkFather_C* K2Node_DynamicCast_AsBPUsable_Dark_Father, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_OldWeaponIsAxatana_ReturnValue, bool CallFunc_IsAxatanaWeapon_ReturnValue, bool CallFunc_IsTutorialUnlocked_Unlocked_, bool CallFunc_Not_PreBool_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ULargeTutorial_C* CallFunc_Create_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class ULargeTutorial_C* CallFunc_Create_ReturnValue_2, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_6, class FName Temp_name_Variable_1, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_7, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_8, bool CallFunc_IsAxatanaWeapon_ReturnValue_1, enum class Enum_Skins K2Node_CustomEvent_SkinChanged, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_StormModeContentIsEnabled_Enabled_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Weapon_C", "ExecuteUbergraph_Usable_Weapon");

	Params::AUsable_Weapon_C_ExecuteUbergraph_Usable_Weapon_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_As0_Base = K2Node_DynamicCast_As0_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_GetMainHandWeaponItemIndex_Index = CallFunc_GetMainHandWeaponItemIndex_Index;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base = CallFunc_GetCharacterAs0_Base_As0_Base;
	Parms.CallFunc_CharacterUtils_WeaponSwitched_self_CastInput = CallFunc_CharacterUtils_WeaponSwitched_self_CastInput;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base_1 = CallFunc_GetCharacterAs0_Base_As0_Base_1;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base_2 = CallFunc_GetCharacterAs0_Base_As0_Base_2;
	Parms.K2Node_CustomEvent_PlayerController = K2Node_CustomEvent_PlayerController;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue_1 = CallFunc_IsValidSoftObjectReference_ReturnValue_1;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_DynamicCast_AsBP_Audio_Cinematic_Audio_Trigger = K2Node_DynamicCast_AsBP_Audio_Cinematic_Audio_Trigger;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue = CallFunc_GetPlayerCameraManager_ReturnValue;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1 = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsLevel_Sequence_Actor = K2Node_DynamicCast_AsLevel_Sequence_Actor;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetSequencePlayer_ReturnValue = CallFunc_GetSequencePlayer_ReturnValue;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue_1 = CallFunc_GetPlayerCameraManager_ReturnValue_1;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base_3 = CallFunc_GetCharacterAs0_Base_As0_Base_3;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_3 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.CallFunc_GetCharacterWeaponIDFromEnum_ID = CallFunc_GetCharacterWeaponIDFromEnum_ID;
	Parms.CallFunc_GetItemFromID_Item = CallFunc_GetItemFromID_Item;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_4 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_4;
	Parms.CallFunc_SetInventoryItem_Success = CallFunc_SetInventoryItem_Success;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_5 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_5;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_6 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_6;
	Parms.K2Node_CustomEvent_Weapon = K2Node_CustomEvent_Weapon;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base_4 = CallFunc_GetCharacterAs0_Base_As0_Base_4;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base_5 = CallFunc_GetCharacterAs0_Base_As0_Base_5;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_7 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_7;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2 = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBPUsable_Dark_Father = K2Node_DynamicCast_AsBPUsable_Dark_Father;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_OldWeaponIsAxatana_ReturnValue = CallFunc_OldWeaponIsAxatana_ReturnValue;
	Parms.CallFunc_IsAxatanaWeapon_ReturnValue = CallFunc_IsAxatanaWeapon_ReturnValue;
	Parms.CallFunc_IsTutorialUnlocked_Unlocked_ = CallFunc_IsTutorialUnlocked_Unlocked_;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue_2 = CallFunc_Create_ReturnValue_2;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base_6 = CallFunc_GetCharacterAs0_Base_As0_Base_6;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base_7 = CallFunc_GetCharacterAs0_Base_As0_Base_7;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_8 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_8;
	Parms.CallFunc_IsAxatanaWeapon_ReturnValue_1 = CallFunc_IsAxatanaWeapon_ReturnValue_1;
	Parms.K2Node_CustomEvent_SkinChanged = K2Node_CustomEvent_SkinChanged;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_StormModeContentIsEnabled_Enabled_ = CallFunc_StormModeContentIsEnabled_Enabled_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Usable_Weapon.Usable_Weapon_C.WeaponEquipCancelled__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void AUsable_Weapon_C::WeaponEquipCancelled__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Weapon_C", "WeaponEquipCancelled__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_Weapon.Usable_Weapon_C.ActorUsed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void AUsable_Weapon_C::ActorUsed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Weapon_C", "ActorUsed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_Weapon.Usable_Weapon_C.WeaponEquipped__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void AUsable_Weapon_C::WeaponEquipped__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Weapon_C", "WeaponEquipped__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}



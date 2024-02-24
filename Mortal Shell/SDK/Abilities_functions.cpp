#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Abilities.Abilities_C
// (None)

class UClass* UAbilities_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Abilities_C");

	return Clss;
}


// Abilities_C Abilities.Default__Abilities_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbilities_C* UAbilities_C::GetDefaultObj()
{
	static class UAbilities_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbilities_C*>(UAbilities_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Abilities.Abilities_C.ShowInfusionImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAbilities_C::ShowInfusionImage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Abilities_C", "ShowInfusionImage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Abilities.Abilities_C.ShowParryImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAbilities_C::ShowParryImage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Abilities_C", "ShowParryImage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Abilities.Abilities_C.GetStormModeState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_StormModeProgress  CallFunc_GetStormModeProgress_Progress                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_StormModeIsActive_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAbilities_C::GetStormModeState(class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC, bool K2Node_DynamicCast_bSuccess, enum class Enum_StormModeProgress CallFunc_GetStormModeProgress_Progress, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_StormModeIsActive_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Abilities_C", "GetStormModeState");

	Params::UAbilities_C_GetStormModeState_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC = K2Node_DynamicCast_AsBPI_Storm_Mode_PC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetStormModeProgress_Progress = CallFunc_GetStormModeProgress_Progress;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_StormModeIsActive_ReturnValue = CallFunc_StormModeIsActive_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Abilities.Abilities_C.IsEnemyRiposteable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABaseCharacter_C*            Enemy                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAbilities_C::IsEnemyRiposteable(class ABaseCharacter_C* Enemy, bool CallFunc_IsValid_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Abilities_C", "IsEnemyRiposteable");

	Params::UAbilities_C_IsEnemyRiposteable_Params Parms{};

	Parms.Enemy = Enemy;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Abilities.Abilities_C.HideAllAbilities
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAbilities_C::HideAllAbilities()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Abilities_C", "HideAllAbilities");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Abilities.Abilities_C.SetStoneFormUnderglow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_NotEqual_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAbilities_C::SetStoneFormUnderglow(bool CallFunc_NotEqual_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Abilities_C", "SetStoneFormUnderglow");

	Params::UAbilities_C_SetStoneFormUnderglow_Params Parms{};

	Parms.CallFunc_NotEqual_FloatFloat_ReturnValue = CallFunc_NotEqual_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Abilities.Abilities_C.SetStoneFormFilled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_NotEqual_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAbilities_C::SetStoneFormFilled(bool CallFunc_NotEqual_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Abilities_C", "SetStoneFormFilled");

	Params::UAbilities_C_SetStoneFormFilled_Params Parms{};

	Parms.CallFunc_NotEqual_FloatFloat_ReturnValue = CallFunc_NotEqual_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Abilities.Abilities_C.RipostePossible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAbilities_C::RipostePossible(bool CallFunc_IsValid_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Abilities_C", "RipostePossible");

	Params::UAbilities_C_RipostePossible_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Abilities.Abilities_C.SetMIDs
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_2             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_3             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbilities_C::SetMIDs(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_2, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Abilities_C", "SetMIDs");

	Params::UAbilities_C_SetMIDs_Params Parms{};

	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_1 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_1;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_2 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_2;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_3 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Abilities.Abilities_C.SetRiposteDesaturation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbilities_C::SetRiposteDesaturation(bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Abilities_C", "SetRiposteDesaturation");

	Params::UAbilities_C_SetRiposteDesaturation_Params Parms{};

	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Abilities.Abilities_C.SetStoneFormFilling
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAbilities_C::SetStoneFormFilling()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Abilities_C", "SetStoneFormFilling");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Abilities.Abilities_C.SetGameplayPCRef
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbilities_C::SetGameplayPCRef(class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Abilities_C", "SetGameplayPCRef");

	Params::UAbilities_C_SetGameplayPCRef_Params Parms{};

	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Abilities.Abilities_C.Set0BaseRef
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                       CallFunc_GetOwningPlayerPawn_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                K2Node_DynamicCast_As0_Base                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAbilities_C::Set0BaseRef(class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Abilities_C", "Set0BaseRef");

	Params::UAbilities_C_Set0BaseRef_Params Parms{};

	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue = CallFunc_GetOwningPlayerPawn_ReturnValue;
	Parms.K2Node_DynamicCast_As0_Base = K2Node_DynamicCast_As0_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Abilities.Abilities_C.PlayStoneFormReady
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbilities_C::PlayStoneFormReady(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Abilities_C", "PlayStoneFormReady");

	Params::UAbilities_C_PlayStoneFormReady_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Abilities.Abilities_C.GetStoneFormPercent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAbilities_C::GetStoneFormPercent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Abilities_C", "GetStoneFormPercent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Abilities.Abilities_C.SetRiposteSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Condition                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAbilities_C::SetRiposteSound(bool Condition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Abilities_C", "SetRiposteSound");

	Params::UAbilities_C_SetRiposteSound_Params Parms{};

	Parms.Condition = Condition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Abilities.Abilities_C.SetInitialAbilityData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AZero_Base_C*                Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERiposteTypes           CallFunc_GetCurrentlyEquippedSecondaryRiposte_Output             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasUnlockedEmpoweredRipostes_bAtLeastRiposteAvailable   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAbilities_C::SetInitialAbilityData(class AZero_Base_C* Character, enum class ERiposteTypes CallFunc_GetCurrentlyEquippedSecondaryRiposte_Output, bool CallFunc_HasUnlockedEmpoweredRipostes_bAtLeastRiposteAvailable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Abilities_C", "SetInitialAbilityData");

	Params::UAbilities_C_SetInitialAbilityData_Params Parms{};

	Parms.Character = Character;
	Parms.CallFunc_GetCurrentlyEquippedSecondaryRiposte_Output = CallFunc_GetCurrentlyEquippedSecondaryRiposte_Output;
	Parms.CallFunc_HasUnlockedEmpoweredRipostes_bAtLeastRiposteAvailable = CallFunc_HasUnlockedEmpoweredRipostes_bAtLeastRiposteAvailable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Abilities.Abilities_C.SetRiposteData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ERiposteTypes           Riposte                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERiposteTypes           Local_Riposte                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_StormModeProgress  CallFunc_GetStormModeProgress_Progress                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UAbilities_C::SetRiposteData(enum class ERiposteTypes Riposte, enum class ERiposteTypes Local_Riposte, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC, bool K2Node_DynamicCast_bSuccess, enum class Enum_StormModeProgress CallFunc_GetStormModeProgress_Progress, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Abilities_C", "SetRiposteData");

	Params::UAbilities_C_SetRiposteData_Params Parms{};

	Parms.Riposte = Riposte;
	Parms.Local_Riposte = Local_Riposte;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC = K2Node_DynamicCast_AsBPI_Storm_Mode_PC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetStormModeProgress_Progress = CallFunc_GetStormModeProgress_Progress;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Abilities.Abilities_C.UpdateAbilityImageVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ERiposteTypes           Selection                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERiposteTypes           Local_Selection                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Local_AbilityImage                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERiposteTypes           Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbilities_C::UpdateAbilityImageVisibility(enum class ERiposteTypes Selection, enum class ERiposteTypes Local_Selection, class UTexture2D* Local_AbilityImage, enum class ERiposteTypes Temp_byte_Variable, class UWidget* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Abilities_C", "UpdateAbilityImageVisibility");

	Params::UAbilities_C_UpdateAbilityImageVisibility_Params Parms{};

	Parms.Selection = Selection;
	Parms.Local_Selection = Local_Selection;
	Parms.Local_AbilityImage = Local_AbilityImage;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Abilities.Abilities_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAbilities_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Abilities_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Abilities.Abilities_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbilities_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Abilities_C", "Tick");

	Params::UAbilities_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Abilities.Abilities_C.OnCurrentRiposteSwapped_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ERiposteTypes           NewRiposte                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               PlaySound                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAbilities_C::OnCurrentRiposteSwapped_Set(enum class ERiposteTypes NewRiposte, bool PlaySound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Abilities_C", "OnCurrentRiposteSwapped_Set");

	Params::UAbilities_C_OnCurrentRiposteSwapped_Set_Params Parms{};

	Parms.NewRiposte = NewRiposte;
	Parms.PlaySound = PlaySound;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Abilities.Abilities_C.OnRipostePossible_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTimerHandle                RiposteWindowExpirationTimer                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class ABaseCharacter_C*            ParriedEnemy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbilities_C::OnRipostePossible_Set(const struct FTimerHandle& RiposteWindowExpirationTimer, class ABaseCharacter_C* ParriedEnemy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Abilities_C", "OnRipostePossible_Set");

	Params::UAbilities_C_OnRipostePossible_Set_Params Parms{};

	Parms.RiposteWindowExpirationTimer = RiposteWindowExpirationTimer;
	Parms.ParriedEnemy = ParriedEnemy;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Abilities.Abilities_C.OnRiposteUnlocked_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ERiposteTypes           UnlockedRiposte                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbilities_C::OnRiposteUnlocked_Set(enum class ERiposteTypes UnlockedRiposte)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Abilities_C", "OnRiposteUnlocked_Set");

	Params::UAbilities_C_OnRiposteUnlocked_Set_Params Parms{};

	Parms.UnlockedRiposte = UnlockedRiposte;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Abilities.Abilities_C.OnCurrentRiposteSwapped_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAbilities_C::OnCurrentRiposteSwapped_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Abilities_C", "OnCurrentRiposteSwapped_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Abilities.Abilities_C.OnRipostePossible_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAbilities_C::OnRipostePossible_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Abilities_C", "OnRipostePossible_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Abilities.Abilities_C.OnRiposteUnlocked_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAbilities_C::OnRiposteUnlocked_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Abilities_C", "OnRiposteUnlocked_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Abilities.Abilities_C.OnStoneFormReady_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAbilities_C::OnStoneFormReady_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Abilities_C", "OnStoneFormReady_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Abilities.Abilities_C.OnStoneFormReady_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAbilities_C::OnStoneFormReady_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Abilities_C", "OnStoneFormReady_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Abilities.Abilities_C.OnParrySuccessfull_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAbilities_C::OnParrySuccessfull_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Abilities_C", "OnParrySuccessfull_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Abilities.Abilities_C.OnEnemyTargeted_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAbilities_C::OnEnemyTargeted_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Abilities_C", "OnEnemyTargeted_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Abilities.Abilities_C.OnEnemyTargeted_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABaseCharacter_C*            TargetedEnemy                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbilities_C::OnEnemyTargeted_Set(class ABaseCharacter_C* TargetedEnemy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Abilities_C", "OnEnemyTargeted_Set");

	Params::UAbilities_C_OnEnemyTargeted_Set_Params Parms{};

	Parms.TargetedEnemy = TargetedEnemy;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Abilities.Abilities_C.OnTargetEnemyCleared_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAbilities_C::OnTargetEnemyCleared_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Abilities_C", "OnTargetEnemyCleared_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Abilities.Abilities_C.OnTargetEnemyCleared_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAbilities_C::OnTargetEnemyCleared_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Abilities_C", "OnTargetEnemyCleared_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Abilities.Abilities_C.OnTargetEnemyCleared_Reset
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAbilities_C::OnTargetEnemyCleared_Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Abilities_C", "OnTargetEnemyCleared_Reset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Abilities.Abilities_C.OnEnemyTargeted_Reset
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAbilities_C::OnEnemyTargeted_Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Abilities_C", "OnEnemyTargeted_Reset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Abilities.Abilities_C.ExecuteUbergraph_Abilities
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERiposteTypes           K2Node_CustomEvent_NewRiposte                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_PlaySound                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                K2Node_CustomEvent_RiposteWindowExpirationTimer                  (NoDestructor, HasGetValueTypeHash)
// class ABaseCharacter_C*            K2Node_CustomEvent_ParriedEnemy                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERiposteTypes           K2Node_CustomEvent_UnlockedRiposte                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// class ABaseCharacter_C*            K2Node_CustomEvent_TargetedEnemy                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbilities_C::ExecuteUbergraph_Abilities(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_IsClosed_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool Temp_bool_Has_Been_Initd_Variable, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, enum class ERiposteTypes K2Node_CustomEvent_NewRiposte, bool K2Node_CustomEvent_PlaySound, const struct FTimerHandle& K2Node_CustomEvent_RiposteWindowExpirationTimer, class ABaseCharacter_C* K2Node_CustomEvent_ParriedEnemy, enum class ERiposteTypes K2Node_CustomEvent_UnlockedRiposte, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class ABaseCharacter_C* K2Node_CustomEvent_TargetedEnemy, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Abilities_C", "ExecuteUbergraph_Abilities");

	Params::UAbilities_C_ExecuteUbergraph_Abilities_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_CustomEvent_NewRiposte = K2Node_CustomEvent_NewRiposte;
	Parms.K2Node_CustomEvent_PlaySound = K2Node_CustomEvent_PlaySound;
	Parms.K2Node_CustomEvent_RiposteWindowExpirationTimer = K2Node_CustomEvent_RiposteWindowExpirationTimer;
	Parms.K2Node_CustomEvent_ParriedEnemy = K2Node_CustomEvent_ParriedEnemy;
	Parms.K2Node_CustomEvent_UnlockedRiposte = K2Node_CustomEvent_UnlockedRiposte;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CustomEvent_TargetedEnemy = K2Node_CustomEvent_TargetedEnemy;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}



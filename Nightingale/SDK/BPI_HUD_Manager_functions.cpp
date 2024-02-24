#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_HUD_Manager.BPI_HUD_Manager_C
// (None)

class UClass* IBPI_HUD_Manager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_HUD_Manager_C");

	return Clss;
}


// BPI_HUD_Manager_C BPI_HUD_Manager.Default__BPI_HUD_Manager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_HUD_Manager_C* IBPI_HUD_Manager_C::GetDefaultObj()
{
	static class IBPI_HUD_Manager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_HUD_Manager_C*>(IBPI_HUD_Manager_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_HUD_Manager.BPI_HUD_Manager_C.UpdateNextNotificationCard
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_HUD_Manager_C::UpdateNextNotificationCard()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_HUD_Manager_C", "UpdateNextNotificationCard");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_HUD_Manager.BPI_HUD_Manager_C.ClearNotificationCardQueue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_HUD_Manager_C::ClearNotificationCardQueue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_HUD_Manager_C", "ClearNotificationCardQueue");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_HUD_Manager.BPI_HUD_Manager_C.IsCardNotificationQueueEmpty
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsEmpty                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_HUD_Manager_C::IsCardNotificationQueueEmpty(bool* bIsEmpty)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_HUD_Manager_C", "IsCardNotificationQueueEmpty");

	Params::IBPI_HUD_Manager_C_IsCardNotificationQueueEmpty_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bIsEmpty != nullptr)
		*bIsEmpty = Parms.bIsEmpty;

}


// Function BPI_HUD_Manager.BPI_HUD_Manager_C.BuildUX_Feedback_HeightControls
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CanAdjustHeight                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Height_Current                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Height_Max                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Height_Min                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_HUD_Manager_C::BuildUX_Feedback_HeightControls(bool CanAdjustHeight, double Height_Current, double Height_Max, double Height_Min)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_HUD_Manager_C", "BuildUX_Feedback_HeightControls");

	Params::IBPI_HUD_Manager_C_BuildUX_Feedback_HeightControls_Params Parms{};

	Parms.CanAdjustHeight = CanAdjustHeight;
	Parms.Height_Current = Height_Current;
	Parms.Height_Max = Height_Max;
	Parms.Height_Min = Height_Min;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_HUD_Manager.BPI_HUD_Manager_C.BuildUX_Feedback_RotationControls
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CanRotate                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CurrentRotation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_HUD_Manager_C::BuildUX_Feedback_RotationControls(bool CanRotate, double CurrentRotation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_HUD_Manager_C", "BuildUX_Feedback_RotationControls");

	Params::IBPI_HUD_Manager_C_BuildUX_Feedback_RotationControls_Params Parms{};

	Parms.CanRotate = CanRotate;
	Parms.CurrentRotation = CurrentRotation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_HUD_Manager.BPI_HUD_Manager_C.BuildUX_Feedback_Invalid
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStructurePlacementFeedback Feedback                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void IBPI_HUD_Manager_C::BuildUX_Feedback_Invalid(const struct FStructurePlacementFeedback& Feedback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_HUD_Manager_C", "BuildUX_Feedback_Invalid");

	Params::IBPI_HUD_Manager_C_BuildUX_Feedback_Invalid_Params Parms{};

	Parms.Feedback = Feedback;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_HUD_Manager.BPI_HUD_Manager_C.BuildUX_Feedback_Invalid_Intersecting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStructurePlacementFeedback_CollisionFeedback                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void IBPI_HUD_Manager_C::BuildUX_Feedback_Invalid_Intersecting(const struct FStructurePlacementFeedback_Collision& Feedback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_HUD_Manager_C", "BuildUX_Feedback_Invalid_Intersecting");

	Params::IBPI_HUD_Manager_C_BuildUX_Feedback_Invalid_Intersecting_Params Parms{};

	Parms.Feedback = Feedback;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_HUD_Manager.BPI_HUD_Manager_C.FadeToBlack_Manual
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               To_Black_true__From_Black__False                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_HUD_Manager_C::FadeToBlack_Manual(bool To_Black_true__From_Black__False)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_HUD_Manager_C", "FadeToBlack_Manual");

	Params::IBPI_HUD_Manager_C_FadeToBlack_Manual_Params Parms{};

	Parms.To_Black_true__From_Black__False = To_Black_true__From_Black__False;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_HUD_Manager.BPI_HUD_Manager_C.FadeToBlack_andBack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             TimeToStayBlack                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_HUD_Manager_C::FadeToBlack_andBack(double TimeToStayBlack)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_HUD_Manager_C", "FadeToBlack_andBack");

	Params::IBPI_HUD_Manager_C_FadeToBlack_andBack_Params Parms{};

	Parms.TimeToStayBlack = TimeToStayBlack;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_HUD_Manager.BPI_HUD_Manager_C.DisplayErrorNotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        MainText                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        BodyText                                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void IBPI_HUD_Manager_C::DisplayErrorNotification(class FText MainText, class FText BodyText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_HUD_Manager_C", "DisplayErrorNotification");

	Params::IBPI_HUD_Manager_C_DisplayErrorNotification_Params Parms{};

	Parms.MainText = MainText;
	Parms.BodyText = BodyText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_HUD_Manager.BPI_HUD_Manager_C.UI_VFX_CC_ChangeCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_HUD_Manager_C::UI_VFX_CC_ChangeCharacter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_HUD_Manager_C", "UI_VFX_CC_ChangeCharacter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_HUD_Manager.BPI_HUD_Manager_C.UI_VFX_CraftingSuccess
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemQuality            Quality                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_HUD_Manager_C::UI_VFX_CraftingSuccess(const struct FVector& Location, enum class EItemQuality Quality)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_HUD_Manager_C", "UI_VFX_CraftingSuccess");

	Params::IBPI_HUD_Manager_C_UI_VFX_CraftingSuccess_Params Parms{};

	Parms.Location = Location;
	Parms.Quality = Quality;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_HUD_Manager.BPI_HUD_Manager_C.UI_Spyglass_AdjustZoomLevel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_HUD_Manager_C::UI_Spyglass_AdjustZoomLevel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_HUD_Manager_C", "UI_Spyglass_AdjustZoomLevel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_HUD_Manager.BPI_HUD_Manager_C.HUD_StatusEffect_TextNotification_Remove
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_HUD_Manager_C::HUD_StatusEffect_TextNotification_Remove()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_HUD_Manager_C", "HUD_StatusEffect_TextNotification_Remove");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_HUD_Manager.BPI_HUD_Manager_C.HUD_StatusEffect_TextNotificationUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ManuallyRemove_                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             TimeToDisplay                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_UpdaterNotificatorInfo   Content                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void IBPI_HUD_Manager_C::HUD_StatusEffect_TextNotificationUpdate(bool ManuallyRemove_, double TimeToDisplay, const struct FS_UpdaterNotificatorInfo& Content)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_HUD_Manager_C", "HUD_StatusEffect_TextNotificationUpdate");

	Params::IBPI_HUD_Manager_C_HUD_StatusEffect_TextNotificationUpdate_Params Parms{};

	Parms.ManuallyRemove_ = ManuallyRemove_;
	Parms.TimeToDisplay = TimeToDisplay;
	Parms.Content = Content;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_HUD_Manager.BPI_HUD_Manager_C.HUD_GeneralNotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_UpdaterNotificatorInfo   Content                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               Remove_Manually                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Time_to_Display                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_HUD_Manager_C::HUD_GeneralNotification(const struct FS_UpdaterNotificatorInfo& Content, bool Remove_Manually, double Time_to_Display)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_HUD_Manager_C", "HUD_GeneralNotification");

	Params::IBPI_HUD_Manager_C_HUD_GeneralNotification_Params Parms{};

	Parms.Content = Content;
	Parms.Remove_Manually = Remove_Manually;
	Parms.Time_to_Display = Time_to_Display;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_HUD_Manager.BPI_HUD_Manager_C.HUD_Encounter_MiniMessage_Pinned
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FNotificationEncounter      MessageContent                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               Pin_or_Unpin__Pin_true_will_add_                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_HUD_Manager_C::HUD_Encounter_MiniMessage_Pinned(const struct FNotificationEncounter& MessageContent, bool Pin_or_Unpin__Pin_true_will_add_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_HUD_Manager_C", "HUD_Encounter_MiniMessage_Pinned");

	Params::IBPI_HUD_Manager_C_HUD_Encounter_MiniMessage_Pinned_Params Parms{};

	Parms.MessageContent = MessageContent;
	Parms.Pin_or_Unpin__Pin_true_will_add_ = Pin_or_Unpin__Pin_true_will_add_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_HUD_Manager.BPI_HUD_Manager_C.HUD_Encounter_MiniMessage_Timed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FNotificationEncounter      Message_Content                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// double                             TimeToDisplay                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_HUD_Manager_C::HUD_Encounter_MiniMessage_Timed(const struct FNotificationEncounter& Message_Content, double TimeToDisplay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_HUD_Manager_C", "HUD_Encounter_MiniMessage_Timed");

	Params::IBPI_HUD_Manager_C_HUD_Encounter_MiniMessage_Timed_Params Parms{};

	Parms.Message_Content = Message_Content;
	Parms.TimeToDisplay = TimeToDisplay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_HUD_Manager.BPI_HUD_Manager_C.ShowContextualControls
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsVisible                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ContextualControlsData   ContextualControlsData                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_HUD_Manager_C::ShowContextualControls(bool IsVisible, const struct FS_ContextualControlsData& ContextualControlsData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_HUD_Manager_C", "ShowContextualControls");

	Params::IBPI_HUD_Manager_C_ShowContextualControls_Params Parms{};

	Parms.IsVisible = IsVisible;
	Parms.ContextualControlsData = ContextualControlsData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_HUD_Manager.BPI_HUD_Manager_C.Crosshair_UpdateWeaponSpread
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Spread                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_HUD_Manager_C::Crosshair_UpdateWeaponSpread(double Spread)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_HUD_Manager_C", "Crosshair_UpdateWeaponSpread");

	Params::IBPI_HUD_Manager_C_Crosshair_UpdateWeaponSpread_Params Parms{};

	Parms.Spread = Spread;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_HUD_Manager.BPI_HUD_Manager_C.HUD_SetRealmStartTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             RealmStartTime                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_HUD_Manager_C::HUD_SetRealmStartTime(double RealmStartTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_HUD_Manager_C", "HUD_SetRealmStartTime");

	Params::IBPI_HUD_Manager_C_HUD_SetRealmStartTime_Params Parms{};

	Parms.RealmStartTime = RealmStartTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_HUD_Manager.BPI_HUD_Manager_C.DisplayEncounterUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IEncounterUIDataInterface>EncounterData                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FNotificationEncounter      EncounterMessage                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void IBPI_HUD_Manager_C::DisplayEncounterUpdate(TScriptInterface<class IEncounterUIDataInterface> EncounterData, const struct FNotificationEncounter& EncounterMessage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_HUD_Manager_C", "DisplayEncounterUpdate");

	Params::IBPI_HUD_Manager_C_DisplayEncounterUpdate_Params Parms{};

	Parms.EncounterData = EncounterData;
	Parms.EncounterMessage = EncounterMessage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_HUD_Manager.BPI_HUD_Manager_C.HUD_ChangeHudMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_UI_HUD_Modes          HUD_Mode                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_HUD_Manager_C::HUD_ChangeHudMode(enum class E_UI_HUD_Modes HUD_Mode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_HUD_Manager_C", "HUD_ChangeHudMode");

	Params::IBPI_HUD_Manager_C_HUD_ChangeHudMode_Params Parms{};

	Parms.HUD_Mode = HUD_Mode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_HUD_Manager.BPI_HUD_Manager_C.HUD_UpdateActionProgressBar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visible                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CurrentProgress                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Label                                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               ShowImage                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Image                                                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void IBPI_HUD_Manager_C::HUD_UpdateActionProgressBar(bool Visible, double CurrentProgress, class FText Label, bool ShowImage, TSoftObjectPtr<class UTexture2D> Image)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_HUD_Manager_C", "HUD_UpdateActionProgressBar");

	Params::IBPI_HUD_Manager_C_HUD_UpdateActionProgressBar_Params Parms{};

	Parms.Visible = Visible;
	Parms.CurrentProgress = CurrentProgress;
	Parms.Label = Label;
	Parms.ShowImage = ShowImage;
	Parms.Image = Image;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_HUD_Manager.BPI_HUD_Manager_C.HUD_Damage_CreateIndicator
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageEffectContextData    DamageContextData                                                (BlueprintVisible, BlueprintReadOnly, Parm)
// double                             Time_to_Display                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Damage_Intensity__Amount_                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Colour                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_HUD_Manager_C::HUD_Damage_CreateIndicator(const struct FDamageEffectContextData& DamageContextData, double Time_to_Display, double Damage_Intensity__Amount_, const struct FLinearColor& Colour)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_HUD_Manager_C", "HUD_Damage_CreateIndicator");

	Params::IBPI_HUD_Manager_C_HUD_Damage_CreateIndicator_Params Parms{};

	Parms.DamageContextData = DamageContextData;
	Parms.Time_to_Display = Time_to_Display;
	Parms.Damage_Intensity__Amount_ = Damage_Intensity__Amount_;
	Parms.Colour = Colour;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_HUD_Manager.BPI_HUD_Manager_C.HUD_RemoveBossBar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Label                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void IBPI_HUD_Manager_C::HUD_RemoveBossBar(const class FString& Label)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_HUD_Manager_C", "HUD_RemoveBossBar");

	Params::IBPI_HUD_Manager_C_HUD_RemoveBossBar_Params Parms{};

	Parms.Label = Label;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_HUD_Manager.BPI_HUD_Manager_C.HUD_AddNewBossBar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Progress_Bar_Tint                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EProgressBarFillType    Progress_Bar_Direction                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Bar_Label                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FText                        Bar_Header                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Bar_Sub_Header                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void IBPI_HUD_Manager_C::HUD_AddNewBossBar(const struct FLinearColor& Progress_Bar_Tint, enum class EProgressBarFillType Progress_Bar_Direction, const class FString& Bar_Label, class FText Bar_Header, class FText Bar_Sub_Header)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_HUD_Manager_C", "HUD_AddNewBossBar");

	Params::IBPI_HUD_Manager_C_HUD_AddNewBossBar_Params Parms{};

	Parms.Progress_Bar_Tint = Progress_Bar_Tint;
	Parms.Progress_Bar_Direction = Progress_Bar_Direction;
	Parms.Bar_Label = Bar_Label;
	Parms.Bar_Header = Bar_Header;
	Parms.Bar_Sub_Header = Bar_Sub_Header;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_HUD_Manager.BPI_HUD_Manager_C.HUD_UpdateBossBar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Bar_Label                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FText                        Whatever_                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// double                             Health                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Bar_Header                                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void IBPI_HUD_Manager_C::HUD_UpdateBossBar(const class FString& Bar_Label, class FText Whatever_, double Health, class FText Bar_Header)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_HUD_Manager_C", "HUD_UpdateBossBar");

	Params::IBPI_HUD_Manager_C_HUD_UpdateBossBar_Params Parms{};

	Parms.Bar_Label = Bar_Label;
	Parms.Whatever_ = Whatever_;
	Parms.Health = Health;
	Parms.Bar_Header = Bar_Header;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_HUD_Manager.BPI_HUD_Manager_C.HUD_DisplayApexCreature_BossBar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Display_                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_HUD_Manager_C::HUD_DisplayApexCreature_BossBar(bool Display_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_HUD_Manager_C", "HUD_DisplayApexCreature_BossBar");

	Params::IBPI_HUD_Manager_C_HUD_DisplayApexCreature_BossBar_Params Parms{};

	Parms.Display_ = Display_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_HUD_Manager.BPI_HUD_Manager_C.HUD_UpdateInteractText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInteractionUIContext       InteractionContext                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void IBPI_HUD_Manager_C::HUD_UpdateInteractText(struct FInteractionUIContext& InteractionContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_HUD_Manager_C", "HUD_UpdateInteractText");

	Params::IBPI_HUD_Manager_C_HUD_UpdateInteractText_Params Parms{};

	Parms.InteractionContext = InteractionContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_HUD_Manager.BPI_HUD_Manager_C.ShowSpyglass
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show_                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_HUD_Manager_C::ShowSpyglass(bool Show_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_HUD_Manager_C", "ShowSpyglass");

	Params::IBPI_HUD_Manager_C_ShowSpyglass_Params Parms{};

	Parms.Show_ = Show_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_HUD_Manager.BPI_HUD_Manager_C.Crosshair_UpdateReload
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Time                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_HUD_Manager_C::Crosshair_UpdateReload(double Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_HUD_Manager_C", "Crosshair_UpdateReload");

	Params::IBPI_HUD_Manager_C_Crosshair_UpdateReload_Params Parms{};

	Parms.Time = Time;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_HUD_Manager.BPI_HUD_Manager_C.Crosshair_ShowReloadText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_HUD_Manager_C::Crosshair_ShowReloadText(bool Show)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_HUD_Manager_C", "Crosshair_ShowReloadText");

	Params::IBPI_HUD_Manager_C_Crosshair_ShowReloadText_Params Parms{};

	Parms.Show = Show;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_HUD_Manager.BPI_HUD_Manager_C.Chat_Yell_ReceiveFromServer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Message                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void IBPI_HUD_Manager_C::Chat_Yell_ReceiveFromServer(const class FString& Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_HUD_Manager_C", "Chat_Yell_ReceiveFromServer");

	Params::IBPI_HUD_Manager_C_Chat_Yell_ReceiveFromServer_Params Parms{};

	Parms.Message = Message;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_HUD_Manager.BPI_HUD_Manager_C.Chat_Yell_SendToServer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Message                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void IBPI_HUD_Manager_C::Chat_Yell_SendToServer(const class FString& Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_HUD_Manager_C", "Chat_Yell_SendToServer");

	Params::IBPI_HUD_Manager_C_Chat_Yell_SendToServer_Params Parms{};

	Parms.Message = Message;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_HUD_Manager.BPI_HUD_Manager_C.Chat_ServerCommand
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Message                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void IBPI_HUD_Manager_C::Chat_ServerCommand(const class FString& Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_HUD_Manager_C", "Chat_ServerCommand");

	Params::IBPI_HUD_Manager_C_Chat_ServerCommand_Params Parms{};

	Parms.Message = Message;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_HUD_Manager.BPI_HUD_Manager_C.Chat_SetStatus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Away                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_HUD_Manager_C::Chat_SetStatus(bool Away)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_HUD_Manager_C", "Chat_SetStatus");

	Params::IBPI_HUD_Manager_C_Chat_SetStatus_Params Parms{};

	Parms.Away = Away;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_HUD_Manager.BPI_HUD_Manager_C.Chat_PM_ReceiveFromServer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PlayerId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Message                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void IBPI_HUD_Manager_C::Chat_PM_ReceiveFromServer(int32 PlayerId, const class FString& Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_HUD_Manager_C", "Chat_PM_ReceiveFromServer");

	Params::IBPI_HUD_Manager_C_Chat_PM_ReceiveFromServer_Params Parms{};

	Parms.PlayerId = PlayerId;
	Parms.Message = Message;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_HUD_Manager.BPI_HUD_Manager_C.Chat_PM_SendToServer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PlayerId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Message                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void IBPI_HUD_Manager_C::Chat_PM_SendToServer(int32 PlayerId, const class FString& Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_HUD_Manager_C", "Chat_PM_SendToServer");

	Params::IBPI_HUD_Manager_C_Chat_PM_SendToServer_Params Parms{};

	Parms.PlayerId = PlayerId;
	Parms.Message = Message;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_HUD_Manager.BPI_HUD_Manager_C.Chat_JoinChannel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ChannelID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_HUD_Manager_C::Chat_JoinChannel(int32 ChannelID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_HUD_Manager_C", "Chat_JoinChannel");

	Params::IBPI_HUD_Manager_C_Chat_JoinChannel_Params Parms{};

	Parms.ChannelID = ChannelID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_HUD_Manager.BPI_HUD_Manager_C.Chat_LeaveChannel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ChannelID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_HUD_Manager_C::Chat_LeaveChannel(int32 ChannelID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_HUD_Manager_C", "Chat_LeaveChannel");

	Params::IBPI_HUD_Manager_C_Chat_LeaveChannel_Params Parms{};

	Parms.ChannelID = ChannelID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_HUD_Manager.BPI_HUD_Manager_C.Chat_Message_ReceiveFromServer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_ChatMessage              ChatMessageS                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void IBPI_HUD_Manager_C::Chat_Message_ReceiveFromServer(const struct FS_ChatMessage& ChatMessageS)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_HUD_Manager_C", "Chat_Message_ReceiveFromServer");

	Params::IBPI_HUD_Manager_C_Chat_Message_ReceiveFromServer_Params Parms{};

	Parms.ChatMessageS = ChatMessageS;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_HUD_Manager.BPI_HUD_Manager_C.Chat_Message_SendToServer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ChatMessage                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void IBPI_HUD_Manager_C::Chat_Message_SendToServer(const class FString& ChatMessage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_HUD_Manager_C", "Chat_Message_SendToServer");

	Params::IBPI_HUD_Manager_C_Chat_Message_SendToServer_Params Parms{};

	Parms.ChatMessage = ChatMessage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_HUD_Manager.BPI_HUD_Manager_C.HUD_InputChatCommand
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_HUD_Manager_C::HUD_InputChatCommand()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_HUD_Manager_C", "HUD_InputChatCommand");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_HUD_Manager.BPI_HUD_Manager_C.HUD_FocusChatInput
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_HUD_Manager_C::HUD_FocusChatInput()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_HUD_Manager_C", "HUD_FocusChatInput");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_HUD_Manager.BPI_HUD_Manager_C.CrosshairVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bVisible                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_HUD_Manager_C::CrosshairVisibility(bool bVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_HUD_Manager_C", "CrosshairVisibility");

	Params::IBPI_HUD_Manager_C_CrosshairVisibility_Params Parms{};

	Parms.bVisible = bVisible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_HUD_Manager.BPI_HUD_Manager_C.RemoveGlobalNotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_HUD_Manager_C::RemoveGlobalNotification()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_HUD_Manager_C", "RemoveGlobalNotification");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_HUD_Manager.BPI_HUD_Manager_C.DisplayGlobalNotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             DisplayTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        TypeText                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        HeadlineText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)

void IBPI_HUD_Manager_C::DisplayGlobalNotification(double DisplayTime, class FText TypeText, class FText HeadlineText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_HUD_Manager_C", "DisplayGlobalNotification");

	Params::IBPI_HUD_Manager_C_DisplayGlobalNotification_Params Parms{};

	Parms.DisplayTime = DisplayTime;
	Parms.TypeText = TypeText;
	Parms.HeadlineText = HeadlineText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_HUD_Manager.BPI_HUD_Manager_C.RemoveToolTip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_HUD_Manager_C::RemoveToolTip()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_HUD_Manager_C", "RemoveToolTip");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_HUD_Manager.BPI_HUD_Manager_C.DisplayToolTip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             DisplayTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_IngameTutorial           Row1                                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FS_IngameTutorial           Row2                                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void IBPI_HUD_Manager_C::DisplayToolTip(double DisplayTime, const struct FS_IngameTutorial& Row1, const struct FS_IngameTutorial& Row2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_HUD_Manager_C", "DisplayToolTip");

	Params::IBPI_HUD_Manager_C_DisplayToolTip_Params Parms{};

	Parms.DisplayTime = DisplayTime;
	Parms.Row1 = Row1;
	Parms.Row2 = Row2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_HUD_Manager.BPI_HUD_Manager_C.RemoveBigLootNotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_HUD_Manager_C::RemoveBigLootNotification()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_HUD_Manager_C", "RemoveBigLootNotification");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_HUD_Manager.BPI_HUD_Manager_C.DisplayBigLootNotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_BigLootNotificationInfo  Big_Loot_Notify_Info                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void IBPI_HUD_Manager_C::DisplayBigLootNotification(const struct FS_BigLootNotificationInfo& Big_Loot_Notify_Info)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_HUD_Manager_C", "DisplayBigLootNotification");

	Params::IBPI_HUD_Manager_C_DisplayBigLootNotification_Params Parms{};

	Parms.Big_Loot_Notify_Info = Big_Loot_Notify_Info;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_HUD_Manager.BPI_HUD_Manager_C.DisplaySingleRecoil
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_HUD_Manager_C::DisplaySingleRecoil()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_HUD_Manager_C", "DisplaySingleRecoil");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_HUD_Manager.BPI_HUD_Manager_C.DisplayRecoil
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsRecoil                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_HUD_Manager_C::DisplayRecoil(bool IsRecoil)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_HUD_Manager_C", "DisplayRecoil");

	Params::IBPI_HUD_Manager_C_DisplayRecoil_Params Parms{};

	Parms.IsRecoil = IsRecoil;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_HUD_Manager.BPI_HUD_Manager_C.RemoveQuestNotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_HUD_Manager_C::RemoveQuestNotification()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_HUD_Manager_C", "RemoveQuestNotification");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_HUD_Manager.BPI_HUD_Manager_C.DisplayHitIndicator
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             IndicatorTime                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                IndicatorColor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_HitType               Hit_Type                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_HUD_Manager_C::DisplayHitIndicator(double IndicatorTime, const struct FLinearColor& IndicatorColor, enum class E_HitType Hit_Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_HUD_Manager_C", "DisplayHitIndicator");

	Params::IBPI_HUD_Manager_C_DisplayHitIndicator_Params Parms{};

	Parms.IndicatorTime = IndicatorTime;
	Parms.IndicatorColor = IndicatorColor;
	Parms.Hit_Type = Hit_Type;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_HUD_Manager.BPI_HUD_Manager_C.DisplayCrosshair
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_CrosshairTypes        Crosshair_Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CrosshairVisibility                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Crosshair_Color                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_HitIndicatorTypes     HitIndicator_Type                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               HitIndicatorVisibility                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_HUD_Manager_C::DisplayCrosshair(enum class E_CrosshairTypes Crosshair_Type, bool CrosshairVisibility, const struct FLinearColor& Crosshair_Color, enum class E_HitIndicatorTypes HitIndicator_Type, bool HitIndicatorVisibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_HUD_Manager_C", "DisplayCrosshair");

	Params::IBPI_HUD_Manager_C_DisplayCrosshair_Params Parms{};

	Parms.Crosshair_Type = Crosshair_Type;
	Parms.CrosshairVisibility = CrosshairVisibility;
	Parms.Crosshair_Color = Crosshair_Color;
	Parms.HitIndicator_Type = HitIndicator_Type;
	Parms.HitIndicatorVisibility = HitIndicatorVisibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_HUD_Manager.BPI_HUD_Manager_C.DisplayIngameTutorial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             DisplayTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_IngameTutorial           Row1                                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FS_IngameTutorial           Row2                                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FLinearColor                BackgroundColor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_HUD_Manager_C::DisplayIngameTutorial(double DisplayTime, const struct FS_IngameTutorial& Row1, const struct FS_IngameTutorial& Row2, const struct FLinearColor& BackgroundColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_HUD_Manager_C", "DisplayIngameTutorial");

	Params::IBPI_HUD_Manager_C_DisplayIngameTutorial_Params Parms{};

	Parms.DisplayTime = DisplayTime;
	Parms.Row1 = Row1;
	Parms.Row2 = Row2;
	Parms.BackgroundColor = BackgroundColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_HUD_Manager.BPI_HUD_Manager_C.DisplayQuestNotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             DisplayTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_QuestNotificatorInfo     Quest_Notificator_Info                                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               DisplayToolTip                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     ToolTipIcon                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        ToolTipText                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               ToolTipOnly                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_HUD_Manager_C::DisplayQuestNotification(double DisplayTime, const struct FS_QuestNotificatorInfo& Quest_Notificator_Info, bool DisplayToolTip, class UObject* ToolTipIcon, class FText ToolTipText, bool ToolTipOnly)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_HUD_Manager_C", "DisplayQuestNotification");

	Params::IBPI_HUD_Manager_C_DisplayQuestNotification_Params Parms{};

	Parms.DisplayTime = DisplayTime;
	Parms.Quest_Notificator_Info = Quest_Notificator_Info;
	Parms.DisplayToolTip = DisplayToolTip;
	Parms.ToolTipIcon = ToolTipIcon;
	Parms.ToolTipText = ToolTipText;
	Parms.ToolTipOnly = ToolTipOnly;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_HUD_Manager.BPI_HUD_Manager_C.DisplayCompass
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bVisible                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               PlayFX                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_HUD_Manager_C::DisplayCompass(bool bVisible, bool PlayFX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_HUD_Manager_C", "DisplayCompass");

	Params::IBPI_HUD_Manager_C_DisplayCompass_Params Parms{};

	Parms.bVisible = bVisible;
	Parms.PlayFX = PlayFX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_HUD_Manager.BPI_HUD_Manager_C.UpdateMarker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ActorToMark                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             MarkerPrecision                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ParticlesVisible                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                ParticlesColor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_HUD_Manager_C::UpdateMarker(class AActor* ActorToMark, double MarkerPrecision, bool ParticlesVisible, const struct FLinearColor& ParticlesColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_HUD_Manager_C", "UpdateMarker");

	Params::IBPI_HUD_Manager_C_UpdateMarker_Params Parms{};

	Parms.ActorToMark = ActorToMark;
	Parms.MarkerPrecision = MarkerPrecision;
	Parms.ParticlesVisible = ParticlesVisible;
	Parms.ParticlesColor = ParticlesColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_HUD_Manager.BPI_HUD_Manager_C.RemoveMarker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ActorToMark                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBPI_HUD_Manager_C::RemoveMarker(class AActor* ActorToMark)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_HUD_Manager_C", "RemoveMarker");

	Params::IBPI_HUD_Manager_C_RemoveMarker_Params Parms{};

	Parms.ActorToMark = ActorToMark;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_HUD_Manager.BPI_HUD_Manager_C.CreateMarker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ActorToMark                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  PlayerCharacter                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCameraComponent*            PlayerCamera                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Colour                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             IconDistance                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         Row                                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void IBPI_HUD_Manager_C::CreateMarker(class AActor* ActorToMark, class ACharacter* PlayerCharacter, class UCameraComponent* PlayerCamera, const struct FLinearColor& Colour, double IconDistance, const struct FDataTableRowHandle& Row)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_HUD_Manager_C", "CreateMarker");

	Params::IBPI_HUD_Manager_C_CreateMarker_Params Parms{};

	Parms.ActorToMark = ActorToMark;
	Parms.PlayerCharacter = PlayerCharacter;
	Parms.PlayerCamera = PlayerCamera;
	Parms.Colour = Colour;
	Parms.IconDistance = IconDistance;
	Parms.Row = Row;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_HUD_Manager.BPI_HUD_Manager_C.DisplayHUD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShowingHUD                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_HUD_Manager_C::DisplayHUD(bool ShowingHUD)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_HUD_Manager_C", "DisplayHUD");

	Params::IBPI_HUD_Manager_C_DisplayHUD_Params Parms{};

	Parms.ShowingHUD = ShowingHUD;

	UObject::ProcessEvent(Func, &Parms);

}

}



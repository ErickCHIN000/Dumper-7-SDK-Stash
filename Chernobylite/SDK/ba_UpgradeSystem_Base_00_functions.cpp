#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ba_UpgradeSystem_Base_00.ba_UpgradeSystem_Base_00_C
// (Actor)

class UClass* Aba_UpgradeSystem_Base_00_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ba_UpgradeSystem_Base_00_C");

	return Clss;
}


// ba_UpgradeSystem_Base_00_C ba_UpgradeSystem_Base_00.Default__ba_UpgradeSystem_Base_00_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Aba_UpgradeSystem_Base_00_C* Aba_UpgradeSystem_Base_00_C::GetDefaultObj()
{
	static class Aba_UpgradeSystem_Base_00_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Aba_UpgradeSystem_Base_00_C*>(Aba_UpgradeSystem_Base_00_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ba_UpgradeSystem_Base_00.ba_UpgradeSystem_Base_00_C.FlourishTimeline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void Aba_UpgradeSystem_Base_00_C::FlourishTimeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_UpgradeSystem_Base_00_C", "FlourishTimeline__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_UpgradeSystem_Base_00.ba_UpgradeSystem_Base_00_C.FlourishTimeline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void Aba_UpgradeSystem_Base_00_C::FlourishTimeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_UpgradeSystem_Base_00_C", "FlourishTimeline__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_UpgradeSystem_Base_00.ba_UpgradeSystem_Base_00_C.InpActEvt_PC_Shortcuts_Pause_K2Node_InputActionEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void Aba_UpgradeSystem_Base_00_C::InpActEvt_PC_Shortcuts_Pause_K2Node_InputActionEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_UpgradeSystem_Base_00_C", "InpActEvt_PC_Shortcuts_Pause_K2Node_InputActionEvent_0");

	Params::Aba_UpgradeSystem_Base_00_C_InpActEvt_PC_Shortcuts_Pause_K2Node_InputActionEvent_0_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_UpgradeSystem_Base_00.ba_UpgradeSystem_Base_00_C.Back
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_UpgradeSystem_Base_00_C::Back()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_UpgradeSystem_Base_00_C", "Back");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_UpgradeSystem_Base_00.ba_UpgradeSystem_Base_00_C.GoBack
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_UpgradeSystem_Base_00_C::GoBack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_UpgradeSystem_Base_00_C", "GoBack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_UpgradeSystem_Base_00.ba_UpgradeSystem_Base_00_C.Flourish
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        UniqID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGActiveItem*               Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_UpgradeSystem_Base_00_C::Flourish(class FName UniqID, class ACGActiveItem* Item, class FName Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_UpgradeSystem_Base_00_C", "Flourish");

	Params::Aba_UpgradeSystem_Base_00_C_Flourish_Params Parms{};

	Parms.UniqID = UniqID;
	Parms.Item = Item;
	Parms.Name = Name;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_UpgradeSystem_Base_00.ba_UpgradeSystem_Base_00_C.LeftItem
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_UpgradeSystem_Base_00_C::LeftItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_UpgradeSystem_Base_00_C", "LeftItem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_UpgradeSystem_Base_00.ba_UpgradeSystem_Base_00_C.RightTab
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_UpgradeSystem_Base_00_C::RightTab()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_UpgradeSystem_Base_00_C", "RightTab");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_UpgradeSystem_Base_00.ba_UpgradeSystem_Base_00_C.LeftTab
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_UpgradeSystem_Base_00_C::LeftTab()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_UpgradeSystem_Base_00_C", "LeftTab");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_UpgradeSystem_Base_00.ba_UpgradeSystem_Base_00_C.End
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_UpgradeSystem_Base_00_C::End()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_UpgradeSystem_Base_00_C", "End");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_UpgradeSystem_Base_00.ba_UpgradeSystem_Base_00_C.SpamParticles
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     NewParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_UpgradeSystem_Base_00_C::SpamParticles(const struct FVector& NewParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_UpgradeSystem_Base_00_C", "SpamParticles");

	Params::Aba_UpgradeSystem_Base_00_C_SpamParticles_Params Parms{};

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_UpgradeSystem_Base_00.ba_UpgradeSystem_Base_00_C.Craft
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_UpgradeSystem_Base_00_C::Craft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_UpgradeSystem_Base_00_C", "Craft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_UpgradeSystem_Base_00.ba_UpgradeSystem_Base_00_C.Start
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGunChoice              GunType                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsOnField                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void Aba_UpgradeSystem_Base_00_C::Start(enum class EGunChoice GunType, bool IsOnField)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_UpgradeSystem_Base_00_C", "Start");

	Params::Aba_UpgradeSystem_Base_00_C_Start_Params Parms{};

	Parms.GunType = GunType;
	Parms.IsOnField = IsOnField;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_UpgradeSystem_Base_00.ba_UpgradeSystem_Base_00_C.RightItem
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_UpgradeSystem_Base_00_C::RightItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_UpgradeSystem_Base_00_C", "RightItem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_UpgradeSystem_Base_00.ba_UpgradeSystem_Base_00_C.InputAnyKeyboard
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_UpgradeSystem_Base_00_C::InputAnyKeyboard()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_UpgradeSystem_Base_00_C", "InputAnyKeyboard");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_UpgradeSystem_Base_00.ba_UpgradeSystem_Base_00_C.InputAnyGamepad
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_UpgradeSystem_Base_00_C::InputAnyGamepad()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_UpgradeSystem_Base_00_C", "InputAnyGamepad");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_UpgradeSystem_Base_00.ba_UpgradeSystem_Base_00_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void Aba_UpgradeSystem_Base_00_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_UpgradeSystem_Base_00_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_UpgradeSystem_Base_00.ba_UpgradeSystem_Base_00_C.ExecuteUbergraph_ba_UpgradeSystem_Base_00
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class ACGMovementState>Temp_class_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key                                      (HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_UniqID                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGActiveItem*               K2Node_CustomEvent_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_Name                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGWeapon*                   K2Node_DynamicCast_AsCGWeapon                                    (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGMovementState*            CallFunc_SetNewMovementState_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class ACGMovementState>Temp_class_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     K2Node_CustomEvent_NewParam                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_3                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_4                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue_1                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue_3                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetItemInfo_IsValid                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemEntry                  CallFunc_GetItemInfo_ReturnValue                                 (None)
// struct FVector                     CallFunc_GetUpgradeLocation_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGunChoice              K2Node_CustomEvent_GunType                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsOnField                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakVector_X_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldRotation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_VLerp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakVector_X_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldRotation_SweepHitResult_1                    (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                     CallFunc_VLerp_ReturnValue_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult_1                    (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class ACGMovementState*            CallFunc_SetNewMovementState_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGMovementState*            CallFunc_SetNewMovementState_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HideShowActiveItem_OutActionSuccessful                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACGWeapon*                   K2Node_DynamicCast_AsCGWeapon_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_8                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class ACGMovementState>K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class ACGMovementState*            CallFunc_SetNewMovementState_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_UpgradeSystem_Base_00_C::ExecuteUbergraph_ba_UpgradeSystem_Base_00(int32 EntryPoint, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TSubclassOf<class ACGMovementState> Temp_class_Variable, const struct FKey& K2Node_InputActionEvent_Key, class FName K2Node_CustomEvent_UniqID, class ACGActiveItem* K2Node_CustomEvent_Item, class FName K2Node_CustomEvent_Name, class ACGWeapon* K2Node_DynamicCast_AsCGWeapon, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_2, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class ACGMovementState* CallFunc_SetNewMovementState_ReturnValue, TSubclassOf<class ACGMovementState> Temp_class_Variable_1, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, const struct FVector& K2Node_CustomEvent_NewParam, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_3, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_4, bool Temp_bool_Variable, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue_1, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_1, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue_2, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue_3, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_1, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_2, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2, bool CallFunc_GetItemInfo_IsValid, const struct FItemEntry& CallFunc_GetItemInfo_ReturnValue, const struct FVector& CallFunc_GetUpgradeLocation_ReturnValue, enum class EGunChoice K2Node_CustomEvent_GunType, bool K2Node_CustomEvent_IsOnField, bool K2Node_SwitchEnum_CmpSuccess_1, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, bool CallFunc_BooleanAND_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_3, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, const struct FVector& CallFunc_VLerp_ReturnValue, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_4, float CallFunc_BreakVector_X_2, float CallFunc_BreakVector_Y_2, float CallFunc_BreakVector_Z_2, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult_1, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, const struct FVector& CallFunc_VLerp_ReturnValue_1, float CallFunc_BreakVector_X_3, float CallFunc_BreakVector_Y_3, float CallFunc_BreakVector_Z_3, float CallFunc_Add_FloatFloat_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult_1, class ACGMovementState* CallFunc_SetNewMovementState_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5, class ACGMovementState* CallFunc_SetNewMovementState_ReturnValue_2, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7, bool CallFunc_HideShowActiveItem_OutActionSuccessful, class ACGWeapon* K2Node_DynamicCast_AsCGWeapon_1, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_8, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, TSubclassOf<class ACGMovementState> K2Node_Select_Default, class ACGMovementState* CallFunc_SetNewMovementState_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_UpgradeSystem_Base_00_C", "ExecuteUbergraph_ba_UpgradeSystem_Base_00");

	Params::Aba_UpgradeSystem_Base_00_C_ExecuteUbergraph_ba_UpgradeSystem_Base_00_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.K2Node_InputActionEvent_Key = K2Node_InputActionEvent_Key;
	Parms.K2Node_CustomEvent_UniqID = K2Node_CustomEvent_UniqID;
	Parms.K2Node_CustomEvent_Item = K2Node_CustomEvent_Item;
	Parms.K2Node_CustomEvent_Name = K2Node_CustomEvent_Name;
	Parms.K2Node_DynamicCast_AsCGWeapon = K2Node_DynamicCast_AsCGWeapon;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_1 = CallFunc_K2_GetComponentLocation_ReturnValue_1;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_2 = CallFunc_K2_GetComponentLocation_ReturnValue_2;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue = CallFunc_SpawnSoundAttached_ReturnValue;
	Parms.CallFunc_SetNewMovementState_ReturnValue = CallFunc_SetNewMovementState_ReturnValue;
	Parms.Temp_class_Variable_1 = Temp_class_Variable_1;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue = CallFunc_K2_GetComponentRotation_ReturnValue;
	Parms.K2Node_CustomEvent_NewParam = K2Node_CustomEvent_NewParam;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_3 = CallFunc_K2_GetComponentLocation_ReturnValue_3;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_4 = CallFunc_K2_GetComponentLocation_ReturnValue_4;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue_1 = CallFunc_K2_GetComponentRotation_ReturnValue_1;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue_1 = CallFunc_K2_GetRootComponent_ReturnValue_1;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue_2 = CallFunc_K2_GetComponentRotation_ReturnValue_2;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue_3 = CallFunc_K2_GetComponentRotation_ReturnValue_3;
	Parms.CallFunc_ComposeRotators_ReturnValue = CallFunc_ComposeRotators_ReturnValue;
	Parms.CallFunc_ComposeRotators_ReturnValue_1 = CallFunc_ComposeRotators_ReturnValue_1;
	Parms.CallFunc_ComposeRotators_ReturnValue_2 = CallFunc_ComposeRotators_ReturnValue_2;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2;
	Parms.CallFunc_GetItemInfo_IsValid = CallFunc_GetItemInfo_IsValid;
	Parms.CallFunc_GetItemInfo_ReturnValue = CallFunc_GetItemInfo_ReturnValue;
	Parms.CallFunc_GetUpgradeLocation_ReturnValue = CallFunc_GetUpgradeLocation_ReturnValue;
	Parms.K2Node_CustomEvent_GunType = K2Node_CustomEvent_GunType;
	Parms.K2Node_CustomEvent_IsOnField = K2Node_CustomEvent_IsOnField;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_ComposeRotators_ReturnValue_3 = CallFunc_ComposeRotators_ReturnValue_3;
	Parms.CallFunc_BreakVector_X_1 = CallFunc_BreakVector_X_1;
	Parms.CallFunc_BreakVector_Y_1 = CallFunc_BreakVector_Y_1;
	Parms.CallFunc_BreakVector_Z_1 = CallFunc_BreakVector_Z_1;
	Parms.CallFunc_K2_SetWorldRotation_SweepHitResult = CallFunc_K2_SetWorldRotation_SweepHitResult;
	Parms.CallFunc_MakeRotator_ReturnValue_1 = CallFunc_MakeRotator_ReturnValue_1;
	Parms.CallFunc_VLerp_ReturnValue = CallFunc_VLerp_ReturnValue;
	Parms.CallFunc_ComposeRotators_ReturnValue_4 = CallFunc_ComposeRotators_ReturnValue_4;
	Parms.CallFunc_BreakVector_X_2 = CallFunc_BreakVector_X_2;
	Parms.CallFunc_BreakVector_Y_2 = CallFunc_BreakVector_Y_2;
	Parms.CallFunc_BreakVector_Z_2 = CallFunc_BreakVector_Z_2;
	Parms.CallFunc_K2_SetWorldRotation_SweepHitResult_1 = CallFunc_K2_SetWorldRotation_SweepHitResult_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_1 = CallFunc_Greater_FloatFloat_ReturnValue_1;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult = CallFunc_K2_SetWorldLocation_SweepHitResult;
	Parms.CallFunc_VLerp_ReturnValue_1 = CallFunc_VLerp_ReturnValue_1;
	Parms.CallFunc_BreakVector_X_3 = CallFunc_BreakVector_X_3;
	Parms.CallFunc_BreakVector_Y_3 = CallFunc_BreakVector_Y_3;
	Parms.CallFunc_BreakVector_Z_3 = CallFunc_BreakVector_Z_3;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult_1 = CallFunc_K2_SetWorldLocation_SweepHitResult_1;
	Parms.CallFunc_SetNewMovementState_ReturnValue_1 = CallFunc_SetNewMovementState_ReturnValue_1;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5;
	Parms.CallFunc_SetNewMovementState_ReturnValue_2 = CallFunc_SetNewMovementState_ReturnValue_2;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7;
	Parms.CallFunc_HideShowActiveItem_OutActionSuccessful = CallFunc_HideShowActiveItem_OutActionSuccessful;
	Parms.K2Node_DynamicCast_AsCGWeapon_1 = K2Node_DynamicCast_AsCGWeapon_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_1 = CallFunc_NotEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_8 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_8;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_SetNewMovementState_ReturnValue_3 = CallFunc_SetNewMovementState_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_UpgradeSystem_Base_00.ba_UpgradeSystem_Base_00_C.CraftingStart__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_UpgradeSystem_Base_00_C::CraftingStart__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_UpgradeSystem_Base_00_C", "CraftingStart__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_UpgradeSystem_Base_00.ba_UpgradeSystem_Base_00_C.CraftingEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_UpgradeSystem_Base_00_C::CraftingEnd__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_UpgradeSystem_Base_00_C", "CraftingEnd__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}



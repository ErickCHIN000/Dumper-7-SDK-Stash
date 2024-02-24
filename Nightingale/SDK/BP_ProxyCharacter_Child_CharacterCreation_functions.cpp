#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ProxyCharacter_Child_CharacterCreation.BP_ProxyCharacter_Child_CharacterCreation_C
// (Actor, Pawn)

class UClass* ABP_ProxyCharacter_Child_CharacterCreation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ProxyCharacter_Child_CharacterCreation_C");

	return Clss;
}


// BP_ProxyCharacter_Child_CharacterCreation_C BP_ProxyCharacter_Child_CharacterCreation.Default__BP_ProxyCharacter_Child_CharacterCreation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ProxyCharacter_Child_CharacterCreation_C* ABP_ProxyCharacter_Child_CharacterCreation_C::GetDefaultObj()
{
	static class ABP_ProxyCharacter_Child_CharacterCreation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ProxyCharacter_Child_CharacterCreation_C*>(ABP_ProxyCharacter_Child_CharacterCreation_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ProxyCharacter_Child_CharacterCreation.BP_ProxyCharacter_Child_CharacterCreation_C.Placeholder_PlayAnimation_EquipmentPreview
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ERealmDifficulty        Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue_1                               (NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue_2                               (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ProxyCharacter_Child_CharacterCreation_C::Placeholder_PlayAnimation_EquipmentPreview(enum class ERealmDifficulty Index, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue_2, bool CallFunc_NotEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProxyCharacter_Child_CharacterCreation_C", "Placeholder_PlayAnimation_EquipmentPreview");

	Params::ABP_ProxyCharacter_Child_CharacterCreation_C_Placeholder_PlayAnimation_EquipmentPreview_Params Parms{};

	Parms.Index = Index;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_K2_SetTimer_ReturnValue_1 = CallFunc_K2_SetTimer_ReturnValue_1;
	Parms.CallFunc_K2_SetTimer_ReturnValue_2 = CallFunc_K2_SetTimer_ReturnValue_2;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ProxyCharacter_Child_CharacterCreation.BP_ProxyCharacter_Child_CharacterCreation_C.SetLightingSceneMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_CC_CameraMode         SceneMode                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ProxyCharacter_Child_CharacterCreation_C::SetLightingSceneMode(enum class E_CC_CameraMode SceneMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProxyCharacter_Child_CharacterCreation_C", "SetLightingSceneMode");

	Params::ABP_ProxyCharacter_Child_CharacterCreation_C_SetLightingSceneMode_Params Parms{};

	Parms.SceneMode = SceneMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ProxyCharacter_Child_CharacterCreation.BP_ProxyCharacter_Child_CharacterCreation_C.SelectFamilyMember
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ProxyCharacter_Child_CharacterCreation_C::SelectFamilyMember(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProxyCharacter_Child_CharacterCreation_C", "SelectFamilyMember");

	Params::ABP_ProxyCharacter_Child_CharacterCreation_C_SelectFamilyMember_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ProxyCharacter_Child_CharacterCreation.BP_ProxyCharacter_Child_CharacterCreation_C.Play SoundSet Example
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EBodyType               SoundSet                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ProxyCharacter_Child_CharacterCreation_C::Play_SoundSet_Example(enum class EBodyType SoundSet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProxyCharacter_Child_CharacterCreation_C", "Play SoundSet Example");

	Params::ABP_ProxyCharacter_Child_CharacterCreation_C_Play_SoundSet_Example_Params Parms{};

	Parms.SoundSet = SoundSet;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ProxyCharacter_Child_CharacterCreation.BP_ProxyCharacter_Child_CharacterCreation_C.PlayAnimation_EquipPreview
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ERealmDifficulty        NewParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ProxyCharacter_Child_CharacterCreation_C::PlayAnimation_EquipPreview(enum class ERealmDifficulty NewParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProxyCharacter_Child_CharacterCreation_C", "PlayAnimation_EquipPreview");

	Params::ABP_ProxyCharacter_Child_CharacterCreation_C_PlayAnimation_EquipPreview_Params Parms{};

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ProxyCharacter_Child_CharacterCreation.BP_ProxyCharacter_Child_CharacterCreation_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_ProxyCharacter_Child_CharacterCreation_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProxyCharacter_Child_CharacterCreation_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ProxyCharacter_Child_CharacterCreation.BP_ProxyCharacter_Child_CharacterCreation_C.ResetEquipPreview
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ProxyCharacter_Child_CharacterCreation_C::ResetEquipPreview()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProxyCharacter_Child_CharacterCreation_C", "ResetEquipPreview");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ProxyCharacter_Child_CharacterCreation.BP_ProxyCharacter_Child_CharacterCreation_C.Reset_Interrupt
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ProxyCharacter_Child_CharacterCreation_C::Reset_Interrupt()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProxyCharacter_Child_CharacterCreation_C", "Reset_Interrupt");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ProxyCharacter_Child_CharacterCreation.BP_ProxyCharacter_Child_CharacterCreation_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ProxyCharacter_Child_CharacterCreation_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProxyCharacter_Child_CharacterCreation_C", "ReceiveTick");

	Params::ABP_ProxyCharacter_Child_CharacterCreation_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ProxyCharacter_Child_CharacterCreation.BP_ProxyCharacter_Child_CharacterCreation_C.ExecuteUbergraph_BP_ProxyCharacter_Child_CharacterCreation
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*               Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*               Temp_object_Variable_1                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*               Temp_object_Variable_2                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*               Temp_object_Variable_3                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class E_CC_CameraMode         Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_CC_CameraMode         K2Node_CustomEvent_SceneMode                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_index                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBodyType               K2Node_CustomEvent_SoundSet                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERealmDifficulty        K2Node_CustomEvent_NewParam                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBodyType               Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*               K2Node_Select_Default_1                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PostAkEventScoped_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CallDelegate_DeltaTime_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ProxyCharacter_Child_CharacterCreation_C::ExecuteUbergraph_BP_ProxyCharacter_Child_CharacterCreation(int32 EntryPoint, class UAkAudioEvent* Temp_object_Variable, class UAkAudioEvent* Temp_object_Variable_1, class UAkAudioEvent* Temp_object_Variable_2, class UAkAudioEvent* Temp_object_Variable_3, enum class E_CC_CameraMode Temp_byte_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, bool Temp_bool_Variable_5, bool Temp_bool_Variable_6, enum class E_CC_CameraMode K2Node_CustomEvent_SceneMode, bool K2Node_Select_Default, int32 K2Node_CustomEvent_index, enum class EBodyType K2Node_CustomEvent_SoundSet, enum class ERealmDifficulty K2Node_CustomEvent_NewParam, float K2Node_Event_DeltaSeconds, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, enum class EBodyType Temp_byte_Variable_1, class UAkAudioEvent* K2Node_Select_Default_1, bool CallFunc_PostAkEventScoped_ReturnValue, double K2Node_CallDelegate_DeltaTime_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProxyCharacter_Child_CharacterCreation_C", "ExecuteUbergraph_BP_ProxyCharacter_Child_CharacterCreation");

	Params::ABP_ProxyCharacter_Child_CharacterCreation_C_ExecuteUbergraph_BP_ProxyCharacter_Child_CharacterCreation_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.Temp_bool_Variable_5 = Temp_bool_Variable_5;
	Parms.Temp_bool_Variable_6 = Temp_bool_Variable_6;
	Parms.K2Node_CustomEvent_SceneMode = K2Node_CustomEvent_SceneMode;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_CustomEvent_index = K2Node_CustomEvent_index;
	Parms.K2Node_CustomEvent_SoundSet = K2Node_CustomEvent_SoundSet;
	Parms.K2Node_CustomEvent_NewParam = K2Node_CustomEvent_NewParam;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue = CallFunc_NearlyEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_PostAkEventScoped_ReturnValue = CallFunc_PostAkEventScoped_ReturnValue;
	Parms.K2Node_CallDelegate_DeltaTime_ImplicitCast = K2Node_CallDelegate_DeltaTime_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ProxyCharacter_Child_CharacterCreation.BP_ProxyCharacter_Child_CharacterCreation_C.OnInterruptDifficultyLoadoutChangeAnim__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ProxyCharacter_Child_CharacterCreation_C::OnInterruptDifficultyLoadoutChangeAnim__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProxyCharacter_Child_CharacterCreation_C", "OnInterruptDifficultyLoadoutChangeAnim__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ProxyCharacter_Child_CharacterCreation.BP_ProxyCharacter_Child_CharacterCreation_C.OnDifficultyLoadoutChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ERealmDifficulty        Difficulty                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ProxyCharacter_Child_CharacterCreation_C::OnDifficultyLoadoutChange__DelegateSignature(enum class ERealmDifficulty Difficulty)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProxyCharacter_Child_CharacterCreation_C", "OnDifficultyLoadoutChange__DelegateSignature");

	Params::ABP_ProxyCharacter_Child_CharacterCreation_C_OnDifficultyLoadoutChange__DelegateSignature_Params Parms{};

	Parms.Difficulty = Difficulty;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ProxyCharacter_Child_CharacterCreation.BP_ProxyCharacter_Child_CharacterCreation_C.OnCameraArmLengthChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             NewArmLength                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ProxyCharacter_Child_CharacterCreation_C::OnCameraArmLengthChange__DelegateSignature(double NewArmLength, double DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProxyCharacter_Child_CharacterCreation_C", "OnCameraArmLengthChange__DelegateSignature");

	Params::ABP_ProxyCharacter_Child_CharacterCreation_C_OnCameraArmLengthChange__DelegateSignature_Params Parms{};

	Parms.NewArmLength = NewArmLength;
	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ProxyCharacter_Child_CharacterCreation.BP_ProxyCharacter_Child_CharacterCreation_C.AncestrySelect__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ProxyCharacter_Child_CharacterCreation_C::AncestrySelect__DelegateSignature(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProxyCharacter_Child_CharacterCreation_C", "AncestrySelect__DelegateSignature");

	Params::ABP_ProxyCharacter_Child_CharacterCreation_C_AncestrySelect__DelegateSignature_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ProxyCharacter_Child_CharacterCreation.BP_ProxyCharacter_Child_CharacterCreation_C.SceneModeUpdate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_CC_CameraMode         SceneMode                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Zoom                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ProxyCharacter_Child_CharacterCreation_C::SceneModeUpdate__DelegateSignature(enum class E_CC_CameraMode SceneMode, double Zoom)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProxyCharacter_Child_CharacterCreation_C", "SceneModeUpdate__DelegateSignature");

	Params::ABP_ProxyCharacter_Child_CharacterCreation_C_SceneModeUpdate__DelegateSignature_Params Parms{};

	Parms.SceneMode = SceneMode;
	Parms.Zoom = Zoom;

	UObject::ProcessEvent(Func, &Parms);

}

}



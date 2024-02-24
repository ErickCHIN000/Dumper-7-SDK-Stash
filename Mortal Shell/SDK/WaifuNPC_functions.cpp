#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WaifuNPC.WaifuNPC_C
// (Actor)

class UClass* AWaifuNPC_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WaifuNPC_C");

	return Clss;
}


// WaifuNPC_C WaifuNPC.Default__WaifuNPC_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWaifuNPC_C* AWaifuNPC_C::GetDefaultObj()
{
	static class AWaifuNPC_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWaifuNPC_C*>(AWaifuNPC_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WaifuNPC.WaifuNPC_C.CreateKnifeTutorial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Temp_name_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULargeTutorial_C*            CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWaifuNPC_C::CreateKnifeTutorial(class FName Temp_name_Variable, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ULargeTutorial_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "CreateKnifeTutorial");

	Params::AWaifuNPC_C_CreateKnifeTutorial_Params Parms{};

	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WaifuNPC.WaifuNPC_C.ShowKnifeTutorial
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetCurrentHadernAbilityForSlot_AbilityID                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsTutorialUnlocked_Unlocked_                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ICharacterUtilInterface_C>K2Node_DynamicCast_AsCharacter_Util_Interface                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EArmorTypes             CallFunc_0_Base_GetCurrentArmor_CurrentArmorType                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void AWaifuNPC_C::ShowKnifeTutorial(class APlayerController* CallFunc_GetPlayerController_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class FName CallFunc_GetCurrentHadernAbilityForSlot_AbilityID, bool CallFunc_IsTutorialUnlocked_Unlocked_, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, TScriptInterface<class ICharacterUtilInterface_C> K2Node_DynamicCast_AsCharacter_Util_Interface, bool K2Node_DynamicCast_bSuccess_1, enum class EArmorTypes CallFunc_0_Base_GetCurrentArmor_CurrentArmorType, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "ShowKnifeTutorial");

	Params::AWaifuNPC_C_ShowKnifeTutorial_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface = K2Node_DynamicCast_AsGame_Play_PCInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetCurrentHadernAbilityForSlot_AbilityID = CallFunc_GetCurrentHadernAbilityForSlot_AbilityID;
	Parms.CallFunc_IsTutorialUnlocked_Unlocked_ = CallFunc_IsTutorialUnlocked_Unlocked_;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsCharacter_Util_Interface = K2Node_DynamicCast_AsCharacter_Util_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_0_Base_GetCurrentArmor_CurrentArmorType = CallFunc_0_Base_GetCurrentArmor_CurrentArmorType;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WaifuNPC.WaifuNPC_C.DualSense_Waifu_Awake
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_ControllerAudio_C*       CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void AWaifuNPC_C::DualSense_Waifu_Awake(bool CallFunc_IsValid_ReturnValue, class FName Temp_name_Variable, uint8 CallFunc_MakeLiteralByte_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_ControllerAudio_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "DualSense_Waifu_Awake");

	Params::AWaifuNPC_C_DualSense_Waifu_Awake_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_1 = CallFunc_MakeLiteralByte_ReturnValue_1;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WaifuNPC.WaifuNPC_C.GetCurrentSubLevel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentStreamingLevelName_ReturnValue                (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FName AWaifuNPC_C::GetCurrentSubLevel(const class FString& CallFunc_GetCurrentStreamingLevelName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "GetCurrentSubLevel");

	Params::AWaifuNPC_C_GetCurrentSubLevel_Params Parms{};

	Parms.CallFunc_GetCurrentStreamingLevelName_ReturnValue = CallFunc_GetCurrentStreamingLevelName_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WaifuNPC.WaifuNPC_C.RespawnEnemies
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class AAdvancedEnemySpawner_C>CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAdvancedEnemySpawner_C*     K2Node_DynamicCast_AsAdvanced_Enemy_Spawner                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AWaifuNPC_C::RespawnEnemies(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TSoftObjectPtr<class AAdvancedEnemySpawner_C> CallFunc_Array_Get_Item, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AAdvancedEnemySpawner_C* K2Node_DynamicCast_AsAdvanced_Enemy_Spawner, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "RespawnEnemies");

	Params::AWaifuNPC_C_RespawnEnemies_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsAdvanced_Enemy_Spawner = K2Node_DynamicCast_AsAdvanced_Enemy_Spawner;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WaifuNPC.WaifuNPC_C.DebugActivateWaifu
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetCurrentStreamingLevelName_ReturnValue                (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TransformToString_ReturnValue                      (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetCurrentPersistentLevelName_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)

void AWaifuNPC_C::DebugActivateWaifu(const class FString& CallFunc_Concat_StrStr_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const class FString& CallFunc_GetCurrentStreamingLevelName_ReturnValue, const class FString& CallFunc_Conv_TransformToString_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, class FName CallFunc_GetCurrentPersistentLevelName_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "DebugActivateWaifu");

	Params::AWaifuNPC_C_DebugActivateWaifu_Params Parms{};

	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_GetCurrentStreamingLevelName_ReturnValue = CallFunc_GetCurrentStreamingLevelName_ReturnValue;
	Parms.CallFunc_Conv_TransformToString_ReturnValue = CallFunc_Conv_TransformToString_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_GetCurrentPersistentLevelName_ReturnValue = CallFunc_GetCurrentPersistentLevelName_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue_1 = CallFunc_Conv_NameToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WaifuNPC.WaifuNPC_C.IsDarkForm
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

bool AWaifuNPC_C::IsDarkForm(class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "IsDarkForm");

	Params::AWaifuNPC_C_IsDarkForm_Params Parms{};

	Parms.CallFunc_GetCharacterAs0_Base_As0_Base = CallFunc_GetCharacterAs0_Base_As0_Base;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WaifuNPC.WaifuNPC_C.StopDance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCultistWaifu_Skeleton_AnimBlueprint_C*K2Node_DynamicCast_AsCultist_Waifu_Skeleton_Anim_Blueprint       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AWaifuNPC_C::StopDance(class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UCultistWaifu_Skeleton_AnimBlueprint_C* K2Node_DynamicCast_AsCultist_Waifu_Skeleton_Anim_Blueprint, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "StopDance");

	Params::AWaifuNPC_C_StopDance_Params Parms{};

	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsCultist_Waifu_Skeleton_Anim_Blueprint = K2Node_DynamicCast_AsCultist_Waifu_Skeleton_Anim_Blueprint;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WaifuNPC.WaifuNPC_C.StartDance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_LuteType           Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCultistWaifu_Skeleton_AnimBlueprint_C*K2Node_DynamicCast_AsCultist_Waifu_Skeleton_Anim_Blueprint       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayGM_C*               CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlayerAtMaxFamiliarity__ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void AWaifuNPC_C::StartDance(enum class Enum_LuteType Temp_byte_Variable, class FName Temp_name_Variable, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UCultistWaifu_Skeleton_AnimBlueprint_C* K2Node_DynamicCast_AsCultist_Waifu_Skeleton_Anim_Blueprint, bool K2Node_DynamicCast_bSuccess, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM, class FName K2Node_Select_Default, bool CallFunc_IsPlayerAtMaxFamiliarity__ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "StartDance");

	Params::AWaifuNPC_C_StartDance_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.Temp_name_Variable_2 = Temp_name_Variable_2;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsCultist_Waifu_Skeleton_Anim_Blueprint = K2Node_DynamicCast_AsCultist_Waifu_Skeleton_Anim_Blueprint;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM = CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsPlayerAtMaxFamiliarity__ReturnValue = CallFunc_IsPlayerAtMaxFamiliarity__ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WaifuNPC.WaifuNPC_C.BindLuteDance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class AGameplayGM_C*               CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWaifuNPC_C::BindLuteDance(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "BindLuteDance");

	Params::AWaifuNPC_C_BindLuteDance_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM = CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WaifuNPC.WaifuNPC_C.ConstructSoldItemAmountID
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ID                                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Set_Contains_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_SelectString_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWaifuNPC_C::ConstructSoldItemAmountID(class FName ItemId, class FName* ID, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_Set_Contains_ReturnValue, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_SelectString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, class FName CallFunc_Conv_StringToName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "ConstructSoldItemAmountID");

	Params::AWaifuNPC_C_ConstructSoldItemAmountID_Params Parms{};

	Parms.ItemId = ItemId;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Set_Contains_ReturnValue = CallFunc_Set_Contains_ReturnValue;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_SelectString_ReturnValue = CallFunc_SelectString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ID != nullptr)
		*ID = Parms.ID;

}


// Function WaifuNPC.WaifuNPC_C.GetNotSoldCount
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FMerchantItem               Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// int32                              NotSoldCount                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetItem_bFound                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryItem              CallFunc_GetItem_OutRow                                          (HasGetValueTypeHash)
// class FName                        CallFunc_ConstructSoldItemAmountID_ID                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNamedPCInt_Value                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWaifuNPC_C::GetNotSoldCount(struct FMerchantItem& Item, int32* NotSoldCount, bool CallFunc_GetItem_bFound, const struct FInventoryItem& CallFunc_GetItem_OutRow, class FName CallFunc_ConstructSoldItemAmountID_ID, int32 CallFunc_GetNamedPCInt_Value, int32 CallFunc_Subtract_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "GetNotSoldCount");

	Params::AWaifuNPC_C_GetNotSoldCount_Params Parms{};

	Parms.Item = Item;
	Parms.CallFunc_GetItem_bFound = CallFunc_GetItem_bFound;
	Parms.CallFunc_GetItem_OutRow = CallFunc_GetItem_OutRow;
	Parms.CallFunc_ConstructSoldItemAmountID_ID = CallFunc_ConstructSoldItemAmountID_ID;
	Parms.CallFunc_GetNamedPCInt_Value = CallFunc_GetNamedPCInt_Value;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (NotSoldCount != nullptr)
		*NotSoldCount = Parms.NotSoldCount;

}


// Function WaifuNPC.WaifuNPC_C.SetRespawnedAtWaifu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void AWaifuNPC_C::SetRespawnedAtWaifu(class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "SetRespawnedAtWaifu");

	Params::AWaifuNPC_C_SetRespawnedAtWaifu_Params Parms{};

	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WaifuNPC.WaifuNPC_C.RefillTokenStock
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                DisplayRequirements                                              (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<struct FMerchantItem>       NewStock                                                         (Edit, BlueprintVisible, HasGetValueTypeHash)

void AWaifuNPC_C::RefillTokenStock(const TArray<class FName>& DisplayRequirements, const TArray<struct FMerchantItem>& NewStock)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "RefillTokenStock");

	Params::AWaifuNPC_C_RefillTokenStock_Params Parms{};

	Parms.DisplayRequirements = DisplayRequirements;
	Parms.NewStock = NewStock;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WaifuNPC.WaifuNPC_C.GetIsActorUsable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsUsable                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsActorUsable_IsUsable                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void AWaifuNPC_C::GetIsActorUsable(bool* IsUsable, bool CallFunc_GetIsActorUsable_IsUsable, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "GetIsActorUsable");

	Params::AWaifuNPC_C_GetIsActorUsable_Params Parms{};

	Parms.CallFunc_GetIsActorUsable_IsUsable = CallFunc_GetIsActorUsable_IsUsable;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base = CallFunc_GetCharacterAs0_Base_As0_Base;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsUsable != nullptr)
		*IsUsable = Parms.IsUsable;

}


// Function WaifuNPC.WaifuNPC_C.ShellMaxedOutDialogue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAllShellMaxedOut_bAllMaxedOut                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EArmorTypes             CallFunc_GetShell_CurrentArmor                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsShellMaxedOut_bMaxedOut                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FDHDialogueLine>     K2Node_Select_Default                                            (ReferenceParm, HasGetValueTypeHash)

void AWaifuNPC_C::ShellMaxedOutDialogue(bool Temp_bool_Variable, bool CallFunc_IsAllShellMaxedOut_bAllMaxedOut, enum class EArmorTypes CallFunc_GetShell_CurrentArmor, bool CallFunc_IsShellMaxedOut_bMaxedOut, TArray<struct FDHDialogueLine>& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "ShellMaxedOutDialogue");

	Params::AWaifuNPC_C_ShellMaxedOutDialogue_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsAllShellMaxedOut_bAllMaxedOut = CallFunc_IsAllShellMaxedOut_bAllMaxedOut;
	Parms.CallFunc_GetShell_CurrentArmor = CallFunc_GetShell_CurrentArmor;
	Parms.CallFunc_IsShellMaxedOut_bMaxedOut = CallFunc_IsShellMaxedOut_bMaxedOut;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WaifuNPC.WaifuNPC_C.CreateKickTutorial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULargeTutorial_C*            CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWaifuNPC_C::CreateKickTutorial(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ULargeTutorial_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "CreateKickTutorial");

	Params::AWaifuNPC_C_CreateKickTutorial_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WaifuNPC.WaifuNPC_C.FadeInWhispers
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void AWaifuNPC_C::FadeInWhispers(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "FadeInWhispers");

	Params::AWaifuNPC_C_FadeInWhispers_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WaifuNPC.WaifuNPC_C.FadeOutWhispers
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void AWaifuNPC_C::FadeOutWhispers(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "FadeOutWhispers");

	Params::AWaifuNPC_C_FadeOutWhispers_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WaifuNPC.WaifuNPC_C.ShowKickTutorialIfUnlocked
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                Kick                                                             (Edit, BlueprintVisible, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetArbNameInChangedSetPure_bIsInSet                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsUpgradeUnlocked_bUnlocked                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUpgradeUnlocked_bUnlocked_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void AWaifuNPC_C::ShowKickTutorialIfUnlocked(const TArray<class FName>& Kick, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_GetArbNameInChangedSetPure_bIsInSet, int32 CallFunc_Add_IntInt_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsUpgradeUnlocked_bUnlocked, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, TArray<class FName>& K2Node_MakeArray_Array, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsUpgradeUnlocked_bUnlocked_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "ShowKickTutorialIfUnlocked");

	Params::AWaifuNPC_C_ShowKickTutorialIfUnlocked_Params Parms{};

	Parms.Kick = Kick;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetArbNameInChangedSetPure_bIsInSet = CallFunc_GetArbNameInChangedSetPure_bIsInSet;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsUpgradeUnlocked_bUnlocked = CallFunc_IsUpgradeUnlocked_bUnlocked;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_IsUpgradeUnlocked_bUnlocked_1 = CallFunc_IsUpgradeUnlocked_bUnlocked_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WaifuNPC.WaifuNPC_C.ResetWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AWaifuNPC_C::ResetWidget(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "ResetWidget");

	Params::AWaifuNPC_C_ResetWidget_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WaifuNPC.WaifuNPC_C.EarnEffigyOnShellNameGrasped
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EArmorTypes             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AddItemToPlayerInventory_Success                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_AddItemToPlayerInventory_InventorySlot                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWaifuNPC_C::EarnEffigyOnShellNameGrasped(enum class EArmorTypes Temp_byte_Variable, class FName Temp_name_Variable, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, class FName Temp_name_Variable_3, class FName Temp_name_Variable_4, class FName Temp_name_Variable_5, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, class FName K2Node_Select_Default, bool CallFunc_AddItemToPlayerInventory_Success, int32 CallFunc_AddItemToPlayerInventory_InventorySlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "EarnEffigyOnShellNameGrasped");

	Params::AWaifuNPC_C_EarnEffigyOnShellNameGrasped_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.Temp_name_Variable_2 = Temp_name_Variable_2;
	Parms.Temp_name_Variable_3 = Temp_name_Variable_3;
	Parms.Temp_name_Variable_4 = Temp_name_Variable_4;
	Parms.Temp_name_Variable_5 = Temp_name_Variable_5;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base = CallFunc_GetCharacterAs0_Base_As0_Base;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_AddItemToPlayerInventory_Success = CallFunc_AddItemToPlayerInventory_Success;
	Parms.CallFunc_AddItemToPlayerInventory_InventorySlot = CallFunc_AddItemToPlayerInventory_InventorySlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WaifuNPC.WaifuNPC_C.RegisterAsFastTravelPoint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWaifuNPC_C::RegisterAsFastTravelPoint(class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, int32 CallFunc_Array_AddUnique_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "RegisterAsFastTravelPoint");

	Params::AWaifuNPC_C_RegisterAsFastTravelPoint_Params Parms{};

	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WaifuNPC.WaifuNPC_C.DisableAreaCheckpointMasks
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Temp_name_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_1                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_Mask_C*>          CallFunc_GetAllActorsOfClassWithTag_OutActors                    (ReferenceParm, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Mask_C*                  K2Node_DynamicCast_AsBP_Mask                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void AWaifuNPC_C::DisableAreaCheckpointMasks(class FName Temp_name_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class FName Temp_name_Variable_1, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, TArray<class ABP_Mask_C*>& CallFunc_GetAllActorsOfClassWithTag_OutActors, class AActor* CallFunc_Array_Get_Item, class ABP_Mask_C* K2Node_DynamicCast_AsBP_Mask, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "DisableAreaCheckpointMasks");

	Params::AWaifuNPC_C_DisableAreaCheckpointMasks_Params Parms{};

	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_GetAllActorsOfClassWithTag_OutActors = CallFunc_GetAllActorsOfClassWithTag_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsBP_Mask = K2Node_DynamicCast_AsBP_Mask;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WaifuNPC.WaifuNPC_C.GetAcceptDialogue
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FDHDialogueLine>     NewParam                                                         (Parm, OutParm, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FDHDialogueLine>     K2Node_Select_Default                                            (ReferenceParm, HasGetValueTypeHash)

void AWaifuNPC_C::GetAcceptDialogue(TArray<struct FDHDialogueLine>* NewParam, int32 Temp_int_Variable, int32 CallFunc_RandomIntegerInRange_ReturnValue, TArray<struct FDHDialogueLine>& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "GetAcceptDialogue");

	Params::AWaifuNPC_C_GetAcceptDialogue_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = std::move(Parms.NewParam);

}


// Function WaifuNPC.WaifuNPC_C.GetDeclinedDialogue
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FDHDialogueLine>     NewParam                                                         (Parm, OutParm, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FDHDialogueLine>     K2Node_Select_Default                                            (ReferenceParm, HasGetValueTypeHash)

void AWaifuNPC_C::GetDeclinedDialogue(TArray<struct FDHDialogueLine>* NewParam, int32 Temp_int_Variable, int32 CallFunc_RandomIntegerInRange_ReturnValue, TArray<struct FDHDialogueLine>& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "GetDeclinedDialogue");

	Params::AWaifuNPC_C_GetDeclinedDialogue_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = std::move(Parms.NewParam);

}


// Function WaifuNPC.WaifuNPC_C.ShouldDoFirstRespawnDialogue?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsArbNameInSetPure__IsInSet_                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetNamedPCInt_Value                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNamedPCInt_Value_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_IntToBool_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Conv_IntToBool_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsArbNameInSetPure__IsInSet__1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)

bool AWaifuNPC_C::ShouldDoFirstRespawnDialogue_(bool CallFunc_IsArbNameInSetPure__IsInSet_, int32 CallFunc_GetNamedPCInt_Value, int32 CallFunc_GetNamedPCInt_Value_1, bool CallFunc_Conv_IntToBool_ReturnValue, bool CallFunc_Conv_IntToBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsArbNameInSetPure__IsInSet__1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "ShouldDoFirstRespawnDialogue?");

	Params::AWaifuNPC_C_ShouldDoFirstRespawnDialogue__Params Parms{};

	Parms.CallFunc_IsArbNameInSetPure__IsInSet_ = CallFunc_IsArbNameInSetPure__IsInSet_;
	Parms.CallFunc_GetNamedPCInt_Value = CallFunc_GetNamedPCInt_Value;
	Parms.CallFunc_GetNamedPCInt_Value_1 = CallFunc_GetNamedPCInt_Value_1;
	Parms.CallFunc_Conv_IntToBool_ReturnValue = CallFunc_Conv_IntToBool_ReturnValue;
	Parms.CallFunc_Conv_IntToBool_ReturnValue_1 = CallFunc_Conv_IntToBool_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsArbNameInSetPure__IsInSet__1 = CallFunc_IsArbNameInSetPure__IsInSet__1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WaifuNPC.WaifuNPC_C.ShouldDoLightShellFirstDialogue?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetNamedPCInt_Value                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_IntToBool_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

bool AWaifuNPC_C::ShouldDoLightShellFirstDialogue_(int32 CallFunc_GetNamedPCInt_Value, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, bool CallFunc_Conv_IntToBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "ShouldDoLightShellFirstDialogue?");

	Params::AWaifuNPC_C_ShouldDoLightShellFirstDialogue__Params Parms{};

	Parms.CallFunc_GetNamedPCInt_Value = CallFunc_GetNamedPCInt_Value;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base = CallFunc_GetCharacterAs0_Base_As0_Base;
	Parms.CallFunc_Conv_IntToBool_ReturnValue = CallFunc_Conv_IntToBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WaifuNPC.WaifuNPC_C.GetStock
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FMerchantItem>       NewParam                                                         (Parm, OutParm, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FMerchantItem>       K2Node_Select_Default                                            (ReferenceParm, HasGetValueTypeHash)

void AWaifuNPC_C::GetStock(TArray<struct FMerchantItem>* NewParam, bool Temp_bool_Variable, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, bool CallFunc_Greater_IntInt_ReturnValue, TArray<struct FMerchantItem>& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "GetStock");

	Params::AWaifuNPC_C_GetStock_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = std::move(Parms.NewParam);

}


// Function WaifuNPC.WaifuNPC_C.SpawnWaifuWakeSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewLocalVar_0                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWaifuNPC_C::SpawnWaifuWakeSound(float NewLocalVar_0, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "SpawnWaifuWakeSound");

	Params::AWaifuNPC_C_SpawnWaifuWakeSound_Params Parms{};

	Parms.NewLocalVar_0 = NewLocalVar_0;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue = CallFunc_SpawnSoundAttached_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WaifuNPC.WaifuNPC_C.ShouldDoNewGamePlusFirstDialogue?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsArbNameInSetPure__IsInSet_                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

bool AWaifuNPC_C::ShouldDoNewGamePlusFirstDialogue_(bool CallFunc_IsArbNameInSetPure__IsInSet_, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "ShouldDoNewGamePlusFirstDialogue?");

	Params::AWaifuNPC_C_ShouldDoNewGamePlusFirstDialogue__Params Parms{};

	Parms.CallFunc_IsArbNameInSetPure__IsInSet_ = CallFunc_IsArbNameInSetPure__IsInSet_;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WaifuNPC.WaifuNPC_C.OnActorUsed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OnActorUsed_Success                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void AWaifuNPC_C::OnActorUsed(class APlayerController* Controller, bool* Success, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, bool CallFunc_OnActorUsed_Success, bool CallFunc_EqualEqual_NameName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "OnActorUsed");

	Params::AWaifuNPC_C_OnActorUsed_Params Parms{};

	Parms.Controller = Controller;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_OnActorUsed_Success = CallFunc_OnActorUsed_Success;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function WaifuNPC.WaifuNPC_C.IsAllShellMaxedOut
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bAllMaxedOut                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsShellMaxedOut_bMaxedOut                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsShellMaxedOut_bMaxedOut_1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsShellMaxedOut_bMaxedOut_2                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsShellMaxedOut_bMaxedOut_3                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void AWaifuNPC_C::IsAllShellMaxedOut(bool* bAllMaxedOut, bool CallFunc_IsShellMaxedOut_bMaxedOut, bool CallFunc_IsShellMaxedOut_bMaxedOut_1, bool CallFunc_IsShellMaxedOut_bMaxedOut_2, bool CallFunc_IsShellMaxedOut_bMaxedOut_3, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "IsAllShellMaxedOut");

	Params::AWaifuNPC_C_IsAllShellMaxedOut_Params Parms{};

	Parms.CallFunc_IsShellMaxedOut_bMaxedOut = CallFunc_IsShellMaxedOut_bMaxedOut;
	Parms.CallFunc_IsShellMaxedOut_bMaxedOut_1 = CallFunc_IsShellMaxedOut_bMaxedOut_1;
	Parms.CallFunc_IsShellMaxedOut_bMaxedOut_2 = CallFunc_IsShellMaxedOut_bMaxedOut_2;
	Parms.CallFunc_IsShellMaxedOut_bMaxedOut_3 = CallFunc_IsShellMaxedOut_bMaxedOut_3;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (bAllMaxedOut != nullptr)
		*bAllMaxedOut = Parms.bAllMaxedOut;

}


// Function WaifuNPC.WaifuNPC_C.IsShellMaxedOut
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EArmorTypes             ShellType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bMaxedOut                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                CallFunc_GetUpgradeRowNamesFromShell_OutRowNames                 (ReferenceParm, HasGetValueTypeHash)
// bool                               CallFunc_IsShellNameKnown_bKnown                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUpgradeUnlocked_bUnlocked                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWaifuNPC_C::IsShellMaxedOut(enum class EArmorTypes ShellType, bool* bMaxedOut, TArray<class FName>& CallFunc_GetUpgradeRowNamesFromShell_OutRowNames, bool CallFunc_IsShellNameKnown_bKnown, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class FName CallFunc_Array_Get_Item, bool CallFunc_IsUpgradeUnlocked_bUnlocked, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "IsShellMaxedOut");

	Params::AWaifuNPC_C_IsShellMaxedOut_Params Parms{};

	Parms.ShellType = ShellType;
	Parms.CallFunc_GetUpgradeRowNamesFromShell_OutRowNames = CallFunc_GetUpgradeRowNamesFromShell_OutRowNames;
	Parms.CallFunc_IsShellNameKnown_bKnown = CallFunc_IsShellNameKnown_bKnown;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsUpgradeUnlocked_bUnlocked = CallFunc_IsUpgradeUnlocked_bUnlocked;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bMaxedOut != nullptr)
		*bMaxedOut = Parms.bMaxedOut;

}


// Function WaifuNPC.WaifuNPC_C.FadeOut__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AWaifuNPC_C::FadeOut__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "FadeOut__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WaifuNPC.WaifuNPC_C.FadeOut__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AWaifuNPC_C::FadeOut__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "FadeOut__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WaifuNPC.WaifuNPC_C.Timeline_1__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AWaifuNPC_C::Timeline_1__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "Timeline_1__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WaifuNPC.WaifuNPC_C.Timeline_1__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AWaifuNPC_C::Timeline_1__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "Timeline_1__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WaifuNPC.WaifuNPC_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AWaifuNPC_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "Timeline_0__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WaifuNPC.WaifuNPC_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AWaifuNPC_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "Timeline_0__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WaifuNPC.WaifuNPC_C.Timeline_2__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AWaifuNPC_C::Timeline_2__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "Timeline_2__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WaifuNPC.WaifuNPC_C.Timeline_2__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AWaifuNPC_C::Timeline_2__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "Timeline_2__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WaifuNPC.WaifuNPC_C.Timeline_4__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AWaifuNPC_C::Timeline_4__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "Timeline_4__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WaifuNPC.WaifuNPC_C.Timeline_4__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AWaifuNPC_C::Timeline_4__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "Timeline_4__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WaifuNPC.WaifuNPC_C.OnNotifyEnd_4239EAF44A2F0CC18D13B09DBD2719E3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWaifuNPC_C::OnNotifyEnd_4239EAF44A2F0CC18D13B09DBD2719E3(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "OnNotifyEnd_4239EAF44A2F0CC18D13B09DBD2719E3");

	Params::AWaifuNPC_C_OnNotifyEnd_4239EAF44A2F0CC18D13B09DBD2719E3_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WaifuNPC.WaifuNPC_C.OnNotifyBegin_4239EAF44A2F0CC18D13B09DBD2719E3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWaifuNPC_C::OnNotifyBegin_4239EAF44A2F0CC18D13B09DBD2719E3(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "OnNotifyBegin_4239EAF44A2F0CC18D13B09DBD2719E3");

	Params::AWaifuNPC_C_OnNotifyBegin_4239EAF44A2F0CC18D13B09DBD2719E3_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WaifuNPC.WaifuNPC_C.OnInterrupted_4239EAF44A2F0CC18D13B09DBD2719E3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWaifuNPC_C::OnInterrupted_4239EAF44A2F0CC18D13B09DBD2719E3(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "OnInterrupted_4239EAF44A2F0CC18D13B09DBD2719E3");

	Params::AWaifuNPC_C_OnInterrupted_4239EAF44A2F0CC18D13B09DBD2719E3_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WaifuNPC.WaifuNPC_C.OnBlendOut_4239EAF44A2F0CC18D13B09DBD2719E3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWaifuNPC_C::OnBlendOut_4239EAF44A2F0CC18D13B09DBD2719E3(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "OnBlendOut_4239EAF44A2F0CC18D13B09DBD2719E3");

	Params::AWaifuNPC_C_OnBlendOut_4239EAF44A2F0CC18D13B09DBD2719E3_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WaifuNPC.WaifuNPC_C.OnCompleted_4239EAF44A2F0CC18D13B09DBD2719E3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWaifuNPC_C::OnCompleted_4239EAF44A2F0CC18D13B09DBD2719E3(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "OnCompleted_4239EAF44A2F0CC18D13B09DBD2719E3");

	Params::AWaifuNPC_C_OnCompleted_4239EAF44A2F0CC18D13B09DBD2719E3_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WaifuNPC.WaifuNPC_C.OnNotifyEnd_62800982481FC4156FC0168F8ABE858B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWaifuNPC_C::OnNotifyEnd_62800982481FC4156FC0168F8ABE858B(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "OnNotifyEnd_62800982481FC4156FC0168F8ABE858B");

	Params::AWaifuNPC_C_OnNotifyEnd_62800982481FC4156FC0168F8ABE858B_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WaifuNPC.WaifuNPC_C.OnNotifyBegin_62800982481FC4156FC0168F8ABE858B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWaifuNPC_C::OnNotifyBegin_62800982481FC4156FC0168F8ABE858B(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "OnNotifyBegin_62800982481FC4156FC0168F8ABE858B");

	Params::AWaifuNPC_C_OnNotifyBegin_62800982481FC4156FC0168F8ABE858B_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WaifuNPC.WaifuNPC_C.OnInterrupted_62800982481FC4156FC0168F8ABE858B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWaifuNPC_C::OnInterrupted_62800982481FC4156FC0168F8ABE858B(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "OnInterrupted_62800982481FC4156FC0168F8ABE858B");

	Params::AWaifuNPC_C_OnInterrupted_62800982481FC4156FC0168F8ABE858B_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WaifuNPC.WaifuNPC_C.OnBlendOut_62800982481FC4156FC0168F8ABE858B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWaifuNPC_C::OnBlendOut_62800982481FC4156FC0168F8ABE858B(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "OnBlendOut_62800982481FC4156FC0168F8ABE858B");

	Params::AWaifuNPC_C_OnBlendOut_62800982481FC4156FC0168F8ABE858B_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WaifuNPC.WaifuNPC_C.OnCompleted_62800982481FC4156FC0168F8ABE858B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWaifuNPC_C::OnCompleted_62800982481FC4156FC0168F8ABE858B(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "OnCompleted_62800982481FC4156FC0168F8ABE858B");

	Params::AWaifuNPC_C_OnCompleted_62800982481FC4156FC0168F8ABE858B_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WaifuNPC.WaifuNPC_C.OnNotifyEnd_CB958447407A282239B59599E0DA3935
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWaifuNPC_C::OnNotifyEnd_CB958447407A282239B59599E0DA3935(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "OnNotifyEnd_CB958447407A282239B59599E0DA3935");

	Params::AWaifuNPC_C_OnNotifyEnd_CB958447407A282239B59599E0DA3935_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WaifuNPC.WaifuNPC_C.OnNotifyBegin_CB958447407A282239B59599E0DA3935
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWaifuNPC_C::OnNotifyBegin_CB958447407A282239B59599E0DA3935(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "OnNotifyBegin_CB958447407A282239B59599E0DA3935");

	Params::AWaifuNPC_C_OnNotifyBegin_CB958447407A282239B59599E0DA3935_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WaifuNPC.WaifuNPC_C.OnInterrupted_CB958447407A282239B59599E0DA3935
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWaifuNPC_C::OnInterrupted_CB958447407A282239B59599E0DA3935(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "OnInterrupted_CB958447407A282239B59599E0DA3935");

	Params::AWaifuNPC_C_OnInterrupted_CB958447407A282239B59599E0DA3935_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WaifuNPC.WaifuNPC_C.OnBlendOut_CB958447407A282239B59599E0DA3935
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWaifuNPC_C::OnBlendOut_CB958447407A282239B59599E0DA3935(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "OnBlendOut_CB958447407A282239B59599E0DA3935");

	Params::AWaifuNPC_C_OnBlendOut_CB958447407A282239B59599E0DA3935_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WaifuNPC.WaifuNPC_C.OnCompleted_CB958447407A282239B59599E0DA3935
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWaifuNPC_C::OnCompleted_CB958447407A282239B59599E0DA3935(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "OnCompleted_CB958447407A282239B59599E0DA3935");

	Params::AWaifuNPC_C_OnCompleted_CB958447407A282239B59599E0DA3935_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WaifuNPC.WaifuNPC_C.OnNotifyEnd_49B1E03540C4A207F232EAB89A45BE69
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWaifuNPC_C::OnNotifyEnd_49B1E03540C4A207F232EAB89A45BE69(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "OnNotifyEnd_49B1E03540C4A207F232EAB89A45BE69");

	Params::AWaifuNPC_C_OnNotifyEnd_49B1E03540C4A207F232EAB89A45BE69_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WaifuNPC.WaifuNPC_C.OnNotifyBegin_49B1E03540C4A207F232EAB89A45BE69
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWaifuNPC_C::OnNotifyBegin_49B1E03540C4A207F232EAB89A45BE69(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "OnNotifyBegin_49B1E03540C4A207F232EAB89A45BE69");

	Params::AWaifuNPC_C_OnNotifyBegin_49B1E03540C4A207F232EAB89A45BE69_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WaifuNPC.WaifuNPC_C.OnInterrupted_49B1E03540C4A207F232EAB89A45BE69
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWaifuNPC_C::OnInterrupted_49B1E03540C4A207F232EAB89A45BE69(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "OnInterrupted_49B1E03540C4A207F232EAB89A45BE69");

	Params::AWaifuNPC_C_OnInterrupted_49B1E03540C4A207F232EAB89A45BE69_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WaifuNPC.WaifuNPC_C.OnBlendOut_49B1E03540C4A207F232EAB89A45BE69
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWaifuNPC_C::OnBlendOut_49B1E03540C4A207F232EAB89A45BE69(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "OnBlendOut_49B1E03540C4A207F232EAB89A45BE69");

	Params::AWaifuNPC_C_OnBlendOut_49B1E03540C4A207F232EAB89A45BE69_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WaifuNPC.WaifuNPC_C.OnCompleted_49B1E03540C4A207F232EAB89A45BE69
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWaifuNPC_C::OnCompleted_49B1E03540C4A207F232EAB89A45BE69(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "OnCompleted_49B1E03540C4A207F232EAB89A45BE69");

	Params::AWaifuNPC_C_OnCompleted_49B1E03540C4A207F232EAB89A45BE69_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WaifuNPC.WaifuNPC_C.OnNotifyEnd_259DDF6C41CC3FB182FDA08176257DA5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWaifuNPC_C::OnNotifyEnd_259DDF6C41CC3FB182FDA08176257DA5(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "OnNotifyEnd_259DDF6C41CC3FB182FDA08176257DA5");

	Params::AWaifuNPC_C_OnNotifyEnd_259DDF6C41CC3FB182FDA08176257DA5_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WaifuNPC.WaifuNPC_C.OnNotifyBegin_259DDF6C41CC3FB182FDA08176257DA5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWaifuNPC_C::OnNotifyBegin_259DDF6C41CC3FB182FDA08176257DA5(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "OnNotifyBegin_259DDF6C41CC3FB182FDA08176257DA5");

	Params::AWaifuNPC_C_OnNotifyBegin_259DDF6C41CC3FB182FDA08176257DA5_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WaifuNPC.WaifuNPC_C.OnInterrupted_259DDF6C41CC3FB182FDA08176257DA5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWaifuNPC_C::OnInterrupted_259DDF6C41CC3FB182FDA08176257DA5(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "OnInterrupted_259DDF6C41CC3FB182FDA08176257DA5");

	Params::AWaifuNPC_C_OnInterrupted_259DDF6C41CC3FB182FDA08176257DA5_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WaifuNPC.WaifuNPC_C.OnBlendOut_259DDF6C41CC3FB182FDA08176257DA5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWaifuNPC_C::OnBlendOut_259DDF6C41CC3FB182FDA08176257DA5(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "OnBlendOut_259DDF6C41CC3FB182FDA08176257DA5");

	Params::AWaifuNPC_C_OnBlendOut_259DDF6C41CC3FB182FDA08176257DA5_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WaifuNPC.WaifuNPC_C.OnCompleted_259DDF6C41CC3FB182FDA08176257DA5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWaifuNPC_C::OnCompleted_259DDF6C41CC3FB182FDA08176257DA5(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "OnCompleted_259DDF6C41CC3FB182FDA08176257DA5");

	Params::AWaifuNPC_C_OnCompleted_259DDF6C41CC3FB182FDA08176257DA5_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WaifuNPC.WaifuNPC_C.OnWidgetHidden
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AWaifuNPC_C::OnWidgetHidden()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "OnWidgetHidden");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WaifuNPC.WaifuNPC_C.ReceiveAnyDamage
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageType*                 DamageType                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 InstigatedBy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWaifuNPC_C::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "ReceiveAnyDamage");

	Params::AWaifuNPC_C_ReceiveAnyDamage_Params Parms{};

	Parms.Damage = Damage;
	Parms.DamageType = DamageType;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WaifuNPC.WaifuNPC_C.FadeIn
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AWaifuNPC_C::FadeIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "FadeIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WaifuNPC.WaifuNPC_C.TradeFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bBoughtSomething                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AWaifuNPC_C::TradeFinished(bool bBoughtSomething)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "TradeFinished");

	Params::AWaifuNPC_C_TradeFinished_Params Parms{};

	Parms.bBoughtSomething = bBoughtSomething;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WaifuNPC.WaifuNPC_C.OfferTradeDialogue
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AWaifuNPC_C::OfferTradeDialogue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "OfferTradeDialogue");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WaifuNPC.WaifuNPC_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AWaifuNPC_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WaifuNPC.WaifuNPC_C.RegisterAsCheckpoint
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AWaifuNPC_C::RegisterAsCheckpoint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "RegisterAsCheckpoint");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WaifuNPC.WaifuNPC_C.RegisterAsCheckpointAfterFastTravel
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AWaifuNPC_C::RegisterAsCheckpointAfterFastTravel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "RegisterAsCheckpointAfterFastTravel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WaifuNPC.WaifuNPC_C.OnCharEnteredArea
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AWaifuNPC_C::OnCharEnteredArea()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "OnCharEnteredArea");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WaifuNPC.WaifuNPC_C.PlayWakeUpAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AWaifuNPC_C::PlayWakeUpAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "PlayWakeUpAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WaifuNPC.WaifuNPC_C.PlayWaifuSleepAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AWaifuNPC_C::PlayWaifuSleepAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "PlayWaifuSleepAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WaifuNPC.WaifuNPC_C.ContinueDialog
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AWaifuNPC_C::ContinueDialog()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "ContinueDialog");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WaifuNPC.WaifuNPC_C.OnOptionSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bYes                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AWaifuNPC_C::OnOptionSelected(bool bYes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "OnOptionSelected");

	Params::AWaifuNPC_C_OnOptionSelected_Params Parms{};

	Parms.bYes = bYes;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WaifuNPC.WaifuNPC_C.SetOpacity
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AWaifuNPC_C::SetOpacity()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "SetOpacity");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WaifuNPC.WaifuNPC_C.OnCheckpointChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AWaifuNPC_C::OnCheckpointChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "OnCheckpointChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WaifuNPC.WaifuNPC_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWaifuNPC_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "ReceiveEndPlay");

	Params::AWaifuNPC_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WaifuNPC.WaifuNPC_C.CheckForPlayerDeath
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AWaifuNPC_C::CheckForPlayerDeath()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "CheckForPlayerDeath");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WaifuNPC.WaifuNPC_C.SavePlayerDeathState
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AWaifuNPC_C::SavePlayerDeathState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "SavePlayerDeathState");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WaifuNPC.WaifuNPC_C.ForceStartDialogue
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AWaifuNPC_C::ForceStartDialogue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "ForceStartDialogue");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WaifuNPC.WaifuNPC_C.CheckForFirstRespawnDialogue
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AWaifuNPC_C::CheckForFirstRespawnDialogue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "CheckForFirstRespawnDialogue");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WaifuNPC.WaifuNPC_C.BindPlayerDeathEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AWaifuNPC_C::BindPlayerDeathEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "BindPlayerDeathEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WaifuNPC.WaifuNPC_C.OnFirstWaifuTalk
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AWaifuNPC_C::OnFirstWaifuTalk()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "OnFirstWaifuTalk");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WaifuNPC.WaifuNPC_C.OnDialogueProceeded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewEntryIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWaifuNPC_C::OnDialogueProceeded(int32 NewEntryIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "OnDialogueProceeded");

	Params::AWaifuNPC_C_OnDialogueProceeded_Params Parms{};

	Parms.NewEntryIndex = NewEntryIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WaifuNPC.WaifuNPC_C.StartAsleepSound
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AWaifuNPC_C::StartAsleepSound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "StartAsleepSound");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WaifuNPC.WaifuNPC_C.GiveEffigyOnNameUnlock
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AWaifuNPC_C::GiveEffigyOnNameUnlock()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "GiveEffigyOnNameUnlock");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WaifuNPC.WaifuNPC_C.ShowKickTutorialDelayed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AWaifuNPC_C::ShowKickTutorialDelayed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "ShowKickTutorialDelayed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WaifuNPC.WaifuNPC_C.BndEvt__AudioOcclusionVolume_K2Node_ComponentBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                      OverlappedActor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWaifuNPC_C::BndEvt__AudioOcclusionVolume_K2Node_ComponentBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "BndEvt__AudioOcclusionVolume_K2Node_ComponentBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature");

	Params::AWaifuNPC_C_BndEvt__AudioOcclusionVolume_K2Node_ComponentBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature_Params Parms{};

	Parms.OverlappedActor = OverlappedActor;
	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WaifuNPC.WaifuNPC_C.BndEvt__AudioOcclusionVolume_K2Node_ComponentBoundEvent_1_ActorEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                      OverlappedActor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWaifuNPC_C::BndEvt__AudioOcclusionVolume_K2Node_ComponentBoundEvent_1_ActorEndOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "BndEvt__AudioOcclusionVolume_K2Node_ComponentBoundEvent_1_ActorEndOverlapSignature__DelegateSignature");

	Params::AWaifuNPC_C_BndEvt__AudioOcclusionVolume_K2Node_ComponentBoundEvent_1_ActorEndOverlapSignature__DelegateSignature_Params Parms{};

	Parms.OverlappedActor = OverlappedActor;
	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WaifuNPC.WaifuNPC_C.SetAmbientAudioOcclusion
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              LP_Frequency                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWaifuNPC_C::SetAmbientAudioOcclusion(float LP_Frequency)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "SetAmbientAudioOcclusion");

	Params::AWaifuNPC_C_SetAmbientAudioOcclusion_Params Parms{};

	Parms.LP_Frequency = LP_Frequency;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WaifuNPC.WaifuNPC_C.OpenTradeMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AWaifuNPC_C::OpenTradeMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "OpenTradeMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WaifuNPC.WaifuNPC_C.StopAsleepSound
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AWaifuNPC_C::StopAsleepSound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "StopAsleepSound");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WaifuNPC.WaifuNPC_C.OnTradeFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AWaifuNPC_C::OnTradeFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "OnTradeFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WaifuNPC.WaifuNPC_C.OnItemBought
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ItemIndex                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWaifuNPC_C::OnItemBought(int32 ItemIndex, int32 Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "OnItemBought");

	Params::AWaifuNPC_C_OnItemBought_Params Parms{};

	Parms.ItemIndex = ItemIndex;
	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WaifuNPC.WaifuNPC_C.ResetIsUsable
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AWaifuNPC_C::ResetIsUsable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "ResetIsUsable");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WaifuNPC.WaifuNPC_C.GiveEffigyOnNameUnlock_Unbind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AWaifuNPC_C::GiveEffigyOnNameUnlock_Unbind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "GiveEffigyOnNameUnlock_Unbind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WaifuNPC.WaifuNPC_C.StartLuteDance
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AWaifuNPC_C::StartLuteDance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "StartLuteDance");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WaifuNPC.WaifuNPC_C.EndLuteDance
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AWaifuNPC_C::EndLuteDance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "EndLuteDance");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WaifuNPC.WaifuNPC_C.RegisterAsCheckpoint_Direct
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AWaifuNPC_C::RegisterAsCheckpoint_Direct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "RegisterAsCheckpoint_Direct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WaifuNPC.WaifuNPC_C.RespawnEnemiesOnFastTravel
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AWaifuNPC_C::RespawnEnemiesOnFastTravel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "RespawnEnemiesOnFastTravel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WaifuNPC.WaifuNPC_C.OnLoadingScreenRemoved
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AWaifuNPC_C::OnLoadingScreenRemoved()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "OnLoadingScreenRemoved");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WaifuNPC.WaifuNPC_C.ShowKnifeTutorialDelayed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AWaifuNPC_C::ShowKnifeTutorialDelayed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "ShowKnifeTutorialDelayed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WaifuNPC.WaifuNPC_C.CloseUpgradeMenu_OpenTrade
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               BoughtSomething                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AWaifuNPC_C::CloseUpgradeMenu_OpenTrade(bool BoughtSomething)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "CloseUpgradeMenu_OpenTrade");

	Params::AWaifuNPC_C_CloseUpgradeMenu_OpenTrade_Params Parms{};

	Parms.BoughtSomething = BoughtSomething;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WaifuNPC.WaifuNPC_C.ExecuteUbergraph_WaifuNPC
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_17                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_16                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_15                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable_1                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              CallFunc_GetOverlappingActors_OverlappingActors                  (ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInViewport_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_14                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_13                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_12                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_11                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_10                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_12                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_9                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_13                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_8                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_14                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_7                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_15                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_6                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_16                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_17                          (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_18                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_19                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_20                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_21                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_22                          (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_Damage                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageType*                 K2Node_Event_DamageType                                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_Event_InstigatedBy                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_DamageCauser                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMyNameInChangedSet_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsShellMaxedOut_bMaxedOut                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAllShellMaxedOut_bAllMaxedOut                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_bBoughtSomething                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayGM_C*               K2Node_DynamicCast_AsGameplay_GM                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetCurrentPersistentLevelName_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShouldDoNewGamePlusFirstDialogue__ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayGM_C*               CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameModeUtilInterface_C>K2Node_DynamicCast_AsGame_Mode_Util_Interface                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldDoNewGamePlusFirstDialogue__ReturnValue_1         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_23                          (ZeroConstructor, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_3               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_4               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EArmorTypes             CallFunc_GetShell_CurrentArmor                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsShellMaxedOut_bMaxedOut_1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bYes                                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_5               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_6               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShouldDoLightShellFirstDialogue__ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsArbNameInSetPure__IsInSet_                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_7               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayGM_C*               CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameModeUtilInterface_C>CallFunc_GameModeUtils_SaveMapState_self_CastInput               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShouldDoFirstRespawnDialogue__ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShouldDoFirstRespawnDialogue__ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_8               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OnActorUsed_Success                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AddItemToPlayerInventory_Success                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_AddItemToPlayerInventory_InventorySlot                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayGM_C*               CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayGM_C*               CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_3                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameModeUtilInterface_C>CallFunc_GameModeUtils_SaveMapState_self_CastInput_1             (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameModeUtilInterface_C>CallFunc_GameModeUtils_SaveMapState_self_CastInput_2             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABarbarous_C*                CallFunc_GetCharacterAsBarbarous_AsBarbarous                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDHDialogueLine             CallFunc_Array_Get_Item                                          (None)
// struct FDarkFatherChantSubtitle    K2Node_MakeStruct_DarkFatherChantSubtitle                        (HasGetValueTypeHash)
// TArray<struct FDarkFatherChantSubtitle>K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm, HasGetValueTypeHash)
// bool                               CallFunc_IsArbNameInSetPure__IsInSet__1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_NewEntryIndex                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetNamedPCInt_Value                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_IntToBool_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_9               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_18                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABarbarous_C*                CallFunc_GetCharacterAsBarbarous_AsBarbarous_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FDHDialogueLine>     CallFunc_GetDeclinedDialogue_NewParam                            (ReferenceParm, HasGetValueTypeHash)
// TArray<struct FDHDialogueLine>     CallFunc_GetAcceptDialogue_NewParam                              (ReferenceParm, HasGetValueTypeHash)
// class ABarbarous_C*                CallFunc_GetCharacterAsBarbarous_AsBarbarous_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayGM_C*               CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_4                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AAdvancedEnemySpawner_C*>CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAdvancedEnemySpawner_C*     K2Node_DynamicCast_AsAdvanced_Enemy_Spawner                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AEnemyCharacter_C*>   CallFunc_GetAllActorsOfClass_OutActors_1                         (ReferenceParm, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_24                          (ZeroConstructor, NoDestructor)
// class AActor*                      K2Node_ComponentBoundEvent_OverlappedActor_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OtherActor_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OverlappedActor                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OtherActor                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                K2Node_DynamicCast_As0_Base                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AZero_Base_C*                K2Node_DynamicCast_As0_Base_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_LP_Frequency                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_19                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_25                          (ZeroConstructor, NoDestructor)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_10              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_11              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_26                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABarbarous_C*                CallFunc_GetCharacterAsBarbarous_AsBarbarous_3                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_ItemIndex                                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_Amount                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEnemyCharacter_C*           CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ActorHasTag_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetItemFromIndex_bFound                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryItem              CallFunc_GetItemFromIndex_Item                                   (HasGetValueTypeHash)
// class FName                        CallFunc_ConstructSoldItemAmountID_ID                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNamedPCInt_Value_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_20                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_27                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_21                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_12              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInViewport_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_28                          (ZeroConstructor, NoDestructor)
// class ABarbarous_C*                CallFunc_GetCharacterAsBarbarous_AsBarbarous_4                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_13              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNamedPCInt_Value_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_IntToBool_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAllShellMaxedOut_bAllMaxedOut_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FDHDialogueLine>     K2Node_Select_Default                                            (ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_22                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDarkForm_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDarkForm_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_29                          (ZeroConstructor, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_14              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_15              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_16              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_23                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_30                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_24                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_31                          (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue_1                               (NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetCurrentSubLevel_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLoadingScreenActive_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_BoughtSomething                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// class ABarbarous_C*                CallFunc_GetCharacterAsBarbarous_AsBarbarous_5                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_1                                             (None)
// bool                               Temp_bool_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default_1                                          (None)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue_1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FDHDialogueLine>     K2Node_Select_Default_2                                          (ReferenceParm, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_10                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_11                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_12                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue_1                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue_2                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue_3                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue_4                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue_5                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_32                          (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FDHDialogueLine>     K2Node_Select_Default_3                                          (ReferenceParm, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_13                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_9                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FDHDialogueLine>     K2Node_Select_Default_4                                          (ReferenceParm, HasGetValueTypeHash)
// TArray<struct FDHDialogueLine>     K2Node_Select_Default_5                                          (ReferenceParm, HasGetValueTypeHash)
// TArray<struct FDHDialogueLine>     K2Node_Select_Default_6                                          (ReferenceParm, HasGetValueTypeHash)
// TArray<struct FDHDialogueLine>     K2Node_Select_Default_7                                          (ReferenceParm, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_14                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_4           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_15                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue_6                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue_2                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue_7                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue_8                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue_1                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue_9                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDarkForm_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetFoundlingMenuEnabled_Enabled                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsArbNameInSetPure__IsInSet__2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShouldDoFirstRespawnDialogue__ReturnValue_2             (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FDHDialogueLine>     K2Node_Select_Default_8                                          (ReferenceParm, HasGetValueTypeHash)
// TArray<struct FDHDialogueLine>     K2Node_Select_Default_9                                          (ReferenceParm, HasGetValueTypeHash)

void AWaifuNPC_C::ExecuteUbergraph_WaifuNPC(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_17, class FName K2Node_CustomEvent_NotifyName_16, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_15, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName Temp_name_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName Temp_name_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool CallFunc_IsValid_ReturnValue, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsInViewport_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class FName K2Node_CustomEvent_NotifyName_14, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class FName K2Node_CustomEvent_NotifyName_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class FName K2Node_CustomEvent_NotifyName_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class FName K2Node_CustomEvent_NotifyName_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class FName K2Node_CustomEvent_NotifyName_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, class FName Temp_name_Variable_2, bool Temp_bool_Variable_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, bool CallFunc_IsValid_ReturnValue_2, class FName K2Node_CustomEvent_NotifyName_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, class FName K2Node_CustomEvent_NotifyName_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, class FName K2Node_CustomEvent_NotifyName_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, class FName K2Node_CustomEvent_NotifyName_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_16, class FName K2Node_CustomEvent_NotifyName_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_17, class FName Temp_name_Variable_3, bool CallFunc_IsValid_ReturnValue_3, class FName K2Node_CustomEvent_NotifyName_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_18, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_19, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_20, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_21, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_22, class FName Temp_name_Variable_4, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, float K2Node_Event_Damage, class UDamageType* K2Node_Event_DamageType, class AController* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, bool CallFunc_IsMyNameInChangedSet_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, bool CallFunc_IsShellMaxedOut_bMaxedOut, bool CallFunc_IsAllShellMaxedOut_bAllMaxedOut, bool K2Node_CustomEvent_bBoughtSomething, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class AGameplayGM_C* K2Node_DynamicCast_AsGameplay_GM, bool K2Node_DynamicCast_bSuccess, float CallFunc_Conv_IntToFloat_ReturnValue, class FName CallFunc_GetCurrentPersistentLevelName_ReturnValue, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, bool CallFunc_ShouldDoNewGamePlusFirstDialogue__ReturnValue, bool Temp_bool_Variable_5, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM, TScriptInterface<class IGameModeUtilInterface_C> K2Node_DynamicCast_AsGame_Mode_Util_Interface, bool K2Node_DynamicCast_bSuccess_1, class FName CallFunc_MakeLiteralName_ReturnValue, bool CallFunc_ShouldDoNewGamePlusFirstDialogue__ReturnValue_1, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_23, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_3, bool CallFunc_EqualEqual_NameName_ReturnValue, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_4, enum class EArmorTypes CallFunc_GetShell_CurrentArmor, bool CallFunc_IsShellMaxedOut_bMaxedOut_1, bool K2Node_Event_bYes, int32 Temp_int_Array_Index_Variable, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_5, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_EqualEqual_NameName_ReturnValue_1, enum class EEndPlayReason K2Node_Event_EndPlayReason, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_6, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_ShouldDoLightShellFirstDialogue__ReturnValue, bool CallFunc_IsArbNameInSetPure__IsInSet_, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_7, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_1, TScriptInterface<class IGameModeUtilInterface_C> CallFunc_GameModeUtils_SaveMapState_self_CastInput, bool CallFunc_ShouldDoFirstRespawnDialogue__ReturnValue, bool CallFunc_ShouldDoFirstRespawnDialogue__ReturnValue_1, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_8, bool CallFunc_OnActorUsed_Success, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_1, bool CallFunc_AddItemToPlayerInventory_Success, int32 CallFunc_AddItemToPlayerInventory_InventorySlot, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_2, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_3, TScriptInterface<class IGameModeUtilInterface_C> CallFunc_GameModeUtils_SaveMapState_self_CastInput_1, TScriptInterface<class IGameModeUtilInterface_C> CallFunc_GameModeUtils_SaveMapState_self_CastInput_2, class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous, const struct FDHDialogueLine& CallFunc_Array_Get_Item, const struct FDarkFatherChantSubtitle& K2Node_MakeStruct_DarkFatherChantSubtitle, TArray<struct FDarkFatherChantSubtitle>& K2Node_MakeArray_Array, bool CallFunc_IsArbNameInSetPure__IsInSet__1, int32 K2Node_CustomEvent_NewEntryIndex, bool CallFunc_EqualEqual_IntInt_ReturnValue, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_GetNamedPCInt_Value, bool CallFunc_Conv_IntToBool_ReturnValue, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_9, class FName K2Node_CustomEvent_NotifyName_18, class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous_1, TArray<struct FDHDialogueLine>& CallFunc_GetDeclinedDialogue_NewParam, TArray<struct FDHDialogueLine>& CallFunc_GetAcceptDialogue_NewParam, class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous_2, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_4, int32 Temp_int_Loop_Counter_Variable, TArray<class AAdvancedEnemySpawner_C*>& CallFunc_GetAllActorsOfClass_OutActors, class AActor* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, class AAdvancedEnemySpawner_C* K2Node_DynamicCast_AsAdvanced_Enemy_Spawner, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AEnemyCharacter_C*>& CallFunc_GetAllActorsOfClass_OutActors_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_24, class AActor* K2Node_ComponentBoundEvent_OverlappedActor_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class AActor* K2Node_ComponentBoundEvent_OverlappedActor, class AActor* K2Node_ComponentBoundEvent_OtherActor, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess_3, class AZero_Base_C* K2Node_DynamicCast_As0_Base_1, bool K2Node_DynamicCast_bSuccess_4, float K2Node_CustomEvent_LP_Frequency, class FName K2Node_CustomEvent_NotifyName_19, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_25, float CallFunc_Lerp_ReturnValue, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_10, bool CallFunc_IsValid_ReturnValue_6, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_11, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_26, bool CallFunc_IsValid_ReturnValue_7, class FName Temp_name_Variable_5, class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous_3, int32 Temp_int_Array_Index_Variable_1, int32 K2Node_Event_ItemIndex, int32 K2Node_Event_Amount, class AEnemyCharacter_C* CallFunc_Array_Get_Item_2, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_GetItemFromIndex_bFound, const struct FInventoryItem& CallFunc_GetItemFromIndex_Item, class FName CallFunc_ConstructSoldItemAmountID_ID, int32 CallFunc_GetNamedPCInt_Value_1, int32 CallFunc_Add_IntInt_ReturnValue_2, class FName K2Node_CustomEvent_NotifyName_20, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_27, class FName K2Node_CustomEvent_NotifyName_21, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_12, bool CallFunc_IsInViewport_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_28, class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous_4, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_13, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue_8, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, int32 CallFunc_GetNamedPCInt_Value_2, bool CallFunc_Conv_IntToBool_ReturnValue_1, bool CallFunc_IsAllShellMaxedOut_bAllMaxedOut_1, TArray<struct FDHDialogueLine>& K2Node_Select_Default, int32 CallFunc_MakeLiteralInt_ReturnValue, class FName K2Node_CustomEvent_NotifyName_22, bool CallFunc_IsDarkForm_ReturnValue, bool CallFunc_IsDarkForm_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_29, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_14, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_15, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_16, class FName K2Node_CustomEvent_NotifyName_23, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_30, class FName K2Node_CustomEvent_NotifyName_24, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_31, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess_5, class FName CallFunc_GetCurrentSubLevel_ReturnValue, bool CallFunc_IsLoadingScreenActive_ReturnValue, bool K2Node_CustomEvent_BoughtSomething, class FText Temp_text_Variable, class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous_5, class FText Temp_text_Variable_1, bool Temp_bool_Variable_6, class FText K2Node_Select_Default_1, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1, bool Temp_bool_Variable_7, bool CallFunc_IsValid_ReturnValue_9, TArray<struct FDHDialogueLine>& K2Node_Select_Default_2, bool CallFunc_IsValid_ReturnValue_10, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_11, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_12, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_2, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_3, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_4, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_32, bool Temp_bool_Variable_8, TArray<struct FDHDialogueLine>& K2Node_Select_Default_3, bool CallFunc_IsValid_ReturnValue_13, bool Temp_bool_Variable_9, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3, TArray<struct FDHDialogueLine>& K2Node_Select_Default_4, TArray<struct FDHDialogueLine>& K2Node_Select_Default_5, TArray<struct FDHDialogueLine>& K2Node_Select_Default_6, TArray<struct FDHDialogueLine>& K2Node_Select_Default_7, bool CallFunc_IsValid_ReturnValue_14, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_15, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_6, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_2, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_7, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_8, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_9, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, bool CallFunc_IsDarkForm_ReturnValue_2, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_1, bool K2Node_DynamicCast_bSuccess_6, bool CallFunc_GetFoundlingMenuEnabled_Enabled, bool CallFunc_IsArbNameInSetPure__IsInSet__2, bool CallFunc_ShouldDoFirstRespawnDialogue__ReturnValue_2, TArray<struct FDHDialogueLine>& K2Node_Select_Default_8, TArray<struct FDHDialogueLine>& K2Node_Select_Default_9)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "ExecuteUbergraph_WaifuNPC");

	Params::AWaifuNPC_C_ExecuteUbergraph_WaifuNPC_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_NotifyName_17 = K2Node_CustomEvent_NotifyName_17;
	Parms.K2Node_CustomEvent_NotifyName_16 = K2Node_CustomEvent_NotifyName_16;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_NotifyName_15 = K2Node_CustomEvent_NotifyName_15;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOverlappingActors_OverlappingActors = CallFunc_GetOverlappingActors_OverlappingActors;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsInViewport_ReturnValue = CallFunc_IsInViewport_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CustomEvent_NotifyName_14 = K2Node_CustomEvent_NotifyName_14;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_CustomEvent_NotifyName_13 = K2Node_CustomEvent_NotifyName_13;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.K2Node_CustomEvent_NotifyName_12 = K2Node_CustomEvent_NotifyName_12;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.K2Node_CustomEvent_NotifyName_11 = K2Node_CustomEvent_NotifyName_11;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.K2Node_CustomEvent_NotifyName_10 = K2Node_CustomEvent_NotifyName_10;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = K2Node_CreateDelegate_OutputDelegate_11;
	Parms.Temp_name_Variable_2 = Temp_name_Variable_2;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_12 = K2Node_CreateDelegate_OutputDelegate_12;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_CustomEvent_NotifyName_9 = K2Node_CustomEvent_NotifyName_9;
	Parms.K2Node_CreateDelegate_OutputDelegate_13 = K2Node_CreateDelegate_OutputDelegate_13;
	Parms.K2Node_CustomEvent_NotifyName_8 = K2Node_CustomEvent_NotifyName_8;
	Parms.K2Node_CreateDelegate_OutputDelegate_14 = K2Node_CreateDelegate_OutputDelegate_14;
	Parms.K2Node_CustomEvent_NotifyName_7 = K2Node_CustomEvent_NotifyName_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_15 = K2Node_CreateDelegate_OutputDelegate_15;
	Parms.K2Node_CustomEvent_NotifyName_6 = K2Node_CustomEvent_NotifyName_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_16 = K2Node_CreateDelegate_OutputDelegate_16;
	Parms.K2Node_CustomEvent_NotifyName_5 = K2Node_CustomEvent_NotifyName_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_17 = K2Node_CreateDelegate_OutputDelegate_17;
	Parms.Temp_name_Variable_3 = Temp_name_Variable_3;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_CustomEvent_NotifyName_4 = K2Node_CustomEvent_NotifyName_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_18 = K2Node_CreateDelegate_OutputDelegate_18;
	Parms.K2Node_CustomEvent_NotifyName_3 = K2Node_CustomEvent_NotifyName_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_19 = K2Node_CreateDelegate_OutputDelegate_19;
	Parms.K2Node_CustomEvent_NotifyName_2 = K2Node_CustomEvent_NotifyName_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_20 = K2Node_CreateDelegate_OutputDelegate_20;
	Parms.K2Node_CustomEvent_NotifyName_1 = K2Node_CustomEvent_NotifyName_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_21 = K2Node_CreateDelegate_OutputDelegate_21;
	Parms.K2Node_CustomEvent_NotifyName = K2Node_CustomEvent_NotifyName;
	Parms.K2Node_CreateDelegate_OutputDelegate_22 = K2Node_CreateDelegate_OutputDelegate_22;
	Parms.Temp_name_Variable_4 = Temp_name_Variable_4;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.K2Node_Event_Damage = K2Node_Event_Damage;
	Parms.K2Node_Event_DamageType = K2Node_Event_DamageType;
	Parms.K2Node_Event_InstigatedBy = K2Node_Event_InstigatedBy;
	Parms.K2Node_Event_DamageCauser = K2Node_Event_DamageCauser;
	Parms.CallFunc_IsMyNameInChangedSet_ReturnValue = CallFunc_IsMyNameInChangedSet_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base = CallFunc_GetCharacterAs0_Base_As0_Base;
	Parms.CallFunc_IsShellMaxedOut_bMaxedOut = CallFunc_IsShellMaxedOut_bMaxedOut;
	Parms.CallFunc_IsAllShellMaxedOut_bAllMaxedOut = CallFunc_IsAllShellMaxedOut_bAllMaxedOut;
	Parms.K2Node_CustomEvent_bBoughtSomething = K2Node_CustomEvent_bBoughtSomething;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_DynamicCast_AsGameplay_GM = K2Node_DynamicCast_AsGameplay_GM;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_GetCurrentPersistentLevelName_ReturnValue = CallFunc_GetCurrentPersistentLevelName_ReturnValue;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_ShouldDoNewGamePlusFirstDialogue__ReturnValue = CallFunc_ShouldDoNewGamePlusFirstDialogue__ReturnValue;
	Parms.Temp_bool_Variable_5 = Temp_bool_Variable_5;
	Parms.CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM = CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM;
	Parms.K2Node_DynamicCast_AsGame_Mode_Util_Interface = K2Node_DynamicCast_AsGame_Mode_Util_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_ShouldDoNewGamePlusFirstDialogue__ReturnValue_1 = CallFunc_ShouldDoNewGamePlusFirstDialogue__ReturnValue_1;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_23 = K2Node_CreateDelegate_OutputDelegate_23;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_3 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_3;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_4 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_4;
	Parms.CallFunc_GetShell_CurrentArmor = CallFunc_GetShell_CurrentArmor;
	Parms.CallFunc_IsShellMaxedOut_bMaxedOut_1 = CallFunc_IsShellMaxedOut_bMaxedOut_1;
	Parms.K2Node_Event_bYes = K2Node_Event_bYes;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_5 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_5;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_6 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_6;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_ShouldDoLightShellFirstDialogue__ReturnValue = CallFunc_ShouldDoLightShellFirstDialogue__ReturnValue;
	Parms.CallFunc_IsArbNameInSetPure__IsInSet_ = CallFunc_IsArbNameInSetPure__IsInSet_;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_7 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_7;
	Parms.CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_1 = CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_1;
	Parms.CallFunc_GameModeUtils_SaveMapState_self_CastInput = CallFunc_GameModeUtils_SaveMapState_self_CastInput;
	Parms.CallFunc_ShouldDoFirstRespawnDialogue__ReturnValue = CallFunc_ShouldDoFirstRespawnDialogue__ReturnValue;
	Parms.CallFunc_ShouldDoFirstRespawnDialogue__ReturnValue_1 = CallFunc_ShouldDoFirstRespawnDialogue__ReturnValue_1;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_8 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_8;
	Parms.CallFunc_OnActorUsed_Success = CallFunc_OnActorUsed_Success;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base_1 = CallFunc_GetCharacterAs0_Base_As0_Base_1;
	Parms.CallFunc_AddItemToPlayerInventory_Success = CallFunc_AddItemToPlayerInventory_Success;
	Parms.CallFunc_AddItemToPlayerInventory_InventorySlot = CallFunc_AddItemToPlayerInventory_InventorySlot;
	Parms.CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_2 = CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_2;
	Parms.CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_3 = CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_3;
	Parms.CallFunc_GameModeUtils_SaveMapState_self_CastInput_1 = CallFunc_GameModeUtils_SaveMapState_self_CastInput_1;
	Parms.CallFunc_GameModeUtils_SaveMapState_self_CastInput_2 = CallFunc_GameModeUtils_SaveMapState_self_CastInput_2;
	Parms.CallFunc_GetCharacterAsBarbarous_AsBarbarous = CallFunc_GetCharacterAsBarbarous_AsBarbarous;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_MakeStruct_DarkFatherChantSubtitle = K2Node_MakeStruct_DarkFatherChantSubtitle;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_IsArbNameInSetPure__IsInSet__1 = CallFunc_IsArbNameInSetPure__IsInSet__1;
	Parms.K2Node_CustomEvent_NewEntryIndex = K2Node_CustomEvent_NewEntryIndex;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base_2 = CallFunc_GetCharacterAs0_Base_As0_Base_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetNamedPCInt_Value = CallFunc_GetNamedPCInt_Value;
	Parms.CallFunc_Conv_IntToBool_ReturnValue = CallFunc_Conv_IntToBool_ReturnValue;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_9 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_9;
	Parms.K2Node_CustomEvent_NotifyName_18 = K2Node_CustomEvent_NotifyName_18;
	Parms.CallFunc_GetCharacterAsBarbarous_AsBarbarous_1 = CallFunc_GetCharacterAsBarbarous_AsBarbarous_1;
	Parms.CallFunc_GetDeclinedDialogue_NewParam = CallFunc_GetDeclinedDialogue_NewParam;
	Parms.CallFunc_GetAcceptDialogue_NewParam = CallFunc_GetAcceptDialogue_NewParam;
	Parms.CallFunc_GetCharacterAsBarbarous_AsBarbarous_2 = CallFunc_GetCharacterAsBarbarous_AsBarbarous_2;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue = CallFunc_SpawnSoundAttached_ReturnValue;
	Parms.CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_4 = CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_4;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsAdvanced_Enemy_Spawner = K2Node_DynamicCast_AsAdvanced_Enemy_Spawner;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_1 = CallFunc_GetAllActorsOfClass_OutActors_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_24 = K2Node_CreateDelegate_OutputDelegate_24;
	Parms.K2Node_ComponentBoundEvent_OverlappedActor_1 = K2Node_ComponentBoundEvent_OverlappedActor_1;
	Parms.K2Node_ComponentBoundEvent_OtherActor_1 = K2Node_ComponentBoundEvent_OtherActor_1;
	Parms.K2Node_ComponentBoundEvent_OverlappedActor = K2Node_ComponentBoundEvent_OverlappedActor;
	Parms.K2Node_ComponentBoundEvent_OtherActor = K2Node_ComponentBoundEvent_OtherActor;
	Parms.K2Node_DynamicCast_As0_Base = K2Node_DynamicCast_As0_Base;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_DynamicCast_As0_Base_1 = K2Node_DynamicCast_As0_Base_1;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.K2Node_CustomEvent_LP_Frequency = K2Node_CustomEvent_LP_Frequency;
	Parms.K2Node_CustomEvent_NotifyName_19 = K2Node_CustomEvent_NotifyName_19;
	Parms.K2Node_CreateDelegate_OutputDelegate_25 = K2Node_CreateDelegate_OutputDelegate_25;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_10 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_10;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_11 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_11;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base_3 = CallFunc_GetCharacterAs0_Base_As0_Base_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_26 = K2Node_CreateDelegate_OutputDelegate_26;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.Temp_name_Variable_5 = Temp_name_Variable_5;
	Parms.CallFunc_GetCharacterAsBarbarous_AsBarbarous_3 = CallFunc_GetCharacterAsBarbarous_AsBarbarous_3;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.K2Node_Event_ItemIndex = K2Node_Event_ItemIndex;
	Parms.K2Node_Event_Amount = K2Node_Event_Amount;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_ActorHasTag_ReturnValue = CallFunc_ActorHasTag_ReturnValue;
	Parms.CallFunc_GetItemFromIndex_bFound = CallFunc_GetItemFromIndex_bFound;
	Parms.CallFunc_GetItemFromIndex_Item = CallFunc_GetItemFromIndex_Item;
	Parms.CallFunc_ConstructSoldItemAmountID_ID = CallFunc_ConstructSoldItemAmountID_ID;
	Parms.CallFunc_GetNamedPCInt_Value_1 = CallFunc_GetNamedPCInt_Value_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.K2Node_CustomEvent_NotifyName_20 = K2Node_CustomEvent_NotifyName_20;
	Parms.K2Node_CreateDelegate_OutputDelegate_27 = K2Node_CreateDelegate_OutputDelegate_27;
	Parms.K2Node_CustomEvent_NotifyName_21 = K2Node_CustomEvent_NotifyName_21;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_12 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_12;
	Parms.CallFunc_IsInViewport_ReturnValue_1 = CallFunc_IsInViewport_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_28 = K2Node_CreateDelegate_OutputDelegate_28;
	Parms.CallFunc_GetCharacterAsBarbarous_AsBarbarous_4 = CallFunc_GetCharacterAsBarbarous_AsBarbarous_4;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_13 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_13;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.CallFunc_GetNamedPCInt_Value_2 = CallFunc_GetNamedPCInt_Value_2;
	Parms.CallFunc_Conv_IntToBool_ReturnValue_1 = CallFunc_Conv_IntToBool_ReturnValue_1;
	Parms.CallFunc_IsAllShellMaxedOut_bAllMaxedOut_1 = CallFunc_IsAllShellMaxedOut_bAllMaxedOut_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.K2Node_CustomEvent_NotifyName_22 = K2Node_CustomEvent_NotifyName_22;
	Parms.CallFunc_IsDarkForm_ReturnValue = CallFunc_IsDarkForm_ReturnValue;
	Parms.CallFunc_IsDarkForm_ReturnValue_1 = CallFunc_IsDarkForm_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_29 = K2Node_CreateDelegate_OutputDelegate_29;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_14 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_14;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_15 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_15;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_16 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_16;
	Parms.K2Node_CustomEvent_NotifyName_23 = K2Node_CustomEvent_NotifyName_23;
	Parms.K2Node_CreateDelegate_OutputDelegate_30 = K2Node_CreateDelegate_OutputDelegate_30;
	Parms.K2Node_CustomEvent_NotifyName_24 = K2Node_CustomEvent_NotifyName_24;
	Parms.K2Node_CreateDelegate_OutputDelegate_31 = K2Node_CreateDelegate_OutputDelegate_31;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;
	Parms.CallFunc_K2_SetTimer_ReturnValue_1 = CallFunc_K2_SetTimer_ReturnValue_1;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_GetCurrentSubLevel_ReturnValue = CallFunc_GetCurrentSubLevel_ReturnValue;
	Parms.CallFunc_IsLoadingScreenActive_ReturnValue = CallFunc_IsLoadingScreenActive_ReturnValue;
	Parms.K2Node_CustomEvent_BoughtSomething = K2Node_CustomEvent_BoughtSomething;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_GetCharacterAsBarbarous_AsBarbarous_5 = CallFunc_GetCharacterAsBarbarous_AsBarbarous_5;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_bool_Variable_6 = Temp_bool_Variable_6;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue_1 = CallFunc_SpawnSoundAttached_ReturnValue_1;
	Parms.Temp_bool_Variable_7 = Temp_bool_Variable_7;
	Parms.CallFunc_IsValid_ReturnValue_9 = CallFunc_IsValid_ReturnValue_9;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_IsValid_ReturnValue_10 = CallFunc_IsValid_ReturnValue_10;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_11 = CallFunc_IsValid_ReturnValue_11;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_12 = CallFunc_IsValid_ReturnValue_12;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue = CallFunc_SpawnEmitterAttached_ReturnValue;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue_1 = CallFunc_SpawnEmitterAttached_ReturnValue_1;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue_2 = CallFunc_SpawnEmitterAttached_ReturnValue_2;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue_3 = CallFunc_SpawnEmitterAttached_ReturnValue_3;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue_4 = CallFunc_SpawnEmitterAttached_ReturnValue_4;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue_5 = CallFunc_SpawnEmitterAttached_ReturnValue_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_32 = K2Node_CreateDelegate_OutputDelegate_32;
	Parms.Temp_bool_Variable_8 = Temp_bool_Variable_8;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_IsValid_ReturnValue_13 = CallFunc_IsValid_ReturnValue_13;
	Parms.Temp_bool_Variable_9 = Temp_bool_Variable_9;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.K2Node_Select_Default_5 = K2Node_Select_Default_5;
	Parms.K2Node_Select_Default_6 = K2Node_Select_Default_6;
	Parms.K2Node_Select_Default_7 = K2Node_Select_Default_7;
	Parms.CallFunc_IsValid_ReturnValue_14 = CallFunc_IsValid_ReturnValue_14;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_4 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_15 = CallFunc_IsValid_ReturnValue_15;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue_6 = CallFunc_SpawnEmitterAttached_ReturnValue_6;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue_2 = CallFunc_SpawnSoundAttached_ReturnValue_2;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue_7 = CallFunc_SpawnEmitterAttached_ReturnValue_7;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue_8 = CallFunc_SpawnEmitterAttached_ReturnValue_8;
	Parms.CallFunc_GetSocketLocation_ReturnValue_1 = CallFunc_GetSocketLocation_ReturnValue_1;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue_1 = CallFunc_SpawnEmitterAtLocation_ReturnValue_1;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue_9 = CallFunc_SpawnEmitterAttached_ReturnValue_9;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.CallFunc_IsDarkForm_ReturnValue_2 = CallFunc_IsDarkForm_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_1 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_GetFoundlingMenuEnabled_Enabled = CallFunc_GetFoundlingMenuEnabled_Enabled;
	Parms.CallFunc_IsArbNameInSetPure__IsInSet__2 = CallFunc_IsArbNameInSetPure__IsInSet__2;
	Parms.CallFunc_ShouldDoFirstRespawnDialogue__ReturnValue_2 = CallFunc_ShouldDoFirstRespawnDialogue__ReturnValue_2;
	Parms.K2Node_Select_Default_8 = K2Node_Select_Default_8;
	Parms.K2Node_Select_Default_9 = K2Node_Select_Default_9;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WaifuNPC.WaifuNPC_C.OnWaifuCheckpointSet__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void AWaifuNPC_C::OnWaifuCheckpointSet__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaifuNPC_C", "OnWaifuCheckpointSet__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}



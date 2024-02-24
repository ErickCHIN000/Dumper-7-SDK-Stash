#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GameplayPC_StormMode.GameplayPC_StormMode_C
// (Actor, PlayerController)

class UClass* AGameplayPC_StormMode_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayPC_StormMode_C");

	return Clss;
}


// GameplayPC_StormMode_C GameplayPC_StormMode.Default__GameplayPC_StormMode_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGameplayPC_StormMode_C* AGameplayPC_StormMode_C::GetDefaultObj()
{
	static class AGameplayPC_StormMode_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGameplayPC_StormMode_C*>(AGameplayPC_StormMode_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.StormMode_GetEquippedLute
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Lute                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_StormMode_C::StormMode_GetEquippedLute(class FName* Lute)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "StormMode_GetEquippedLute");

	Params::AGameplayPC_StormMode_C_StormMode_GetEquippedLute_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Lute != nullptr)
		*Lute = Parms.Lute;

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.StormMode_GetCurrentUpgradeForSlot
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_RuneSlots_IDs      Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ID                                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Rune                CallFunc_Map_Find_Value                                          (HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_StormMode_C::StormMode_GetCurrentUpgradeForSlot(enum class Enum_RuneSlots_IDs Slot, class FName* ID, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FStruct_Rune& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "StormMode_GetCurrentUpgradeForSlot");

	Params::AGameplayPC_StormMode_C_StormMode_GetCurrentUpgradeForSlot_Params Parms{};

	Parms.Slot = Slot;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ID != nullptr)
		*ID = Parms.ID;

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.StormMode_GetEndingProgress
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Progress                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_StormMode_C::StormMode_GetEndingProgress(class FName ID, float* Progress, float CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "StormMode_GetEndingProgress");

	Params::AGameplayPC_StormMode_C_StormMode_GetEndingProgress_Params Parms{};

	Parms.ID = ID;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Progress != nullptr)
		*Progress = Parms.Progress;

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.StormMode_GetInitialProgress
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Progress                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_StormMode_C::StormMode_GetInitialProgress(class FName ID, float* Progress, float CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "StormMode_GetInitialProgress");

	Params::AGameplayPC_StormMode_C_StormMode_GetInitialProgress_Params Parms{};

	Parms.ID = ID;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Progress != nullptr)
		*Progress = Parms.Progress;

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.StormMode_IsSisterDialogue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AGameplayPC_StormMode_C::StormMode_IsSisterDialogue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "StormMode_IsSisterDialogue");

	Params::AGameplayPC_StormMode_C_StormMode_IsSisterDialogue_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.StormMode_DebugDialogues
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Debug_                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_StormMode_C::StormMode_DebugDialogues(bool* Debug_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "StormMode_DebugDialogues");

	Params::AGameplayPC_StormMode_C_StormMode_DebugDialogues_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Debug_ != nullptr)
		*Debug_ = Parms.Debug_;

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.StormMode_PlaySister3ChoiceWindowAudio
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*                  Sound                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             Audio                                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_CreateSound2D_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_StormMode_C::StormMode_PlaySister3ChoiceWindowAudio(class USoundBase* Sound, class UAudioComponent** Audio, class UAudioComponent* CallFunc_CreateSound2D_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "StormMode_PlaySister3ChoiceWindowAudio");

	Params::AGameplayPC_StormMode_C_StormMode_PlaySister3ChoiceWindowAudio_Params Parms{};

	Parms.Sound = Sound;
	Parms.CallFunc_CreateSound2D_ReturnValue = CallFunc_CreateSound2D_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Audio != nullptr)
		*Audio = Parms.Audio;

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.StormMode_AskRandomDarkFormUpgrade
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_Rune                Rune                                                             (Parm, OutParm, HasGetValueTypeHash)
// struct FStruct_Rune                CallFunc_GetRandomDarkFormUpgrade_Rune                           (HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_StormMode_C::StormMode_AskRandomDarkFormUpgrade(struct FStruct_Rune* Rune, const struct FStruct_Rune& CallFunc_GetRandomDarkFormUpgrade_Rune, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "StormMode_AskRandomDarkFormUpgrade");

	Params::AGameplayPC_StormMode_C_StormMode_AskRandomDarkFormUpgrade_Params Parms{};

	Parms.CallFunc_GetRandomDarkFormUpgrade_Rune = CallFunc_GetRandomDarkFormUpgrade_Rune;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Rune != nullptr)
		*Rune = std::move(Parms.Rune);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.StormMode_GetCurrentShadeForCharacter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EArmorTypes             Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ShellDye           Shade                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EArmorTypes             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ShellDye           K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_StormMode_C::StormMode_GetCurrentShadeForCharacter(enum class EArmorTypes Character, enum class Enum_ShellDye* Shade, enum class EArmorTypes Temp_byte_Variable, enum class Enum_ShellDye K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "StormMode_GetCurrentShadeForCharacter");

	Params::AGameplayPC_StormMode_C_StormMode_GetCurrentShadeForCharacter_Params Parms{};

	Parms.Character = Character;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Shade != nullptr)
		*Shade = Parms.Shade;

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.StormMode_AskForRandomWeaponUpgrade
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               GrantUpgrade_                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Rune                Upgrade                                                          (Parm, OutParm, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetMilestoneUnlockForWeapon_ID                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMilestoneUnlocked_bUnlocked                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_IsMilestoneUnlocked_Current                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_IsMilestoneUnlocked_Percent                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_IsMilestoneUnlocked_Tier                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      CallFunc_IsMilestoneUnlocked_TiersX                              (ReferenceParm, HasGetValueTypeHash)
// bool                               CallFunc_IsMilestoneUnlocked_HasTier                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Rune                CallFunc_GetRandomWeaponUpgrade_Upgrade                          (HasGetValueTypeHash)

void AGameplayPC_StormMode_C::StormMode_AskForRandomWeaponUpgrade(bool* GrantUpgrade_, struct FStruct_Rune* Upgrade, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class FName CallFunc_GetMilestoneUnlockForWeapon_ID, bool CallFunc_IsMilestoneUnlocked_bUnlocked, int32 CallFunc_IsMilestoneUnlocked_Current, float CallFunc_IsMilestoneUnlocked_Percent, int32 CallFunc_IsMilestoneUnlocked_Tier, TArray<int32>& CallFunc_IsMilestoneUnlocked_TiersX, bool CallFunc_IsMilestoneUnlocked_HasTier, int32 CallFunc_Clamp_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, const struct FStruct_Rune& CallFunc_GetRandomWeaponUpgrade_Upgrade)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "StormMode_AskForRandomWeaponUpgrade");

	Params::AGameplayPC_StormMode_C_StormMode_AskForRandomWeaponUpgrade_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetMilestoneUnlockForWeapon_ID = CallFunc_GetMilestoneUnlockForWeapon_ID;
	Parms.CallFunc_IsMilestoneUnlocked_bUnlocked = CallFunc_IsMilestoneUnlocked_bUnlocked;
	Parms.CallFunc_IsMilestoneUnlocked_Current = CallFunc_IsMilestoneUnlocked_Current;
	Parms.CallFunc_IsMilestoneUnlocked_Percent = CallFunc_IsMilestoneUnlocked_Percent;
	Parms.CallFunc_IsMilestoneUnlocked_Tier = CallFunc_IsMilestoneUnlocked_Tier;
	Parms.CallFunc_IsMilestoneUnlocked_TiersX = CallFunc_IsMilestoneUnlocked_TiersX;
	Parms.CallFunc_IsMilestoneUnlocked_HasTier = CallFunc_IsMilestoneUnlocked_HasTier;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_GetRandomWeaponUpgrade_Upgrade = CallFunc_GetRandomWeaponUpgrade_Upgrade;

	UObject::ProcessEvent(Func, &Parms);

	if (GrantUpgrade_ != nullptr)
		*GrantUpgrade_ = Parms.GrantUpgrade_;

	if (Upgrade != nullptr)
		*Upgrade = std::move(Parms.Upgrade);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.StormMode_GetUnlockedItems
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                UnlockedItems                                                    (Parm, OutParm, HasGetValueTypeHash)

void AGameplayPC_StormMode_C::StormMode_GetUnlockedItems(TArray<class FName>* UnlockedItems)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "StormMode_GetUnlockedItems");

	Params::AGameplayPC_StormMode_C_StormMode_GetUnlockedItems_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (UnlockedItems != nullptr)
		*UnlockedItems = std::move(Parms.UnlockedItems);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.IsMilestoneUnlocked
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bUnlocked                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Current                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Percent                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Tier                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      TiersX                                                           (Parm, OutParm, HasGetValueTypeHash)
// bool                               HasTier                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Local_Percent                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      XValues                                                          (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              CurrentProgressVal                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Counter                                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        MilestoneID                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetMilestoneCheckID_PillarShell_ID                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetMilestoneCheckID_PillarShell_ID_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNamedPCInt_Value                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNamedPCInt_Value_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetMilestoneCheckID_PillarShell_ID_2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetMilestoneCheckID_PillarShell_ID_3                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNamedPCInt_Value_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNamedPCInt_Value_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_7                             (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetMilestoneCheckID_PillarWeapon_ID                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_8                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNamedPCInt_Value_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_9                             (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetMilestoneCheckID_PillarWeapon_ID_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNamedPCInt_Value_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetMilestoneCheckID_PillarWeapon_ID_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetMilestoneCheckID_PillarWeapon_ID_3                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNamedPCInt_Value_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNamedPCInt_Value_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetPercentForTier_Percent                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNamedPCInt_Value_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_10                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_11                            (ZeroConstructor, HasGetValueTypeHash)
// struct FStruct_MilestoneUnlock     CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_StormMode_C::IsMilestoneUnlocked(class FName ID, bool* bUnlocked, int32* Current, float* Percent, int32* Tier, TArray<int32>* TiersX, bool* HasTier, float Local_Percent, const TArray<int32>& XValues, int32 CurrentProgressVal, int32 Counter, class FName MilestoneID, int32 Temp_int_Variable, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, bool K2Node_SwitchName_CmpSuccess, const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, bool CallFunc_Array_IsValidIndex_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, class FName CallFunc_GetMilestoneCheckID_PillarShell_ID, class FName CallFunc_GetMilestoneCheckID_PillarShell_ID_1, int32 CallFunc_GetNamedPCInt_Value, int32 CallFunc_GetNamedPCInt_Value_1, class FName CallFunc_GetMilestoneCheckID_PillarShell_ID_2, class FName CallFunc_GetMilestoneCheckID_PillarShell_ID_3, int32 CallFunc_GetNamedPCInt_Value_2, int32 CallFunc_GetNamedPCInt_Value_3, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, bool CallFunc_EqualEqual_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, float CallFunc_Conv_IntToFloat_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, float CallFunc_Divide_FloatFloat_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, class FName CallFunc_GetMilestoneCheckID_PillarWeapon_ID, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, int32 CallFunc_GetNamedPCInt_Value_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_9, class FName CallFunc_GetMilestoneCheckID_PillarWeapon_ID_1, int32 CallFunc_GetNamedPCInt_Value_5, class FName CallFunc_GetMilestoneCheckID_PillarWeapon_ID_2, class FName CallFunc_GetMilestoneCheckID_PillarWeapon_ID_3, int32 CallFunc_GetNamedPCInt_Value_6, int32 CallFunc_GetNamedPCInt_Value_7, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_4, float CallFunc_GetPercentForTier_Percent, int32 CallFunc_Add_IntInt_ReturnValue_5, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_6, int32 CallFunc_Array_Get_Item, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_GetNamedPCInt_Value_8, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_10, const class FString& CallFunc_Concat_StrStr_ReturnValue_11, const struct FStruct_MilestoneUnlock& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "IsMilestoneUnlocked");

	Params::AGameplayPC_StormMode_C_IsMilestoneUnlocked_Params Parms{};

	Parms.ID = ID;
	Parms.Local_Percent = Local_Percent;
	Parms.XValues = XValues;
	Parms.CurrentProgressVal = CurrentProgressVal;
	Parms.Counter = Counter;
	Parms.MilestoneID = MilestoneID;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.CallFunc_Conv_BoolToString_ReturnValue = CallFunc_Conv_BoolToString_ReturnValue;
	Parms.CallFunc_Conv_FloatToString_ReturnValue = CallFunc_Conv_FloatToString_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = CallFunc_Conv_IntToString_ReturnValue_1;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_GetMilestoneCheckID_PillarShell_ID = CallFunc_GetMilestoneCheckID_PillarShell_ID;
	Parms.CallFunc_GetMilestoneCheckID_PillarShell_ID_1 = CallFunc_GetMilestoneCheckID_PillarShell_ID_1;
	Parms.CallFunc_GetNamedPCInt_Value = CallFunc_GetNamedPCInt_Value;
	Parms.CallFunc_GetNamedPCInt_Value_1 = CallFunc_GetNamedPCInt_Value_1;
	Parms.CallFunc_GetMilestoneCheckID_PillarShell_ID_2 = CallFunc_GetMilestoneCheckID_PillarShell_ID_2;
	Parms.CallFunc_GetMilestoneCheckID_PillarShell_ID_3 = CallFunc_GetMilestoneCheckID_PillarShell_ID_3;
	Parms.CallFunc_GetNamedPCInt_Value_2 = CallFunc_GetNamedPCInt_Value_2;
	Parms.CallFunc_GetNamedPCInt_Value_3 = CallFunc_GetNamedPCInt_Value_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.CallFunc_Concat_StrStr_ReturnValue_7 = CallFunc_Concat_StrStr_ReturnValue_7;
	Parms.CallFunc_GetMilestoneCheckID_PillarWeapon_ID = CallFunc_GetMilestoneCheckID_PillarWeapon_ID;
	Parms.CallFunc_Concat_StrStr_ReturnValue_8 = CallFunc_Concat_StrStr_ReturnValue_8;
	Parms.CallFunc_GetNamedPCInt_Value_4 = CallFunc_GetNamedPCInt_Value_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_9 = CallFunc_Concat_StrStr_ReturnValue_9;
	Parms.CallFunc_GetMilestoneCheckID_PillarWeapon_ID_1 = CallFunc_GetMilestoneCheckID_PillarWeapon_ID_1;
	Parms.CallFunc_GetNamedPCInt_Value_5 = CallFunc_GetNamedPCInt_Value_5;
	Parms.CallFunc_GetMilestoneCheckID_PillarWeapon_ID_2 = CallFunc_GetMilestoneCheckID_PillarWeapon_ID_2;
	Parms.CallFunc_GetMilestoneCheckID_PillarWeapon_ID_3 = CallFunc_GetMilestoneCheckID_PillarWeapon_ID_3;
	Parms.CallFunc_GetNamedPCInt_Value_6 = CallFunc_GetNamedPCInt_Value_6;
	Parms.CallFunc_GetNamedPCInt_Value_7 = CallFunc_GetNamedPCInt_Value_7;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.CallFunc_GetPercentForTier_Percent = CallFunc_GetPercentForTier_Percent;
	Parms.CallFunc_Add_IntInt_ReturnValue_5 = CallFunc_Add_IntInt_ReturnValue_5;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_6 = CallFunc_Add_IntInt_ReturnValue_6;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GetNamedPCInt_Value_8 = CallFunc_GetNamedPCInt_Value_8;
	Parms.CallFunc_Conv_NameToString_ReturnValue_1 = CallFunc_Conv_NameToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_10 = CallFunc_Concat_StrStr_ReturnValue_10;
	Parms.CallFunc_Concat_StrStr_ReturnValue_11 = CallFunc_Concat_StrStr_ReturnValue_11;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bUnlocked != nullptr)
		*bUnlocked = Parms.bUnlocked;

	if (Current != nullptr)
		*Current = Parms.Current;

	if (Percent != nullptr)
		*Percent = Parms.Percent;

	if (Tier != nullptr)
		*Tier = Parms.Tier;

	if (TiersX != nullptr)
		*TiersX = std::move(Parms.TiersX);

	if (HasTier != nullptr)
		*HasTier = Parms.HasTier;

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.StormMode_StartingRiposteNotDefault?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class FName                        StartingRiposte                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Local_StartingRiposte                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

bool AGameplayPC_StormMode_C::StormMode_StartingRiposteNotDefault_(class FName* StartingRiposte, class FName Local_StartingRiposte, class FName Temp_name_Variable, bool CallFunc_NotEqual_NameName_ReturnValue, class FName CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "StormMode_StartingRiposteNotDefault?");

	Params::AGameplayPC_StormMode_C_StormMode_StartingRiposteNotDefault__Params Parms{};

	Parms.Local_StartingRiposte = Local_StartingRiposte;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (StartingRiposte != nullptr)
		*StartingRiposte = Parms.StartingRiposte;

	return Parms.ReturnValue;

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.StormMode_GetNamedInts
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<class FName, int32>           NamedInts                                                        (Parm, OutParm)

void AGameplayPC_StormMode_C::StormMode_GetNamedInts(TMap<class FName, int32>* NamedInts)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "StormMode_GetNamedInts");

	Params::AGameplayPC_StormMode_C_StormMode_GetNamedInts_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (NamedInts != nullptr)
		*NamedInts = Parms.NamedInts;

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.StormMode_AskRandomUpgrade
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_Rune                Upgrade                                                          (Parm, OutParm, HasGetValueTypeHash)
// struct FStruct_Rune                CallFunc_GetRandomUpgrade_Upgrade                                (HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_StormMode_C::StormMode_AskRandomUpgrade(struct FStruct_Rune* Upgrade, const struct FStruct_Rune& CallFunc_GetRandomUpgrade_Upgrade, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "StormMode_AskRandomUpgrade");

	Params::AGameplayPC_StormMode_C_StormMode_AskRandomUpgrade_Params Parms{};

	Parms.CallFunc_GetRandomUpgrade_Upgrade = CallFunc_GetRandomUpgrade_Upgrade;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Upgrade != nullptr)
		*Upgrade = std::move(Parms.Upgrade);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.StormMode_CheckForGlands
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               HasAny_                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAnyGland__ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_StormMode_C::StormMode_CheckForGlands(bool* HasAny_, bool CallFunc_HasAnyGland__ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "StormMode_CheckForGlands");

	Params::AGameplayPC_StormMode_C_StormMode_CheckForGlands_Params Parms{};

	Parms.CallFunc_HasAnyGland__ReturnValue = CallFunc_HasAnyGland__ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (HasAny_ != nullptr)
		*HasAny_ = Parms.HasAny_;

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.StormMode_GetRunPlaytime
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDateTime                   RunPlaytime                                                      (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FDateTime                   CallFunc_GetRunPlaytime_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_StormMode_C::StormMode_GetRunPlaytime(struct FDateTime* RunPlaytime, const struct FDateTime& CallFunc_GetRunPlaytime_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "StormMode_GetRunPlaytime");

	Params::AGameplayPC_StormMode_C_StormMode_GetRunPlaytime_Params Parms{};

	Parms.CallFunc_GetRunPlaytime_ReturnValue = CallFunc_GetRunPlaytime_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (RunPlaytime != nullptr)
		*RunPlaytime = std::move(Parms.RunPlaytime);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.StormMode_AskForASeed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Seed                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_AskForASeed_Seed                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_StormMode_C::StormMode_AskForASeed(int32* Seed, int32 CallFunc_AskForASeed_Seed, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "StormMode_AskForASeed");

	Params::AGameplayPC_StormMode_C_StormMode_AskForASeed_Params Parms{};

	Parms.CallFunc_AskForASeed_Seed = CallFunc_AskForASeed_Seed;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Seed != nullptr)
		*Seed = Parms.Seed;

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.StormMode_GetSelectedShell
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               HasSelected                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EArmorTypes             Shell                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_StormMode_C::StormMode_GetSelectedShell(bool* HasSelected, enum class EArmorTypes* Shell)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "StormMode_GetSelectedShell");

	Params::AGameplayPC_StormMode_C_StormMode_GetSelectedShell_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (HasSelected != nullptr)
		*HasSelected = Parms.HasSelected;

	if (Shell != nullptr)
		*Shell = Parms.Shell;

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.StormMode_GetSeeds
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_StormModeSeeds      Seeds                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_StormMode_C::StormMode_GetSeeds(struct FStruct_StormModeSeeds* Seeds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "StormMode_GetSeeds");

	Params::AGameplayPC_StormMode_C_StormMode_GetSeeds_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Seeds != nullptr)
		*Seeds = std::move(Parms.Seeds);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.StormMode_GetCurrentGlandData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_StormModeProgress  Progress                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_StormModeGlandData Gland                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_StormModeGlandData CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_StormMode_C::StormMode_GetCurrentGlandData(enum class Enum_StormModeProgress Progress, enum class Enum_StormModeGlandData* Gland, enum class Enum_StormModeGlandData CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "StormMode_GetCurrentGlandData");

	Params::AGameplayPC_StormMode_C_StormMode_GetCurrentGlandData_Params Parms{};

	Parms.Progress = Progress;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Gland != nullptr)
		*Gland = Parms.Gland;

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.StormMode_ShouldUnlockChalice?
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// TMap<int32, float>                 Local_CathLevelChances                                           (Edit, BlueprintVisible)
// TMap<int32, float>                 Local_CryptLevelChances                                          (Edit, BlueprintVisible)
// TMap<int32, float>                 Local_FireLevelChances                                           (Edit, BlueprintVisible)
// bool                               Local_Result                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Local_CurrentProgress                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<int32, float>                 K2Node_MakeVariable_MakeVariableOutput                           (None)
// float                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RandomBoolWithWeight_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Map_Find_Value_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RandomBoolWithWeight_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<int32, float>                 K2Node_MakeVariable_MakeVariableOutput_1                         (None)
// float                              CallFunc_Map_Find_Value_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RandomBoolWithWeight_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<int32, float>                 K2Node_MakeVariable_MakeVariableOutput_2                         (None)
// int32                              CallFunc_Map_Find_Value_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

bool AGameplayPC_StormMode_C::StormMode_ShouldUnlockChalice_(TMap<int32, float> Local_CathLevelChances, TMap<int32, float> Local_CryptLevelChances, TMap<int32, float> Local_FireLevelChances, bool Local_Result, int32 Local_CurrentProgress, TMap<int32, float> K2Node_MakeVariable_MakeVariableOutput, float CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_RandomBoolWithWeight_ReturnValue, float CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, bool CallFunc_RandomBoolWithWeight_ReturnValue_1, bool K2Node_SwitchString_CmpSuccess, TMap<int32, float> K2Node_MakeVariable_MakeVariableOutput_1, float CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, bool CallFunc_RandomBoolWithWeight_ReturnValue_2, TMap<int32, float> K2Node_MakeVariable_MakeVariableOutput_2, int32 CallFunc_Map_Find_Value_3, bool CallFunc_Map_Find_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "StormMode_ShouldUnlockChalice?");

	Params::AGameplayPC_StormMode_C_StormMode_ShouldUnlockChalice__Params Parms{};

	Parms.Local_CathLevelChances = Local_CathLevelChances;
	Parms.Local_CryptLevelChances = Local_CryptLevelChances;
	Parms.Local_FireLevelChances = Local_FireLevelChances;
	Parms.Local_Result = Local_Result;
	Parms.Local_CurrentProgress = Local_CurrentProgress;
	Parms.K2Node_MakeVariable_MakeVariableOutput = K2Node_MakeVariable_MakeVariableOutput;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_RandomBoolWithWeight_ReturnValue = CallFunc_RandomBoolWithWeight_ReturnValue;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_RandomBoolWithWeight_ReturnValue_1 = CallFunc_RandomBoolWithWeight_ReturnValue_1;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;
	Parms.K2Node_MakeVariable_MakeVariableOutput_1 = K2Node_MakeVariable_MakeVariableOutput_1;
	Parms.CallFunc_Map_Find_Value_2 = CallFunc_Map_Find_Value_2;
	Parms.CallFunc_Map_Find_ReturnValue_2 = CallFunc_Map_Find_ReturnValue_2;
	Parms.CallFunc_RandomBoolWithWeight_ReturnValue_2 = CallFunc_RandomBoolWithWeight_ReturnValue_2;
	Parms.K2Node_MakeVariable_MakeVariableOutput_2 = K2Node_MakeVariable_MakeVariableOutput_2;
	Parms.CallFunc_Map_Find_Value_3 = CallFunc_Map_Find_Value_3;
	Parms.CallFunc_Map_Find_ReturnValue_3 = CallFunc_Map_Find_ReturnValue_3;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.GetStormMode_ShouldOpenArea?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               Local_ShouldOpenArea                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Local_CurrentValue                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

bool AGameplayPC_StormMode_C::GetStormMode_ShouldOpenArea_(bool Local_ShouldOpenArea, int32 Local_CurrentValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "GetStormMode_ShouldOpenArea?");

	Params::AGameplayPC_StormMode_C_GetStormMode_ShouldOpenArea__Params Parms{};

	Parms.Local_ShouldOpenArea = Local_ShouldOpenArea;
	Parms.Local_CurrentValue = Local_CurrentValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.GetStormModeAreaState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_StormModeArea      Area                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_StormModeAreaState CurrentState                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_StormModeAreaState CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_StormMode_C::GetStormModeAreaState(enum class Enum_StormModeArea Area, enum class Enum_StormModeAreaState* CurrentState, enum class Enum_StormModeAreaState CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "GetStormModeAreaState");

	Params::AGameplayPC_StormMode_C_GetStormModeAreaState_Params Parms{};

	Parms.Area = Area;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CurrentState != nullptr)
		*CurrentState = Parms.CurrentState;

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.GetStormModeAllAreasState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<enum class Enum_StormModeArea, enum class Enum_StormModeAreaState>AreasState                                                       (Parm, OutParm)

void AGameplayPC_StormMode_C::GetStormModeAllAreasState(TMap<enum class Enum_StormModeArea, enum class Enum_StormModeAreaState>* AreasState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "GetStormModeAllAreasState");

	Params::AGameplayPC_StormMode_C_GetStormModeAllAreasState_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AreasState != nullptr)
		*AreasState = Parms.AreasState;

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.GetStormModeProgress
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_StormModeProgress  Progress                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_StormMode_C::GetStormModeProgress(enum class Enum_StormModeProgress* Progress)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "GetStormModeProgress");

	Params::AGameplayPC_StormMode_C_GetStormModeProgress_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Progress != nullptr)
		*Progress = Parms.Progress;

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.UpdateStormModeCampaign
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDHGameInstance*             CallFunc_GetInstance_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetAscensionName_ID                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_SeedDial_NextIndex_PCIntName                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNamedPCInt_Value                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNamedPCInt_Value_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_StormMode_C::UpdateStormModeCampaign(class UDHGameInstance* CallFunc_GetInstance_ReturnValue, class FName CallFunc_GetAscensionName_ID, class FName CallFunc_SeedDial_NextIndex_PCIntName, int32 CallFunc_GetNamedPCInt_Value, int32 CallFunc_GetNamedPCInt_Value_1, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "UpdateStormModeCampaign");

	Params::AGameplayPC_StormMode_C_UpdateStormModeCampaign_Params Parms{};

	Parms.CallFunc_GetInstance_ReturnValue = CallFunc_GetInstance_ReturnValue;
	Parms.CallFunc_GetAscensionName_ID = CallFunc_GetAscensionName_ID;
	Parms.CallFunc_SeedDial_NextIndex_PCIntName = CallFunc_SeedDial_NextIndex_PCIntName;
	Parms.CallFunc_GetNamedPCInt_Value = CallFunc_GetNamedPCInt_Value;
	Parms.CallFunc_GetNamedPCInt_Value_1 = CallFunc_GetNamedPCInt_Value_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.EquipLoadedWeapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_StormMode_C::EquipLoadedWeapon(const class FString& CallFunc_GetCurrentLevelName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "EquipLoadedWeapon");

	Params::AGameplayPC_StormMode_C_EquipLoadedWeapon_Params Parms{};

	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_1 = CallFunc_EqualEqual_StrStr_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.DebugLoadedWeapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EComboTypes             CharWeapon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Temp_string_Variable_1                                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)

void AGameplayPC_StormMode_C::DebugLoadedWeapon(enum class EComboTypes CharWeapon, const class FString& Temp_string_Variable, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, const class FString& Temp_string_Variable_1, bool Temp_bool_Variable, const class FString& K2Node_Select_Default, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "DebugLoadedWeapon");

	Params::AGameplayPC_StormMode_C_DebugLoadedWeapon_Params Parms{};

	Parms.CharWeapon = CharWeapon;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.Temp_string_Variable_1 = Temp_string_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1 = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.CheckLoadedWeapon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetCharacterWeaponIDFromEnum_ID                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryItem              CallFunc_GetItemFromID_Item                                      (HasGetValueTypeHash)
// bool                               CallFunc_SetInventoryItem_Success                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasItem_Success                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_HasItem_InventorySlot                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_HasItem_Amount                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_StormMode_C::CheckLoadedWeapon(bool CallFunc_NotEqual_ByteByte_ReturnValue, class FName CallFunc_GetCharacterWeaponIDFromEnum_ID, const struct FInventoryItem& CallFunc_GetItemFromID_Item, bool CallFunc_SetInventoryItem_Success, bool CallFunc_HasItem_Success, int32 CallFunc_HasItem_InventorySlot, int32 CallFunc_HasItem_Amount, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "CheckLoadedWeapon");

	Params::AGameplayPC_StormMode_C_CheckLoadedWeapon_Params Parms{};

	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetCharacterWeaponIDFromEnum_ID = CallFunc_GetCharacterWeaponIDFromEnum_ID;
	Parms.CallFunc_GetItemFromID_Item = CallFunc_GetItemFromID_Item;
	Parms.CallFunc_SetInventoryItem_Success = CallFunc_SetInventoryItem_Success;
	Parms.CallFunc_HasItem_Success = CallFunc_HasItem_Success;
	Parms.CallFunc_HasItem_InventorySlot = CallFunc_HasItem_InventorySlot;
	Parms.CallFunc_HasItem_Amount = CallFunc_HasItem_Amount;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.SaveCurrentWeapon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EComboTypes             CurrentWeapon                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_StormMode_C::SaveCurrentWeapon(enum class EComboTypes* CurrentWeapon, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "SaveCurrentWeapon");

	Params::AGameplayPC_StormMode_C_SaveCurrentWeapon_Params Parms{};

	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CurrentWeapon != nullptr)
		*CurrentWeapon = Parms.CurrentWeapon;

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.ShowEndWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGamePlayGameState_C*        K2Node_DynamicCast_AsGame_Play_Game_State                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_StormMode_C::ShowEndWidget(class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AGamePlayGameState_C* K2Node_DynamicCast_AsGame_Play_Game_State, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "ShowEndWidget");

	Params::AGameplayPC_StormMode_C_ShowEndWidget_Params Parms{};

	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Play_Game_State = K2Node_DynamicCast_AsGame_Play_Game_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.IncrementSuccesCounter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Temp_name_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_1                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_StormMode_C::IncrementSuccesCounter(class FName Temp_name_Variable, class FName Temp_name_Variable_1, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "IncrementSuccesCounter");

	Params::AGameplayPC_StormMode_C_IncrementSuccesCounter_Params Parms{};

	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.SetCycleCompleted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_GM_C>K2Node_DynamicCast_AsBPI_Storm_Mode_GM                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GoldenPathDialogueCounterName_PCIntName                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_StormMode_C::SetCycleCompleted(class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, TScriptInterface<class IBPI_StormMode_GM_C> K2Node_DynamicCast_AsBPI_Storm_Mode_GM, bool K2Node_DynamicCast_bSuccess, class FName CallFunc_GoldenPathDialogueCounterName_PCIntName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "SetCycleCompleted");

	Params::AGameplayPC_StormMode_C_SetCycleCompleted_Params Parms{};

	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_GM = K2Node_DynamicCast_AsBPI_Storm_Mode_GM;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GoldenPathDialogueCounterName_PCIntName = CallFunc_GoldenPathDialogueCounterName_PCIntName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.DH_DebugSisterDialogues
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_StormMode_C::DH_DebugSisterDialogues(bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "DH_DebugSisterDialogues");

	Params::AGameplayPC_StormMode_C_DH_DebugSisterDialogues_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.FadeOutSisterAudio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_StormMode_C::FadeOutSisterAudio(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "FadeOutSisterAudio");

	Params::AGameplayPC_StormMode_C_FadeOutSisterAudio_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.DH_ResetStormModeDialogues
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CallFunc_Next_Golden_Path_Dialogue_Index_Name_PCIntName          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GoldenPathDialogueCounterName_PCIntName                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_StormMode_C::DH_ResetStormModeDialogues(class FName CallFunc_Next_Golden_Path_Dialogue_Index_Name_PCIntName, class FName CallFunc_GoldenPathDialogueCounterName_PCIntName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "DH_ResetStormModeDialogues");

	Params::AGameplayPC_StormMode_C_DH_ResetStormModeDialogues_Params Parms{};

	Parms.CallFunc_Next_Golden_Path_Dialogue_Index_Name_PCIntName = CallFunc_Next_Golden_Path_Dialogue_Index_Name_PCIntName;
	Parms.CallFunc_GoldenPathDialogueCounterName_PCIntName = CallFunc_GoldenPathDialogueCounterName_PCIntName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.CheckAxatanaUpgradeAchievement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_HasRune_Yes                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasRune_Yes_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasRune_Yes_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasRune_Yes_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasRune_Yes_4                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasRune_Yes_5                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasRune_Yes_6                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasRune_Yes_7                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasRune_Yes_8                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasRune_Yes_9                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasRune_Yes_10                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasRune_Yes_11                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasRune_Yes_12                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_7                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_8                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasRune_Yes_13                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_9                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasRune_Yes_14                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasRune_Yes_15                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasRune_Yes_16                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasRune_Yes_17                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasRune_Yes_18                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_10                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_11                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_12                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_13                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_14                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_StormMode_C::CheckAxatanaUpgradeAchievement(bool CallFunc_HasRune_Yes, bool CallFunc_HasRune_Yes_1, bool CallFunc_HasRune_Yes_2, bool CallFunc_HasRune_Yes_3, bool CallFunc_HasRune_Yes_4, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_HasRune_Yes_5, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_HasRune_Yes_6, bool CallFunc_HasRune_Yes_7, bool CallFunc_HasRune_Yes_8, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_HasRune_Yes_9, bool CallFunc_BooleanOR_ReturnValue_4, bool CallFunc_HasRune_Yes_10, bool CallFunc_BooleanOR_ReturnValue_5, bool CallFunc_HasRune_Yes_11, bool CallFunc_BooleanOR_ReturnValue_6, bool CallFunc_HasRune_Yes_12, bool CallFunc_BooleanOR_ReturnValue_7, bool CallFunc_BooleanOR_ReturnValue_8, bool CallFunc_HasRune_Yes_13, bool CallFunc_BooleanOR_ReturnValue_9, bool CallFunc_HasRune_Yes_14, bool CallFunc_HasRune_Yes_15, bool CallFunc_HasRune_Yes_16, bool CallFunc_HasRune_Yes_17, bool CallFunc_HasRune_Yes_18, bool CallFunc_BooleanOR_ReturnValue_10, bool CallFunc_BooleanOR_ReturnValue_11, bool CallFunc_BooleanOR_ReturnValue_12, bool CallFunc_BooleanOR_ReturnValue_13, bool CallFunc_BooleanOR_ReturnValue_14, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "CheckAxatanaUpgradeAchievement");

	Params::AGameplayPC_StormMode_C_CheckAxatanaUpgradeAchievement_Params Parms{};

	Parms.CallFunc_HasRune_Yes = CallFunc_HasRune_Yes;
	Parms.CallFunc_HasRune_Yes_1 = CallFunc_HasRune_Yes_1;
	Parms.CallFunc_HasRune_Yes_2 = CallFunc_HasRune_Yes_2;
	Parms.CallFunc_HasRune_Yes_3 = CallFunc_HasRune_Yes_3;
	Parms.CallFunc_HasRune_Yes_4 = CallFunc_HasRune_Yes_4;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_HasRune_Yes_5 = CallFunc_HasRune_Yes_5;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_HasRune_Yes_6 = CallFunc_HasRune_Yes_6;
	Parms.CallFunc_HasRune_Yes_7 = CallFunc_HasRune_Yes_7;
	Parms.CallFunc_HasRune_Yes_8 = CallFunc_HasRune_Yes_8;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;
	Parms.CallFunc_HasRune_Yes_9 = CallFunc_HasRune_Yes_9;
	Parms.CallFunc_BooleanOR_ReturnValue_4 = CallFunc_BooleanOR_ReturnValue_4;
	Parms.CallFunc_HasRune_Yes_10 = CallFunc_HasRune_Yes_10;
	Parms.CallFunc_BooleanOR_ReturnValue_5 = CallFunc_BooleanOR_ReturnValue_5;
	Parms.CallFunc_HasRune_Yes_11 = CallFunc_HasRune_Yes_11;
	Parms.CallFunc_BooleanOR_ReturnValue_6 = CallFunc_BooleanOR_ReturnValue_6;
	Parms.CallFunc_HasRune_Yes_12 = CallFunc_HasRune_Yes_12;
	Parms.CallFunc_BooleanOR_ReturnValue_7 = CallFunc_BooleanOR_ReturnValue_7;
	Parms.CallFunc_BooleanOR_ReturnValue_8 = CallFunc_BooleanOR_ReturnValue_8;
	Parms.CallFunc_HasRune_Yes_13 = CallFunc_HasRune_Yes_13;
	Parms.CallFunc_BooleanOR_ReturnValue_9 = CallFunc_BooleanOR_ReturnValue_9;
	Parms.CallFunc_HasRune_Yes_14 = CallFunc_HasRune_Yes_14;
	Parms.CallFunc_HasRune_Yes_15 = CallFunc_HasRune_Yes_15;
	Parms.CallFunc_HasRune_Yes_16 = CallFunc_HasRune_Yes_16;
	Parms.CallFunc_HasRune_Yes_17 = CallFunc_HasRune_Yes_17;
	Parms.CallFunc_HasRune_Yes_18 = CallFunc_HasRune_Yes_18;
	Parms.CallFunc_BooleanOR_ReturnValue_10 = CallFunc_BooleanOR_ReturnValue_10;
	Parms.CallFunc_BooleanOR_ReturnValue_11 = CallFunc_BooleanOR_ReturnValue_11;
	Parms.CallFunc_BooleanOR_ReturnValue_12 = CallFunc_BooleanOR_ReturnValue_12;
	Parms.CallFunc_BooleanOR_ReturnValue_13 = CallFunc_BooleanOR_ReturnValue_13;
	Parms.CallFunc_BooleanOR_ReturnValue_14 = CallFunc_BooleanOR_ReturnValue_14;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.IsAllShadeUnlocked
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bYes                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_GetEnumeratorValueFromIndex_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EArmorTypes             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_1                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_2                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_3                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_4                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_5                                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_StormMode_C::IsAllShadeUnlocked(bool* bYes, int32 CallFunc_MakeLiteralInt_ReturnValue, int32 Temp_int_Variable, int32 Temp_int_Variable_1, uint8 CallFunc_Conv_IntToByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, enum class EArmorTypes Temp_byte_Variable, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, const class FString& Temp_string_Variable_2, const class FString& Temp_string_Variable_3, const class FString& Temp_string_Variable_4, const class FString& Temp_string_Variable_5, int32 Temp_int_Variable_2, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& K2Node_Select_Default, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "IsAllShadeUnlocked");

	Params::AGameplayPC_StormMode_C_IsAllShadeUnlocked_Params Parms{};

	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_1 = CallFunc_Conv_IntToByte_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetEnumeratorValueFromIndex_ReturnValue = CallFunc_GetEnumeratorValueFromIndex_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.Temp_string_Variable_1 = Temp_string_Variable_1;
	Parms.Temp_string_Variable_2 = Temp_string_Variable_2;
	Parms.Temp_string_Variable_3 = Temp_string_Variable_3;
	Parms.Temp_string_Variable_4 = Temp_string_Variable_4;
	Parms.Temp_string_Variable_5 = Temp_string_Variable_5;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bYes != nullptr)
		*bYes = Parms.bYes;

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.CreateEndWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CycleCompleted                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDateTime                   CallFunc_GetRunPlaytime_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ShellDye           CallFunc_StormMode_GetCurrentShadeForCharacter_Shade             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ICharacterUtilInterface_C>K2Node_DynamicCast_AsCharacter_Util_Interface                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EComboTypes             CallFunc_0_Base_GetCurrentWeapon_CurrentWeapon                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_StormMode_End_C*         CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_StormMode_C::CreateEndWidget(bool CycleCompleted, const struct FDateTime& CallFunc_GetRunPlaytime_ReturnValue, enum class Enum_ShellDye CallFunc_StormMode_GetCurrentShadeForCharacter_Shade, TScriptInterface<class ICharacterUtilInterface_C> K2Node_DynamicCast_AsCharacter_Util_Interface, bool K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetPlayerController_ReturnValue, enum class EComboTypes CallFunc_0_Base_GetCurrentWeapon_CurrentWeapon, class UUI_StormMode_End_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "CreateEndWidget");

	Params::AGameplayPC_StormMode_C_CreateEndWidget_Params Parms{};

	Parms.CycleCompleted = CycleCompleted;
	Parms.CallFunc_GetRunPlaytime_ReturnValue = CallFunc_GetRunPlaytime_ReturnValue;
	Parms.CallFunc_StormMode_GetCurrentShadeForCharacter_Shade = CallFunc_StormMode_GetCurrentShadeForCharacter_Shade;
	Parms.K2Node_DynamicCast_AsCharacter_Util_Interface = K2Node_DynamicCast_AsCharacter_Util_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_0_Base_GetCurrentWeapon_CurrentWeapon = CallFunc_0_Base_GetCurrentWeapon_CurrentWeapon;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.CheckMilestoneState_RunEnd
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Local_ID                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_Map_Keys_Keys                                           (ReferenceParm, HasGetValueTypeHash)
// bool                               CallFunc_IsMilestoneUnlocked_bUnlocked                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_IsMilestoneUnlocked_Current                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_IsMilestoneUnlocked_Percent                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_IsMilestoneUnlocked_Tier                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      CallFunc_IsMilestoneUnlocked_TiersX                              (ReferenceParm, HasGetValueTypeHash)
// bool                               CallFunc_IsMilestoneUnlocked_HasTier                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_StormMode_C::CheckMilestoneState_RunEnd(class FName Local_ID, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class FName>& CallFunc_Map_Keys_Keys, bool CallFunc_IsMilestoneUnlocked_bUnlocked, int32 CallFunc_IsMilestoneUnlocked_Current, float CallFunc_IsMilestoneUnlocked_Percent, int32 CallFunc_IsMilestoneUnlocked_Tier, TArray<int32>& CallFunc_IsMilestoneUnlocked_TiersX, bool CallFunc_IsMilestoneUnlocked_HasTier, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "CheckMilestoneState_RunEnd");

	Params::AGameplayPC_StormMode_C_CheckMilestoneState_RunEnd_Params Parms{};

	Parms.Local_ID = Local_ID;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_IsMilestoneUnlocked_bUnlocked = CallFunc_IsMilestoneUnlocked_bUnlocked;
	Parms.CallFunc_IsMilestoneUnlocked_Current = CallFunc_IsMilestoneUnlocked_Current;
	Parms.CallFunc_IsMilestoneUnlocked_Percent = CallFunc_IsMilestoneUnlocked_Percent;
	Parms.CallFunc_IsMilestoneUnlocked_Tier = CallFunc_IsMilestoneUnlocked_Tier;
	Parms.CallFunc_IsMilestoneUnlocked_TiersX = CallFunc_IsMilestoneUnlocked_TiersX;
	Parms.CallFunc_IsMilestoneUnlocked_HasTier = CallFunc_IsMilestoneUnlocked_HasTier;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.CheckMilestoneState_RunStart
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Local_ID                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMilestoneUnlocked_bUnlocked                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_IsMilestoneUnlocked_Current                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_IsMilestoneUnlocked_Percent                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_IsMilestoneUnlocked_Tier                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      CallFunc_IsMilestoneUnlocked_TiersX                              (ReferenceParm, HasGetValueTypeHash)
// bool                               CallFunc_IsMilestoneUnlocked_HasTier                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_StormMode_C::CheckMilestoneState_RunStart(class FName Local_ID, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsMilestoneUnlocked_bUnlocked, int32 CallFunc_IsMilestoneUnlocked_Current, float CallFunc_IsMilestoneUnlocked_Percent, int32 CallFunc_IsMilestoneUnlocked_Tier, TArray<int32>& CallFunc_IsMilestoneUnlocked_TiersX, bool CallFunc_IsMilestoneUnlocked_HasTier, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "CheckMilestoneState_RunStart");

	Params::AGameplayPC_StormMode_C_CheckMilestoneState_RunStart_Params Parms{};

	Parms.Local_ID = Local_ID;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsMilestoneUnlocked_bUnlocked = CallFunc_IsMilestoneUnlocked_bUnlocked;
	Parms.CallFunc_IsMilestoneUnlocked_Current = CallFunc_IsMilestoneUnlocked_Current;
	Parms.CallFunc_IsMilestoneUnlocked_Percent = CallFunc_IsMilestoneUnlocked_Percent;
	Parms.CallFunc_IsMilestoneUnlocked_Tier = CallFunc_IsMilestoneUnlocked_Tier;
	Parms.CallFunc_IsMilestoneUnlocked_TiersX = CallFunc_IsMilestoneUnlocked_TiersX;
	Parms.CallFunc_IsMilestoneUnlocked_HasTier = CallFunc_IsMilestoneUnlocked_HasTier;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.ShouldApplyHealEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Apply_                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Rune                Rune                                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_Character_C>K2Node_DynamicCast_AsBPI_Storm_Mode_Character                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_StormMode_C::ShouldApplyHealEffect(bool Apply_, const struct FStruct_Rune& Rune, bool K2Node_SwitchName_CmpSuccess, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, TScriptInterface<class IBPI_StormMode_Character_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Character, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "ShouldApplyHealEffect");

	Params::AGameplayPC_StormMode_C_ShouldApplyHealEffect_Params Parms{};

	Parms.Apply_ = Apply_;
	Parms.Rune = Rune;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_Character = K2Node_DynamicCast_AsBPI_Storm_Mode_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.DH_SetNamedInt
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_StormMode_C::DH_SetNamedInt(class FName Name, int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "DH_SetNamedInt");

	Params::AGameplayPC_StormMode_C_DH_SetNamedInt_Params Parms{};

	Parms.Name = Name;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.DH_PrintConcurrentEnemies
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void AGameplayPC_StormMode_C::DH_PrintConcurrentEnemies(const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "DH_PrintConcurrentEnemies");

	Params::AGameplayPC_StormMode_C_DH_PrintConcurrentEnemies_Params Parms{};

	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.DH_UnlockAllMilestones
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PreTier                                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_StormMode_C::DH_UnlockAllMilestones(int32 PreTier, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "DH_UnlockAllMilestones");

	Params::AGameplayPC_StormMode_C_DH_UnlockAllMilestones_Params Parms{};

	Parms.PreTier = PreTier;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.ShouldRemove10KTarOnDeath
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Remove                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNamedPCInt_Value                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_StormMode_C::ShouldRemove10KTarOnDeath(bool* Remove, int32 CallFunc_MakeLiteralInt_ReturnValue, int32 CallFunc_GetNamedPCInt_Value, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "ShouldRemove10KTarOnDeath");

	Params::AGameplayPC_StormMode_C_ShouldRemove10KTarOnDeath_Params Parms{};

	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.CallFunc_GetNamedPCInt_Value = CallFunc_GetNamedPCInt_Value;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Remove != nullptr)
		*Remove = Parms.Remove;

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.AddShadeAbility
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_GetRuneFromID_Found_                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Rune                CallFunc_GetRuneFromID_Rune                                      (HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_Character_C>K2Node_DynamicCast_AsBPI_Storm_Mode_Character                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Rune                CallFunc_GetMiscRuneFromID_Out_Row                               (HasGetValueTypeHash)
// struct FStruct_Rune                CallFunc_GetMiscRuneFromID_Out_Row_1                             (HasGetValueTypeHash)
// struct FStruct_Rune                CallFunc_GetMiscRuneFromID_Out_Row_2                             (HasGetValueTypeHash)
// struct FStruct_Rune                CallFunc_GetMiscRuneFromID_Out_Row_3                             (HasGetValueTypeHash)
// struct FStruct_Rune                CallFunc_GetMiscRuneFromID_Out_Row_4                             (HasGetValueTypeHash)
// bool                               CallFunc_GetRuneFromID_Found__1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Rune                CallFunc_GetRuneFromID_Rune_1                                    (HasGetValueTypeHash)
// bool                               CallFunc_GetRuneFromID_Found__2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Rune                CallFunc_GetRuneFromID_Rune_2                                    (HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABarbarous_C*                CallFunc_GetCharacterAsBarbarous_AsBarbarous                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetRuneFromID_Found__3                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Rune                CallFunc_GetRuneFromID_Rune_3                                    (HasGetValueTypeHash)
// bool                               CallFunc_GetRuneFromID_Found__4                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Rune                CallFunc_GetRuneFromID_Rune_4                                    (HasGetValueTypeHash)
// struct FStruct_Rune                CallFunc_GetMiscRuneFromID_Out_Row_5                             (HasGetValueTypeHash)
// bool                               CallFunc_GetRuneFromID_Found__5                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Rune                CallFunc_GetRuneFromID_Rune_5                                    (HasGetValueTypeHash)
// bool                               CallFunc_GetRuneFromID_Found__6                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Rune                CallFunc_GetRuneFromID_Rune_6                                    (HasGetValueTypeHash)
// bool                               CallFunc_GetRuneFromID_Found__7                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Rune                CallFunc_GetRuneFromID_Rune_7                                    (HasGetValueTypeHash)
// struct FStruct_Rune                CallFunc_GetMiscRuneFromID_Out_Row_6                             (HasGetValueTypeHash)
// struct FStruct_Rune                CallFunc_GetMiscRuneFromID_Out_Row_7                             (HasGetValueTypeHash)
// struct FStruct_Rune                CallFunc_GetMiscRuneFromID_Out_Row_8                             (HasGetValueTypeHash)
// struct FStruct_Rune                CallFunc_GetMiscRuneFromID_Out_Row_9                             (HasGetValueTypeHash)
// struct FStruct_Rune                CallFunc_GetMiscRuneFromID_Out_Row_10                            (HasGetValueTypeHash)
// struct FStruct_Rune                CallFunc_GetMiscRuneFromID_Out_Row_11                            (HasGetValueTypeHash)
// struct FStruct_Rune                CallFunc_GetMiscRuneFromID_Out_Row_12                            (HasGetValueTypeHash)
// struct FStruct_Rune                CallFunc_StormMode_AskRandomUpgrade_Upgrade                      (HasGetValueTypeHash)
// struct FStruct_Rune                CallFunc_StormMode_AskRandomUpgrade_Upgrade_1                    (HasGetValueTypeHash)
// struct FStruct_Rune                CallFunc_StormMode_AskRandomUpgrade_Upgrade_2                    (HasGetValueTypeHash)
// struct FStruct_Rune                CallFunc_StormMode_AskRandomUpgrade_Upgrade_3                    (HasGetValueTypeHash)
// struct FStruct_Rune                CallFunc_StormMode_AskRandomUpgrade_Upgrade_4                    (HasGetValueTypeHash)
// struct FStruct_Rune                CallFunc_StormMode_AskRandomDarkFormUpgrade_Rune                 (HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Rune                CallFunc_GetMiscRuneFromID_Out_Row_13                            (HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Rune                CallFunc_GetMiscRuneFromID_Out_Row_14                            (HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_StormMode_GetSelectedShell_HasSelected                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EArmorTypes             CallFunc_StormMode_GetSelectedShell_Shell                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_StormMode_C::AddShadeAbility(bool CallFunc_GetRuneFromID_Found_, const struct FStruct_Rune& CallFunc_GetRuneFromID_Rune, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, TScriptInterface<class IBPI_StormMode_Character_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Character, bool K2Node_DynamicCast_bSuccess, const struct FStruct_Rune& CallFunc_GetMiscRuneFromID_Out_Row, const struct FStruct_Rune& CallFunc_GetMiscRuneFromID_Out_Row_1, const struct FStruct_Rune& CallFunc_GetMiscRuneFromID_Out_Row_2, const struct FStruct_Rune& CallFunc_GetMiscRuneFromID_Out_Row_3, const struct FStruct_Rune& CallFunc_GetMiscRuneFromID_Out_Row_4, bool CallFunc_GetRuneFromID_Found__1, const struct FStruct_Rune& CallFunc_GetRuneFromID_Rune_1, bool CallFunc_GetRuneFromID_Found__2, const struct FStruct_Rune& CallFunc_GetRuneFromID_Rune_2, int32 CallFunc_MakeLiteralInt_ReturnValue, class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous, bool CallFunc_GetRuneFromID_Found__3, const struct FStruct_Rune& CallFunc_GetRuneFromID_Rune_3, bool CallFunc_GetRuneFromID_Found__4, const struct FStruct_Rune& CallFunc_GetRuneFromID_Rune_4, const struct FStruct_Rune& CallFunc_GetMiscRuneFromID_Out_Row_5, bool CallFunc_GetRuneFromID_Found__5, const struct FStruct_Rune& CallFunc_GetRuneFromID_Rune_5, bool CallFunc_GetRuneFromID_Found__6, const struct FStruct_Rune& CallFunc_GetRuneFromID_Rune_6, bool CallFunc_GetRuneFromID_Found__7, const struct FStruct_Rune& CallFunc_GetRuneFromID_Rune_7, const struct FStruct_Rune& CallFunc_GetMiscRuneFromID_Out_Row_6, const struct FStruct_Rune& CallFunc_GetMiscRuneFromID_Out_Row_7, const struct FStruct_Rune& CallFunc_GetMiscRuneFromID_Out_Row_8, const struct FStruct_Rune& CallFunc_GetMiscRuneFromID_Out_Row_9, const struct FStruct_Rune& CallFunc_GetMiscRuneFromID_Out_Row_10, const struct FStruct_Rune& CallFunc_GetMiscRuneFromID_Out_Row_11, const struct FStruct_Rune& CallFunc_GetMiscRuneFromID_Out_Row_12, const struct FStruct_Rune& CallFunc_StormMode_AskRandomUpgrade_Upgrade, const struct FStruct_Rune& CallFunc_StormMode_AskRandomUpgrade_Upgrade_1, const struct FStruct_Rune& CallFunc_StormMode_AskRandomUpgrade_Upgrade_2, const struct FStruct_Rune& CallFunc_StormMode_AskRandomUpgrade_Upgrade_3, const struct FStruct_Rune& CallFunc_StormMode_AskRandomUpgrade_Upgrade_4, const struct FStruct_Rune& CallFunc_StormMode_AskRandomDarkFormUpgrade_Rune, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FStruct_Rune& CallFunc_GetMiscRuneFromID_Out_Row_13, bool K2Node_SwitchEnum_CmpSuccess_2, bool K2Node_SwitchEnum_CmpSuccess_3, bool K2Node_SwitchEnum_CmpSuccess_4, const struct FStruct_Rune& CallFunc_GetMiscRuneFromID_Out_Row_14, bool K2Node_SwitchEnum_CmpSuccess_5, bool CallFunc_StormMode_GetSelectedShell_HasSelected, enum class EArmorTypes CallFunc_StormMode_GetSelectedShell_Shell, bool K2Node_SwitchEnum_CmpSuccess_6)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "AddShadeAbility");

	Params::AGameplayPC_StormMode_C_AddShadeAbility_Params Parms{};

	Parms.CallFunc_GetRuneFromID_Found_ = CallFunc_GetRuneFromID_Found_;
	Parms.CallFunc_GetRuneFromID_Rune = CallFunc_GetRuneFromID_Rune;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_Character = K2Node_DynamicCast_AsBPI_Storm_Mode_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetMiscRuneFromID_Out_Row = CallFunc_GetMiscRuneFromID_Out_Row;
	Parms.CallFunc_GetMiscRuneFromID_Out_Row_1 = CallFunc_GetMiscRuneFromID_Out_Row_1;
	Parms.CallFunc_GetMiscRuneFromID_Out_Row_2 = CallFunc_GetMiscRuneFromID_Out_Row_2;
	Parms.CallFunc_GetMiscRuneFromID_Out_Row_3 = CallFunc_GetMiscRuneFromID_Out_Row_3;
	Parms.CallFunc_GetMiscRuneFromID_Out_Row_4 = CallFunc_GetMiscRuneFromID_Out_Row_4;
	Parms.CallFunc_GetRuneFromID_Found__1 = CallFunc_GetRuneFromID_Found__1;
	Parms.CallFunc_GetRuneFromID_Rune_1 = CallFunc_GetRuneFromID_Rune_1;
	Parms.CallFunc_GetRuneFromID_Found__2 = CallFunc_GetRuneFromID_Found__2;
	Parms.CallFunc_GetRuneFromID_Rune_2 = CallFunc_GetRuneFromID_Rune_2;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.CallFunc_GetCharacterAsBarbarous_AsBarbarous = CallFunc_GetCharacterAsBarbarous_AsBarbarous;
	Parms.CallFunc_GetRuneFromID_Found__3 = CallFunc_GetRuneFromID_Found__3;
	Parms.CallFunc_GetRuneFromID_Rune_3 = CallFunc_GetRuneFromID_Rune_3;
	Parms.CallFunc_GetRuneFromID_Found__4 = CallFunc_GetRuneFromID_Found__4;
	Parms.CallFunc_GetRuneFromID_Rune_4 = CallFunc_GetRuneFromID_Rune_4;
	Parms.CallFunc_GetMiscRuneFromID_Out_Row_5 = CallFunc_GetMiscRuneFromID_Out_Row_5;
	Parms.CallFunc_GetRuneFromID_Found__5 = CallFunc_GetRuneFromID_Found__5;
	Parms.CallFunc_GetRuneFromID_Rune_5 = CallFunc_GetRuneFromID_Rune_5;
	Parms.CallFunc_GetRuneFromID_Found__6 = CallFunc_GetRuneFromID_Found__6;
	Parms.CallFunc_GetRuneFromID_Rune_6 = CallFunc_GetRuneFromID_Rune_6;
	Parms.CallFunc_GetRuneFromID_Found__7 = CallFunc_GetRuneFromID_Found__7;
	Parms.CallFunc_GetRuneFromID_Rune_7 = CallFunc_GetRuneFromID_Rune_7;
	Parms.CallFunc_GetMiscRuneFromID_Out_Row_6 = CallFunc_GetMiscRuneFromID_Out_Row_6;
	Parms.CallFunc_GetMiscRuneFromID_Out_Row_7 = CallFunc_GetMiscRuneFromID_Out_Row_7;
	Parms.CallFunc_GetMiscRuneFromID_Out_Row_8 = CallFunc_GetMiscRuneFromID_Out_Row_8;
	Parms.CallFunc_GetMiscRuneFromID_Out_Row_9 = CallFunc_GetMiscRuneFromID_Out_Row_9;
	Parms.CallFunc_GetMiscRuneFromID_Out_Row_10 = CallFunc_GetMiscRuneFromID_Out_Row_10;
	Parms.CallFunc_GetMiscRuneFromID_Out_Row_11 = CallFunc_GetMiscRuneFromID_Out_Row_11;
	Parms.CallFunc_GetMiscRuneFromID_Out_Row_12 = CallFunc_GetMiscRuneFromID_Out_Row_12;
	Parms.CallFunc_StormMode_AskRandomUpgrade_Upgrade = CallFunc_StormMode_AskRandomUpgrade_Upgrade;
	Parms.CallFunc_StormMode_AskRandomUpgrade_Upgrade_1 = CallFunc_StormMode_AskRandomUpgrade_Upgrade_1;
	Parms.CallFunc_StormMode_AskRandomUpgrade_Upgrade_2 = CallFunc_StormMode_AskRandomUpgrade_Upgrade_2;
	Parms.CallFunc_StormMode_AskRandomUpgrade_Upgrade_3 = CallFunc_StormMode_AskRandomUpgrade_Upgrade_3;
	Parms.CallFunc_StormMode_AskRandomUpgrade_Upgrade_4 = CallFunc_StormMode_AskRandomUpgrade_Upgrade_4;
	Parms.CallFunc_StormMode_AskRandomDarkFormUpgrade_Rune = CallFunc_StormMode_AskRandomDarkFormUpgrade_Rune;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_GetMiscRuneFromID_Out_Row_13 = CallFunc_GetMiscRuneFromID_Out_Row_13;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;
	Parms.K2Node_SwitchEnum_CmpSuccess_4 = K2Node_SwitchEnum_CmpSuccess_4;
	Parms.CallFunc_GetMiscRuneFromID_Out_Row_14 = CallFunc_GetMiscRuneFromID_Out_Row_14;
	Parms.K2Node_SwitchEnum_CmpSuccess_5 = K2Node_SwitchEnum_CmpSuccess_5;
	Parms.CallFunc_StormMode_GetSelectedShell_HasSelected = CallFunc_StormMode_GetSelectedShell_HasSelected;
	Parms.CallFunc_StormMode_GetSelectedShell_Shell = CallFunc_StormMode_GetSelectedShell_Shell;
	Parms.K2Node_SwitchEnum_CmpSuccess_6 = K2Node_SwitchEnum_CmpSuccess_6;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.DH_UnlockMilestone
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              PreTier                                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_StormMode_C::DH_UnlockMilestone(class FName ID, int32 PreTier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "DH_UnlockMilestone");

	Params::AGameplayPC_StormMode_C_DH_UnlockMilestone_Params Parms{};

	Parms.ID = ID;
	Parms.PreTier = PreTier;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.DH_SetMilestoneProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              PreTier                                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_StormMode_C::DH_SetMilestoneProgress(class FName ID, int32 Value, int32 PreTier, int32 CallFunc_MakeLiteralInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "DH_SetMilestoneProgress");

	Params::AGameplayPC_StormMode_C_DH_SetMilestoneProgress_Params Parms{};

	Parms.ID = ID;
	Parms.Value = Value;
	Parms.PreTier = PreTier;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.HandleMilestoneUnlocked
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LastUnlockedTier                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsConsoleCommand                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Local_UnlockID                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_ConsoleCommand                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<int32>                      Local_XValues                                                    (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              Local_Tier                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Local_ID                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAllShadeUnlocked_bYes                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// struct FStruct_MilestoneUnlock     CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_StormMode_C::HandleMilestoneUnlocked(class FName ID, int32 LastUnlockedTier, bool IsConsoleCommand, class FName Local_UnlockID, bool Local_ConsoleCommand, const TArray<int32>& Local_XValues, int32 Local_Tier, class FName Local_ID, bool CallFunc_IsAllShadeUnlocked_bYes, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const struct FStruct_MilestoneUnlock& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, int32 CallFunc_MakeLiteralInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "HandleMilestoneUnlocked");

	Params::AGameplayPC_StormMode_C_HandleMilestoneUnlocked_Params Parms{};

	Parms.ID = ID;
	Parms.LastUnlockedTier = LastUnlockedTier;
	Parms.IsConsoleCommand = IsConsoleCommand;
	Parms.Local_UnlockID = Local_UnlockID;
	Parms.Local_ConsoleCommand = Local_ConsoleCommand;
	Parms.Local_XValues = Local_XValues;
	Parms.Local_Tier = Local_Tier;
	Parms.Local_ID = Local_ID;
	Parms.CallFunc_IsAllShadeUnlocked_bYes = CallFunc_IsAllShadeUnlocked_bYes;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.GetBeatMilestoneNameForShell
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EArmorTypes             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FName AGameplayPC_StormMode_C::GetBeatMilestoneNameForShell(enum class EArmorTypes Temp_byte_Variable, class FName Temp_name_Variable, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, class FName Temp_name_Variable_3, class FName Temp_name_Variable_4, class FName Temp_name_Variable_5, class FName K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "GetBeatMilestoneNameForShell");

	Params::AGameplayPC_StormMode_C_GetBeatMilestoneNameForShell_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.Temp_name_Variable_2 = Temp_name_Variable_2;
	Parms.Temp_name_Variable_3 = Temp_name_Variable_3;
	Parms.Temp_name_Variable_4 = Temp_name_Variable_4;
	Parms.Temp_name_Variable_5 = Temp_name_Variable_5;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.Storm Mode Reset Milestones on Death
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Local_Reset                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Local_ID                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMilestoneUnlocked_bUnlocked                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_IsMilestoneUnlocked_Current                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_IsMilestoneUnlocked_Percent                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_IsMilestoneUnlocked_Tier                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      CallFunc_IsMilestoneUnlocked_TiersX                              (ReferenceParm, HasGetValueTypeHash)
// bool                               CallFunc_IsMilestoneUnlocked_HasTier                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_MilestoneUnlock     CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_StormMode_C::Storm_Mode_Reset_Milestones_on_Death(bool Local_Reset, class FName Local_ID, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsMilestoneUnlocked_bUnlocked, int32 CallFunc_IsMilestoneUnlocked_Current, float CallFunc_IsMilestoneUnlocked_Percent, int32 CallFunc_IsMilestoneUnlocked_Tier, TArray<int32>& CallFunc_IsMilestoneUnlocked_TiersX, bool CallFunc_IsMilestoneUnlocked_HasTier, int32 CallFunc_MakeLiteralInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FStruct_MilestoneUnlock& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "Storm Mode Reset Milestones on Death");

	Params::AGameplayPC_StormMode_C_Storm_Mode_Reset_Milestones_on_Death_Params Parms{};

	Parms.Local_Reset = Local_Reset;
	Parms.Local_ID = Local_ID;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsMilestoneUnlocked_bUnlocked = CallFunc_IsMilestoneUnlocked_bUnlocked;
	Parms.CallFunc_IsMilestoneUnlocked_Current = CallFunc_IsMilestoneUnlocked_Current;
	Parms.CallFunc_IsMilestoneUnlocked_Percent = CallFunc_IsMilestoneUnlocked_Percent;
	Parms.CallFunc_IsMilestoneUnlocked_Tier = CallFunc_IsMilestoneUnlocked_Tier;
	Parms.CallFunc_IsMilestoneUnlocked_TiersX = CallFunc_IsMilestoneUnlocked_TiersX;
	Parms.CallFunc_IsMilestoneUnlocked_HasTier = CallFunc_IsMilestoneUnlocked_HasTier;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.UpdateMilestonesOnInstinctGained_Internal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Local_WeaponTier                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Local_WeaponProgress                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_ShellTier                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Local_ShellProgress                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Local_WeaponID                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Local_ShellID                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue_1                        (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNamedPCInt_Value                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNamedPCInt_Value_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMilestoneUnlocked_bUnlocked                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_IsMilestoneUnlocked_Current                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_IsMilestoneUnlocked_Percent                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_IsMilestoneUnlocked_Tier                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      CallFunc_IsMilestoneUnlocked_TiersX                              (ReferenceParm, HasGetValueTypeHash)
// bool                               CallFunc_IsMilestoneUnlocked_HasTier                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMilestoneUnlocked_bUnlocked_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_IsMilestoneUnlocked_Current_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_IsMilestoneUnlocked_Percent_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_IsMilestoneUnlocked_Tier_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      CallFunc_IsMilestoneUnlocked_TiersX_1                            (ReferenceParm, HasGetValueTypeHash)
// bool                               CallFunc_IsMilestoneUnlocked_HasTier_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetMilestoneCheckID_PillarShell_ID                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetMilestoneCheckID_PillarWeapon_ID                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_StormMode_C::UpdateMilestonesOnInstinctGained_Internal(int32 Local_WeaponTier, float Local_WeaponProgress, int32 Local_ShellTier, float Local_ShellProgress, class FName Local_WeaponID, class FName Local_ShellID, class FName CallFunc_MakeLiteralName_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue_1, class FName CallFunc_MakeLiteralName_ReturnValue_1, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, int32 CallFunc_GetNamedPCInt_Value, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, int32 CallFunc_GetNamedPCInt_Value_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, class FName CallFunc_MakeLiteralName_ReturnValue_2, int32 CallFunc_MakeLiteralInt_ReturnValue, bool CallFunc_IsMilestoneUnlocked_bUnlocked, int32 CallFunc_IsMilestoneUnlocked_Current, float CallFunc_IsMilestoneUnlocked_Percent, int32 CallFunc_IsMilestoneUnlocked_Tier, TArray<int32>& CallFunc_IsMilestoneUnlocked_TiersX, bool CallFunc_IsMilestoneUnlocked_HasTier, class FName CallFunc_MakeLiteralName_ReturnValue_3, int32 CallFunc_MakeLiteralInt_ReturnValue_1, bool CallFunc_IsMilestoneUnlocked_bUnlocked_1, int32 CallFunc_IsMilestoneUnlocked_Current_1, float CallFunc_IsMilestoneUnlocked_Percent_1, int32 CallFunc_IsMilestoneUnlocked_Tier_1, TArray<int32>& CallFunc_IsMilestoneUnlocked_TiersX_1, bool CallFunc_IsMilestoneUnlocked_HasTier_1, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, class FName CallFunc_GetMilestoneCheckID_PillarShell_ID, class FName CallFunc_GetMilestoneCheckID_PillarWeapon_ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "UpdateMilestonesOnInstinctGained_Internal");

	Params::AGameplayPC_StormMode_C_UpdateMilestonesOnInstinctGained_Internal_Params Parms{};

	Parms.Local_WeaponTier = Local_WeaponTier;
	Parms.Local_WeaponProgress = Local_WeaponProgress;
	Parms.Local_ShellTier = Local_ShellTier;
	Parms.Local_ShellProgress = Local_ShellProgress;
	Parms.Local_WeaponID = Local_WeaponID;
	Parms.Local_ShellID = Local_ShellID;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_Conv_FloatToString_ReturnValue = CallFunc_Conv_FloatToString_ReturnValue;
	Parms.CallFunc_Conv_FloatToString_ReturnValue_1 = CallFunc_Conv_FloatToString_ReturnValue_1;
	Parms.CallFunc_MakeLiteralName_ReturnValue_1 = CallFunc_MakeLiteralName_ReturnValue_1;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_GetNamedPCInt_Value = CallFunc_GetNamedPCInt_Value;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue_1 = CallFunc_Conv_NameToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_GetNamedPCInt_Value_1 = CallFunc_GetNamedPCInt_Value_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_MakeLiteralName_ReturnValue_2 = CallFunc_MakeLiteralName_ReturnValue_2;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.CallFunc_IsMilestoneUnlocked_bUnlocked = CallFunc_IsMilestoneUnlocked_bUnlocked;
	Parms.CallFunc_IsMilestoneUnlocked_Current = CallFunc_IsMilestoneUnlocked_Current;
	Parms.CallFunc_IsMilestoneUnlocked_Percent = CallFunc_IsMilestoneUnlocked_Percent;
	Parms.CallFunc_IsMilestoneUnlocked_Tier = CallFunc_IsMilestoneUnlocked_Tier;
	Parms.CallFunc_IsMilestoneUnlocked_TiersX = CallFunc_IsMilestoneUnlocked_TiersX;
	Parms.CallFunc_IsMilestoneUnlocked_HasTier = CallFunc_IsMilestoneUnlocked_HasTier;
	Parms.CallFunc_MakeLiteralName_ReturnValue_3 = CallFunc_MakeLiteralName_ReturnValue_3;
	Parms.CallFunc_MakeLiteralInt_ReturnValue_1 = CallFunc_MakeLiteralInt_ReturnValue_1;
	Parms.CallFunc_IsMilestoneUnlocked_bUnlocked_1 = CallFunc_IsMilestoneUnlocked_bUnlocked_1;
	Parms.CallFunc_IsMilestoneUnlocked_Current_1 = CallFunc_IsMilestoneUnlocked_Current_1;
	Parms.CallFunc_IsMilestoneUnlocked_Percent_1 = CallFunc_IsMilestoneUnlocked_Percent_1;
	Parms.CallFunc_IsMilestoneUnlocked_Tier_1 = CallFunc_IsMilestoneUnlocked_Tier_1;
	Parms.CallFunc_IsMilestoneUnlocked_TiersX_1 = CallFunc_IsMilestoneUnlocked_TiersX_1;
	Parms.CallFunc_IsMilestoneUnlocked_HasTier_1 = CallFunc_IsMilestoneUnlocked_HasTier_1;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base = CallFunc_GetCharacterAs0_Base_As0_Base;
	Parms.CallFunc_GetMilestoneCheckID_PillarShell_ID = CallFunc_GetMilestoneCheckID_PillarShell_ID;
	Parms.CallFunc_GetMilestoneCheckID_PillarWeapon_ID = CallFunc_GetMilestoneCheckID_PillarWeapon_ID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.GetMilestoneCheckID_PillarShell
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EArmorTypes             Shell                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ID                                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EArmorTypes             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_StormMode_C::GetMilestoneCheckID_PillarShell(enum class EArmorTypes Shell, class FName* ID, enum class EArmorTypes Temp_byte_Variable, class FName Temp_name_Variable, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, class FName Temp_name_Variable_3, class FName Temp_name_Variable_4, class FName Temp_name_Variable_5, class FName K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "GetMilestoneCheckID_PillarShell");

	Params::AGameplayPC_StormMode_C_GetMilestoneCheckID_PillarShell_Params Parms{};

	Parms.Shell = Shell;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.Temp_name_Variable_2 = Temp_name_Variable_2;
	Parms.Temp_name_Variable_3 = Temp_name_Variable_3;
	Parms.Temp_name_Variable_4 = Temp_name_Variable_4;
	Parms.Temp_name_Variable_5 = Temp_name_Variable_5;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (ID != nullptr)
		*ID = Parms.ID;

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.GetMilestoneCheckID_PillarWeapon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EComboTypes             Weapon                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ID                                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EComboTypes             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_StormMode_C::GetMilestoneCheckID_PillarWeapon(enum class EComboTypes Weapon, class FName* ID, enum class EComboTypes Temp_byte_Variable, class FName Temp_name_Variable, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, class FName Temp_name_Variable_3, class FName Temp_name_Variable_4, class FName Temp_name_Variable_5, class FName Temp_name_Variable_6, class FName K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "GetMilestoneCheckID_PillarWeapon");

	Params::AGameplayPC_StormMode_C_GetMilestoneCheckID_PillarWeapon_Params Parms{};

	Parms.Weapon = Weapon;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.Temp_name_Variable_2 = Temp_name_Variable_2;
	Parms.Temp_name_Variable_3 = Temp_name_Variable_3;
	Parms.Temp_name_Variable_4 = Temp_name_Variable_4;
	Parms.Temp_name_Variable_5 = Temp_name_Variable_5;
	Parms.Temp_name_Variable_6 = Temp_name_Variable_6;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (ID != nullptr)
		*ID = Parms.ID;

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.SetMilestoneProgress
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Local_PreProgress                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Local_PostProgress                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_UnlockedTier                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_PostTier                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_PostUnlocked                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_PreUnlocked                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Local_Value                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Local_ID                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              PreTier                                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue_1                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNamedPCInt_Value                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_7                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_8                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMilestoneUnlocked_bUnlocked                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_IsMilestoneUnlocked_Current                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_IsMilestoneUnlocked_Percent                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_IsMilestoneUnlocked_Tier                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      CallFunc_IsMilestoneUnlocked_TiersX                              (ReferenceParm, HasGetValueTypeHash)
// bool                               CallFunc_IsMilestoneUnlocked_HasTier                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsMilestoneUnlocked_bUnlocked_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_IsMilestoneUnlocked_Current_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_IsMilestoneUnlocked_Percent_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_IsMilestoneUnlocked_Tier_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      CallFunc_IsMilestoneUnlocked_TiersX_1                            (ReferenceParm, HasGetValueTypeHash)
// bool                               CallFunc_IsMilestoneUnlocked_HasTier_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_StormMode_C::SetMilestoneProgress(class FName ID, int32 Value, float Local_PreProgress, float Local_PostProgress, int32 Local_UnlockedTier, int32 Local_PostTier, bool Local_PostUnlocked, bool Local_PreUnlocked, int32 Local_Value, class FName Local_ID, int32 PreTier, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue_1, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, int32 CallFunc_SelectInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, int32 CallFunc_Subtract_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, bool CallFunc_Not_PreBool_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, int32 CallFunc_GetNamedPCInt_Value, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, bool CallFunc_IsMilestoneUnlocked_bUnlocked, int32 CallFunc_IsMilestoneUnlocked_Current, float CallFunc_IsMilestoneUnlocked_Percent, int32 CallFunc_IsMilestoneUnlocked_Tier, TArray<int32>& CallFunc_IsMilestoneUnlocked_TiersX, bool CallFunc_IsMilestoneUnlocked_HasTier, bool CallFunc_IsMilestoneUnlocked_bUnlocked_1, int32 CallFunc_IsMilestoneUnlocked_Current_1, float CallFunc_IsMilestoneUnlocked_Percent_1, int32 CallFunc_IsMilestoneUnlocked_Tier_1, TArray<int32>& CallFunc_IsMilestoneUnlocked_TiersX_1, bool CallFunc_IsMilestoneUnlocked_HasTier_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "SetMilestoneProgress");

	Params::AGameplayPC_StormMode_C_SetMilestoneProgress_Params Parms{};

	Parms.ID = ID;
	Parms.Value = Value;
	Parms.Local_PreProgress = Local_PreProgress;
	Parms.Local_PostProgress = Local_PostProgress;
	Parms.Local_UnlockedTier = Local_UnlockedTier;
	Parms.Local_PostTier = Local_PostTier;
	Parms.Local_PostUnlocked = Local_PostUnlocked;
	Parms.Local_PreUnlocked = Local_PreUnlocked;
	Parms.Local_Value = Local_Value;
	Parms.Local_ID = Local_ID;
	Parms.PreTier = PreTier;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Conv_FloatToString_ReturnValue = CallFunc_Conv_FloatToString_ReturnValue;
	Parms.CallFunc_Conv_FloatToString_ReturnValue_1 = CallFunc_Conv_FloatToString_ReturnValue_1;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue_1 = CallFunc_GreaterEqual_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_1 = CallFunc_Less_FloatFloat_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue_1 = CallFunc_Conv_NameToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.CallFunc_GetNamedPCInt_Value = CallFunc_GetNamedPCInt_Value;
	Parms.CallFunc_Concat_StrStr_ReturnValue_7 = CallFunc_Concat_StrStr_ReturnValue_7;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_8 = CallFunc_Concat_StrStr_ReturnValue_8;
	Parms.CallFunc_IsMilestoneUnlocked_bUnlocked = CallFunc_IsMilestoneUnlocked_bUnlocked;
	Parms.CallFunc_IsMilestoneUnlocked_Current = CallFunc_IsMilestoneUnlocked_Current;
	Parms.CallFunc_IsMilestoneUnlocked_Percent = CallFunc_IsMilestoneUnlocked_Percent;
	Parms.CallFunc_IsMilestoneUnlocked_Tier = CallFunc_IsMilestoneUnlocked_Tier;
	Parms.CallFunc_IsMilestoneUnlocked_TiersX = CallFunc_IsMilestoneUnlocked_TiersX;
	Parms.CallFunc_IsMilestoneUnlocked_HasTier = CallFunc_IsMilestoneUnlocked_HasTier;
	Parms.CallFunc_IsMilestoneUnlocked_bUnlocked_1 = CallFunc_IsMilestoneUnlocked_bUnlocked_1;
	Parms.CallFunc_IsMilestoneUnlocked_Current_1 = CallFunc_IsMilestoneUnlocked_Current_1;
	Parms.CallFunc_IsMilestoneUnlocked_Percent_1 = CallFunc_IsMilestoneUnlocked_Percent_1;
	Parms.CallFunc_IsMilestoneUnlocked_Tier_1 = CallFunc_IsMilestoneUnlocked_Tier_1;
	Parms.CallFunc_IsMilestoneUnlocked_TiersX_1 = CallFunc_IsMilestoneUnlocked_TiersX_1;
	Parms.CallFunc_IsMilestoneUnlocked_HasTier_1 = CallFunc_IsMilestoneUnlocked_HasTier_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.GetPercentForTier
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<int32>                      Tiers                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// int32                              Level                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentValue                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Percent                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_CurrentValue                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_Tier                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      Local_Tiers                                                      (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_StormMode_C::GetPercentForTier(TArray<int32>& Tiers, int32 Level, int32 CurrentValue, float* Percent, int32 Local_CurrentValue, int32 Local_Tier, const TArray<int32>& Local_Tiers, int32 CallFunc_Array_Get_Item, int32 CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, int32 CallFunc_Array_Get_Item_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Array_Get_Item_2, int32 CallFunc_Subtract_IntInt_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue_3, float CallFunc_Conv_IntToFloat_ReturnValue_2, int32 CallFunc_Array_Get_Item_3, int32 CallFunc_Subtract_IntInt_ReturnValue_4, bool CallFunc_Array_IsValidIndex_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_3, float CallFunc_Divide_FloatFloat_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "GetPercentForTier");

	Params::AGameplayPC_StormMode_C_GetPercentForTier_Params Parms{};

	Parms.Tiers = Tiers;
	Parms.Level = Level;
	Parms.CurrentValue = CurrentValue;
	Parms.Local_CurrentValue = Local_CurrentValue;
	Parms.Local_Tier = Local_Tier;
	Parms.Local_Tiers = Local_Tiers;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_2 = CallFunc_Subtract_IntInt_ReturnValue_2;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_3 = CallFunc_Subtract_IntInt_ReturnValue_3;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_2 = CallFunc_Conv_IntToFloat_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_4 = CallFunc_Subtract_IntInt_ReturnValue_4;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_3 = CallFunc_Conv_IntToFloat_ReturnValue_3;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Percent != nullptr)
		*Percent = Parms.Percent;

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.LoadDataFromBaseGame
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Local_LoreEntry                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                Local_TutorialsUnlocked                                          (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<class FName>                Local_UnlockedItems_BaseGame                                     (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<class FName>                Local_Lore_Names                                                 (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                K2Node_MakeArray_Array_1                                         (ReferenceParm, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_StormMode_C::LoadDataFromBaseGame(bool* Success, class FName Local_LoreEntry, const TArray<class FName>& Local_TutorialsUnlocked, const TArray<class FName>& Local_UnlockedItems_BaseGame, const TArray<class FName>& Local_Lore_Names, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, TArray<class FName>& K2Node_MakeArray_Array, int32 Temp_int_Loop_Counter_Variable_1, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_AddUnique_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue_1, TArray<class FName>& K2Node_MakeArray_Array_1, bool CallFunc_Array_Contains_ReturnValue, class FName Temp_name_Variable, class FName CallFunc_Array_Get_Item_1, int32 CallFunc_Array_AddUnique_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "LoadDataFromBaseGame");

	Params::AGameplayPC_StormMode_C_LoadDataFromBaseGame_Params Parms{};

	Parms.Local_LoreEntry = Local_LoreEntry;
	Parms.Local_TutorialsUnlocked = Local_TutorialsUnlocked;
	Parms.Local_UnlockedItems_BaseGame = Local_UnlockedItems_BaseGame;
	Parms.Local_Lore_Names = Local_Lore_Names;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue_1 = CallFunc_Array_AddUnique_ReturnValue_1;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_AddUnique_ReturnValue_2 = CallFunc_Array_AddUnique_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.DiscoverTeleportTokenItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_StormMode_C::DiscoverTeleportTokenItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "DiscoverTeleportTokenItem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.StormMode_UpdateCurrentCheckpoint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CurrentMainLevel                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CurrentSubLevel                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CurrentCheckpoint                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CurrentCheckpointTransform                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)

void AGameplayPC_StormMode_C::StormMode_UpdateCurrentCheckpoint(class FName CurrentMainLevel, class FName CurrentSubLevel, class FName CurrentCheckpoint, const struct FTransform& CurrentCheckpointTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "StormMode_UpdateCurrentCheckpoint");

	Params::AGameplayPC_StormMode_C_StormMode_UpdateCurrentCheckpoint_Params Parms{};

	Parms.CurrentMainLevel = CurrentMainLevel;
	Parms.CurrentSubLevel = CurrentSubLevel;
	Parms.CurrentCheckpoint = CurrentCheckpoint;
	Parms.CurrentCheckpointTransform = CurrentCheckpointTransform;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.UpdateCheckpoint_OnGlandTaken
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  Local_Transform                                                  (Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetTeleportTransform_Transform                          (IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_StormMode_C::UpdateCheckpoint_OnGlandTaken(const struct FTransform& Local_Transform, bool CallFunc_IsValid_ReturnValue, const struct FTransform& CallFunc_GetTeleportTransform_Transform, bool CallFunc_IsValid_ReturnValue_1, bool K2Node_SwitchString_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "UpdateCheckpoint_OnGlandTaken");

	Params::AGameplayPC_StormMode_C_UpdateCheckpoint_OnGlandTaken_Params Parms{};

	Parms.Local_Transform = Local_Transform;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetTeleportTransform_Transform = CallFunc_GetTeleportTransform_Transform;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.CloseReturnPath
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_AreaBlocker_C*>   CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_AreaBlocker_C*           CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_StormMode_C::CloseReturnPath(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class ABP_AreaBlocker_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, class ABP_AreaBlocker_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "CloseReturnPath");

	Params::AGameplayPC_StormMode_C_CloseReturnPath_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.OnChaliceUnlocked_Teleport
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_StormMode_C::OnChaliceUnlocked_Teleport(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "OnChaliceUnlocked_Teleport");

	Params::AGameplayPC_StormMode_C_OnChaliceUnlocked_Teleport_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.OnOpenArea_Teleport
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayGM_C*               CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayGM_C*               CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayGM_C*               CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_StormMode_C::OnOpenArea_Teleport(class FName ID, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool K2Node_SwitchName_CmpSuccess, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC, bool K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1, bool K2Node_DynamicCast_bSuccess_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC_2, bool K2Node_DynamicCast_bSuccess_2, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "OnOpenArea_Teleport");

	Params::AGameplayPC_StormMode_C_OnOpenArea_Teleport_Params Parms{};

	Parms.ID = ID;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC = K2Node_DynamicCast_AsBPI_Storm_Mode_PC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1 = K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC_2 = K2Node_DynamicCast_AsBPI_Storm_Mode_PC_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM = CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM;
	Parms.CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_1 = CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_2 = CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.OnOpenArea_IncreaseProgress_v2
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_StormMode_C::OnOpenArea_IncreaseProgress_v2(bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "OnOpenArea_IncreaseProgress_v2");

	Params::AGameplayPC_StormMode_C_OnOpenArea_IncreaseProgress_v2_Params Parms{};

	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.HasAnyGland?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckForItem_Success                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckForItem_Success_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckForItem_Success_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

bool AGameplayPC_StormMode_C::HasAnyGland_(bool CallFunc_CheckForItem_Success, bool CallFunc_CheckForItem_Success_1, bool CallFunc_CheckForItem_Success_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "HasAnyGland?");

	Params::AGameplayPC_StormMode_C_HasAnyGland__Params Parms{};

	Parms.CallFunc_CheckForItem_Success = CallFunc_CheckForItem_Success;
	Parms.CallFunc_CheckForItem_Success_1 = CallFunc_CheckForItem_Success_1;
	Parms.CallFunc_CheckForItem_Success_2 = CallFunc_CheckForItem_Success_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.CheckForItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasItem_Success                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_HasItem_InventorySlot                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_HasItem_Amount                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_StormMode_C::CheckForItem(class FName ItemId, bool* Success, bool CallFunc_HasItem_Success, int32 CallFunc_HasItem_InventorySlot, int32 CallFunc_HasItem_Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "CheckForItem");

	Params::AGameplayPC_StormMode_C_CheckForItem_Params Parms{};

	Parms.ItemId = ItemId;
	Parms.CallFunc_HasItem_Success = CallFunc_HasItem_Success;
	Parms.CallFunc_HasItem_InventorySlot = CallFunc_HasItem_InventorySlot;
	Parms.CallFunc_HasItem_Amount = CallFunc_HasItem_Amount;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.DH_PrintRunPlaytime
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDateTime                   CallFunc_GetRunPlaytime_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetPlaytimeFromDate_ReturnValue                         (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void AGameplayPC_StormMode_C::DH_PrintRunPlaytime(const struct FDateTime& CallFunc_GetRunPlaytime_ReturnValue, class FText CallFunc_GetPlaytimeFromDate_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "DH_PrintRunPlaytime");

	Params::AGameplayPC_StormMode_C_DH_PrintRunPlaytime_Params Parms{};

	Parms.CallFunc_GetRunPlaytime_ReturnValue = CallFunc_GetRunPlaytime_ReturnValue;
	Parms.CallFunc_GetPlaytimeFromDate_ReturnValue = CallFunc_GetPlaytimeFromDate_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.AddRunData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_1                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_2                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_3                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDateTime                   CallFunc_GetRunPlaytime_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Map_Find_Value_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_StormModeRun_Data   K2Node_MakeStruct_Struct_StormModeRun_Data                       (HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_StormMode_C::AddRunData(int32 Temp_int_Variable, class FName Temp_name_Variable, int32 Temp_int_Variable_1, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, class FName Temp_name_Variable_3, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FDateTime& CallFunc_GetRunPlaytime_ReturnValue, int32 CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, const struct FStruct_StormModeRun_Data& K2Node_MakeStruct_Struct_StormModeRun_Data, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "AddRunData");

	Params::AGameplayPC_StormMode_C_AddRunData_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.Temp_name_Variable_2 = Temp_name_Variable_2;
	Parms.Temp_name_Variable_3 = Temp_name_Variable_3;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_GetRunPlaytime_ReturnValue = CallFunc_GetRunPlaytime_ReturnValue;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.K2Node_MakeStruct_Struct_StormModeRun_Data = K2Node_MakeStruct_Struct_StormModeRun_Data;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.HandlePlayerHealthOnLoad
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsStormModeStart                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              PlayerMaxHealth                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              PlayerHealthFromSave                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_StormModeStart                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EArmorTypes             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_5                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_6                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_7                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_8                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_StormMode_GetHasJustStartedRun__Return                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable_9                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_10                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable_11                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EArmorTypes             Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_StormMode_C::HandlePlayerHealthOnLoad(bool IsStormModeStart, int32 PlayerMaxHealth, float PlayerHealthFromSave, bool Local_StormModeStart, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, enum class EArmorTypes Temp_byte_Variable, int32 Temp_int_Variable_3, int32 Temp_int_Variable_4, int32 Temp_int_Variable_5, int32 Temp_int_Variable_6, int32 Temp_int_Variable_7, int32 Temp_int_Variable_8, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_StormMode_GetHasJustStartedRun__Return, int32 Temp_int_Variable_9, int32 Temp_int_Variable_10, int32 K2Node_Select_Default, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 Temp_int_Variable_11, enum class EArmorTypes Temp_byte_Variable_1, bool CallFunc_NotEqual_ByteByte_ReturnValue, int32 K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "HandlePlayerHealthOnLoad");

	Params::AGameplayPC_StormMode_C_HandlePlayerHealthOnLoad_Params Parms{};

	Parms.IsStormModeStart = IsStormModeStart;
	Parms.PlayerMaxHealth = PlayerMaxHealth;
	Parms.PlayerHealthFromSave = PlayerHealthFromSave;
	Parms.Local_StormModeStart = Local_StormModeStart;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_int_Variable_3 = Temp_int_Variable_3;
	Parms.Temp_int_Variable_4 = Temp_int_Variable_4;
	Parms.Temp_int_Variable_5 = Temp_int_Variable_5;
	Parms.Temp_int_Variable_6 = Temp_int_Variable_6;
	Parms.Temp_int_Variable_7 = Temp_int_Variable_7;
	Parms.Temp_int_Variable_8 = Temp_int_Variable_8;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_StormMode_GetHasJustStartedRun__Return = CallFunc_StormMode_GetHasJustStartedRun__Return;
	Parms.Temp_int_Variable_9 = Temp_int_Variable_9;
	Parms.Temp_int_Variable_10 = Temp_int_Variable_10;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.Temp_int_Variable_11 = Temp_int_Variable_11;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.StormMode_SpawnDeathStatue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_StormModeCheckpointSaveLocal_Save                                                       (Edit, BlueprintVisible, HasGetValueTypeHash)
// bool                               CallFunc_WasDarkFormOnDeath_Value                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_1                             (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AUseable_Player_Death_TarVFX_C*CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AUseable_Player_Death_Statue_C*CallFunc_FinishSpawningActor_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_CheckpointsSlotName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_CheckpointsSlotName_ReturnValue_1                       (ZeroConstructor, HasGetValueTypeHash)
// class UDHGameInstance*             CallFunc_GetInstance_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDHGameInstance*             CallFunc_GetInstance_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPrimaryUserIndex_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPrimaryUserIndex_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   CallFunc_DHLoadGameFromSlot_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesSaveGameExist_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCheckpointsSave_C*          K2Node_DynamicCast_AsCheckpoints_Save                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetCurrentPersistentLevelName_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_StormMode_C::StormMode_SpawnDeathStatue(const struct FStruct_StormModeCheckpointSave& Local_Save, bool CallFunc_WasDarkFormOnDeath_Value, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, class AUseable_Player_Death_TarVFX_C* CallFunc_FinishSpawningActor_ReturnValue, class AUseable_Player_Death_Statue_C* CallFunc_FinishSpawningActor_ReturnValue_1, const class FString& CallFunc_CheckpointsSlotName_ReturnValue, bool CallFunc_NotEqual_VectorVector_ReturnValue, const class FString& CallFunc_CheckpointsSlotName_ReturnValue_1, class UDHGameInstance* CallFunc_GetInstance_ReturnValue, class UDHGameInstance* CallFunc_GetInstance_ReturnValue_1, int32 CallFunc_GetPrimaryUserIndex_ReturnValue, int32 CallFunc_GetPrimaryUserIndex_ReturnValue_1, class USaveGame* CallFunc_DHLoadGameFromSlot_ReturnValue, bool CallFunc_DoesSaveGameExist_ReturnValue, class UCheckpointsSave_C* K2Node_DynamicCast_AsCheckpoints_Save, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, class FName CallFunc_GetCurrentPersistentLevelName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "StormMode_SpawnDeathStatue");

	Params::AGameplayPC_StormMode_C_StormMode_SpawnDeathStatue_Params Parms{};

	Parms.Local_Save = Local_Save;
	Parms.CallFunc_WasDarkFormOnDeath_Value = CallFunc_WasDarkFormOnDeath_Value;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue_1 = CallFunc_MakeTransform_ReturnValue_1;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_1 = CallFunc_FinishSpawningActor_ReturnValue_1;
	Parms.CallFunc_CheckpointsSlotName_ReturnValue = CallFunc_CheckpointsSlotName_ReturnValue;
	Parms.CallFunc_NotEqual_VectorVector_ReturnValue = CallFunc_NotEqual_VectorVector_ReturnValue;
	Parms.CallFunc_CheckpointsSlotName_ReturnValue_1 = CallFunc_CheckpointsSlotName_ReturnValue_1;
	Parms.CallFunc_GetInstance_ReturnValue = CallFunc_GetInstance_ReturnValue;
	Parms.CallFunc_GetInstance_ReturnValue_1 = CallFunc_GetInstance_ReturnValue_1;
	Parms.CallFunc_GetPrimaryUserIndex_ReturnValue = CallFunc_GetPrimaryUserIndex_ReturnValue;
	Parms.CallFunc_GetPrimaryUserIndex_ReturnValue_1 = CallFunc_GetPrimaryUserIndex_ReturnValue_1;
	Parms.CallFunc_DHLoadGameFromSlot_ReturnValue = CallFunc_DHLoadGameFromSlot_ReturnValue;
	Parms.CallFunc_DoesSaveGameExist_ReturnValue = CallFunc_DoesSaveGameExist_ReturnValue;
	Parms.K2Node_DynamicCast_AsCheckpoints_Save = K2Node_DynamicCast_AsCheckpoints_Save;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetCurrentPersistentLevelName_ReturnValue = CallFunc_GetCurrentPersistentLevelName_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.GetRunPlaytime
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FDateTime                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   CallFunc_MakeTimespan_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FDateTime                   CallFunc_Add_DateTimeTimespan_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

struct FDateTime AGameplayPC_StormMode_C::GetRunPlaytime(int32 CallFunc_FTrunc_ReturnValue, const struct FTimespan& CallFunc_MakeTimespan_ReturnValue, const struct FDateTime& CallFunc_Add_DateTimeTimespan_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "GetRunPlaytime");

	Params::AGameplayPC_StormMode_C_GetRunPlaytime_Params Parms{};

	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_MakeTimespan_ReturnValue = CallFunc_MakeTimespan_ReturnValue;
	Parms.CallFunc_Add_DateTimeTimespan_ReturnValue = CallFunc_Add_DateTimeTimespan_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.IncrementRuneObtained
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsBonusRune                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable_1                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_2                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_3                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Map_Find_Value_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_StormMode_C::IncrementRuneObtained(bool IsBonusRune, class FName Temp_name_Variable, bool CallFunc_Not_PreBool_ReturnValue, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, class FName Temp_name_Variable_3, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "IncrementRuneObtained");

	Params::AGameplayPC_StormMode_C_IncrementRuneObtained_Params Parms{};

	Parms.IsBonusRune = IsBonusRune;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.Temp_name_Variable_2 = Temp_name_Variable_2;
	Parms.Temp_name_Variable_3 = Temp_name_Variable_3;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.IncrementAttempCounter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Temp_name_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_1                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_StormMode_C::IncrementAttempCounter(class FName Temp_name_Variable, class FName Temp_name_Variable_1, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "IncrementAttempCounter");

	Params::AGameplayPC_StormMode_C_IncrementAttempCounter_Params Parms{};

	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.IncrementDeathsCounter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Temp_name_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_1                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_StormMode_C::IncrementDeathsCounter(class FName Temp_name_Variable, class FName Temp_name_Variable_1, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "IncrementDeathsCounter");

	Params::AGameplayPC_StormMode_C_IncrementDeathsCounter_Params Parms{};

	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.GetTotalPlaytimeForSave
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FDateTime                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   CallFunc_MakeTimespan_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FDateTime                   CallFunc_Add_DateTimeTimespan_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

struct FDateTime AGameplayPC_StormMode_C::GetTotalPlaytimeForSave(float CallFunc_GetGameTimeInSeconds_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, const struct FTimespan& CallFunc_MakeTimespan_ReturnValue, const struct FDateTime& CallFunc_Add_DateTimeTimespan_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "GetTotalPlaytimeForSave");

	Params::AGameplayPC_StormMode_C_GetTotalPlaytimeForSave_Params Parms{};

	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_MakeTimespan_ReturnValue = CallFunc_MakeTimespan_ReturnValue;
	Parms.CallFunc_Add_DateTimeTimespan_ReturnValue = CallFunc_Add_DateTimeTimespan_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.Process Damage Resist
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DamageIn                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      DamageType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              DamageOut                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Local_StaminaToDeduct                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Local_MaxStaminaAvailable                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Local_Damage_Reduced                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Local_DamageType                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Local_Damage                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue_1                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue_2                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue_3                        (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_7                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RandomBoolWithWeight_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_StormMode_C::Process_Damage_Resist(float DamageIn, class UClass* DamageType, float* DamageOut, float Local_StaminaToDeduct, float Local_MaxStaminaAvailable, float Local_Damage_Reduced, class UClass* Local_DamageType, float Local_Damage, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue_1, const class FString& CallFunc_Conv_FloatToString_ReturnValue_2, const class FString& CallFunc_Conv_FloatToString_ReturnValue_3, float CallFunc_FClamp_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, float CallFunc_FClamp_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, float CallFunc_FClamp_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue_2, bool CallFunc_EqualEqual_ClassClass_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_RandomBoolWithWeight_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_FClamp_ReturnValue_3, float CallFunc_Multiply_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "Process Damage Resist");

	Params::AGameplayPC_StormMode_C_Process_Damage_Resist_Params Parms{};

	Parms.DamageIn = DamageIn;
	Parms.DamageType = DamageType;
	Parms.Local_StaminaToDeduct = Local_StaminaToDeduct;
	Parms.Local_MaxStaminaAvailable = Local_MaxStaminaAvailable;
	Parms.Local_Damage_Reduced = Local_Damage_Reduced;
	Parms.Local_DamageType = Local_DamageType;
	Parms.Local_Damage = Local_Damage;
	Parms.CallFunc_Conv_FloatToString_ReturnValue = CallFunc_Conv_FloatToString_ReturnValue;
	Parms.CallFunc_Conv_FloatToString_ReturnValue_1 = CallFunc_Conv_FloatToString_ReturnValue_1;
	Parms.CallFunc_Conv_FloatToString_ReturnValue_2 = CallFunc_Conv_FloatToString_ReturnValue_2;
	Parms.CallFunc_Conv_FloatToString_ReturnValue_3 = CallFunc_Conv_FloatToString_ReturnValue_3;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue_1 = CallFunc_FClamp_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.CallFunc_FClamp_ReturnValue_2 = CallFunc_FClamp_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_7 = CallFunc_Concat_StrStr_ReturnValue_7;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_1 = CallFunc_EqualEqual_ClassClass_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_2 = CallFunc_EqualEqual_ClassClass_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_3 = CallFunc_EqualEqual_ClassClass_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_RandomBoolWithWeight_ReturnValue = CallFunc_RandomBoolWithWeight_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_1 = CallFunc_Subtract_FloatFloat_ReturnValue_1;
	Parms.CallFunc_FClamp_ReturnValue_3 = CallFunc_FClamp_ReturnValue_3;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (DamageOut != nullptr)
		*DamageOut = Parms.DamageOut;

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.GetRetainTarUpgradeLevel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float AGameplayPC_StormMode_C::GetRetainTarUpgradeLevel(class FName Temp_name_Variable, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "GetRetainTarUpgradeLevel");

	Params::AGameplayPC_StormMode_C_GetRetainTarUpgradeLevel_Params Parms{};

	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.StormMode_HandleMoneyOnDeath
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Local_Remove10K                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShouldRemove10KTarOnDeath_Remove                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetRetainTarUpgradeLevel_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABarbarous_C*                CallFunc_GetCharacterAsBarbarous_AsBarbarous                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetLostMoneyName_MoneyName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetMoneyName_MoneyName                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldLooseMoneyOnDeath_bShould                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetNamedPCInt_Value                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_StormMode_C::StormMode_HandleMoneyOnDeath(bool Local_Remove10K, bool CallFunc_ShouldRemove10KTarOnDeath_Remove, int32 CallFunc_Multiply_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, float CallFunc_GetRetainTarUpgradeLevel_ReturnValue, bool Temp_bool_Variable, class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous, class FName CallFunc_GetLostMoneyName_MoneyName, class FName CallFunc_GetMoneyName_MoneyName, bool CallFunc_ShouldLooseMoneyOnDeath_bShould, int32 CallFunc_GetNamedPCInt_Value, float CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_Clamp_ReturnValue, int32 K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "StormMode_HandleMoneyOnDeath");

	Params::AGameplayPC_StormMode_C_StormMode_HandleMoneyOnDeath_Params Parms{};

	Parms.Local_Remove10K = Local_Remove10K;
	Parms.CallFunc_ShouldRemove10KTarOnDeath_Remove = CallFunc_ShouldRemove10KTarOnDeath_Remove;
	Parms.CallFunc_Multiply_IntInt_ReturnValue = CallFunc_Multiply_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetRetainTarUpgradeLevel_ReturnValue = CallFunc_GetRetainTarUpgradeLevel_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetCharacterAsBarbarous_AsBarbarous = CallFunc_GetCharacterAsBarbarous_AsBarbarous;
	Parms.CallFunc_GetLostMoneyName_MoneyName = CallFunc_GetLostMoneyName_MoneyName;
	Parms.CallFunc_GetMoneyName_MoneyName = CallFunc_GetMoneyName_MoneyName;
	Parms.CallFunc_ShouldLooseMoneyOnDeath_bShould = CallFunc_ShouldLooseMoneyOnDeath_bShould;
	Parms.CallFunc_GetNamedPCInt_Value = CallFunc_GetNamedPCInt_Value;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.GetSelectedShell
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Local_FoundValue_                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Local_Value                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_StormMode_C::GetSelectedShell(bool Local_FoundValue_, class FName Local_Value, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FName Temp_name_Variable, const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool K2Node_SwitchName_CmpSuccess, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, class FName CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "GetSelectedShell");

	Params::AGameplayPC_StormMode_C_GetSelectedShell_Params Parms{};

	Parms.Local_FoundValue_ = Local_FoundValue_;
	Parms.Local_Value = Local_Value;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_Conv_BoolToString_ReturnValue = CallFunc_Conv_BoolToString_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.HideInteractText_StormMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_StormMode_C::HideInteractText_StormMode(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "HideInteractText_StormMode");

	Params::AGameplayPC_StormMode_C_HideInteractText_StormMode_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.OnActorUsed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetUsableActor_Actor                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IUsableActorInterface_C>K2Node_DynamicCast_AsUsable_Actor_Interface                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IUsableActorInterface_C>K2Node_DynamicCast_AsUsable_Actor_Interface_1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsActorUsable_IsUsable                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_OnActorUsed_Success                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_StormMode_C::OnActorUsed(bool CallFunc_HasAuthority_ReturnValue, class AActor* CallFunc_GetUsableActor_Actor, TScriptInterface<class IUsableActorInterface_C> K2Node_DynamicCast_AsUsable_Actor_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IUsableActorInterface_C> K2Node_DynamicCast_AsUsable_Actor_Interface_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_GetIsActorUsable_IsUsable, bool CallFunc_OnActorUsed_Success, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "OnActorUsed");

	Params::AGameplayPC_StormMode_C_OnActorUsed_Params Parms{};

	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetUsableActor_Actor = CallFunc_GetUsableActor_Actor;
	Parms.K2Node_DynamicCast_AsUsable_Actor_Interface = K2Node_DynamicCast_AsUsable_Actor_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsUsable_Actor_Interface_1 = K2Node_DynamicCast_AsUsable_Actor_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetIsActorUsable_IsUsable = CallFunc_GetIsActorUsable_IsUsable;
	Parms.CallFunc_OnActorUsed_Success = CallFunc_OnActorUsed_Success;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.StormMode_ResetCheckpoints
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_CheckpointsSlotName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class UDHGameInstance*             CallFunc_GetInstance_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPrimaryUserIndex_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DHSaveGameToSlot_Asynch_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_StormMode_C::StormMode_ResetCheckpoints(bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_CheckpointsSlotName_ReturnValue, class UDHGameInstance* CallFunc_GetInstance_ReturnValue, int32 CallFunc_GetPrimaryUserIndex_ReturnValue, bool CallFunc_DHSaveGameToSlot_Asynch_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "StormMode_ResetCheckpoints");

	Params::AGameplayPC_StormMode_C_StormMode_ResetCheckpoints_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_CheckpointsSlotName_ReturnValue = CallFunc_CheckpointsSlotName_ReturnValue;
	Parms.CallFunc_GetInstance_ReturnValue = CallFunc_GetInstance_ReturnValue;
	Parms.CallFunc_GetPrimaryUserIndex_ReturnValue = CallFunc_GetPrimaryUserIndex_ReturnValue;
	Parms.CallFunc_DHSaveGameToSlot_Asynch_ReturnValue = CallFunc_DHSaveGameToSlot_Asynch_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.WasDarkFormOnDeath
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FStruct_StormModeCheckpointSaveSave                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// bool                               Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_StormMode_C::WasDarkFormOnDeath(struct FStruct_StormModeCheckpointSave& Save, bool* Value, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "WasDarkFormOnDeath");

	Params::AGameplayPC_StormMode_C_WasDarkFormOnDeath_Params Parms{};

	Parms.Save = Save;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.CheckpointsSlotName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)

class FString AGameplayPC_StormMode_C::CheckpointsSlotName(const class FString& CallFunc_Concat_StrStr_ReturnValue, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "CheckpointsSlotName");

	Params::AGameplayPC_StormMode_C_CheckpointsSlotName_Params Parms{};

	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.ShowRuneNotify
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show_                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Rune                Rune                                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               IsBonusRune                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_IsBonusRune                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_RuneFancyNotification_C* CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_StormMode_C::ShowRuneNotify(bool Show_, const struct FStruct_Rune& Rune, bool IsBonusRune, bool Local_IsBonusRune, bool CallFunc_Not_PreBool_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_RuneFancyNotification_C* CallFunc_FinishSpawningActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "ShowRuneNotify");

	Params::AGameplayPC_StormMode_C_ShowRuneNotify_Params Parms{};

	Parms.Show_ = Show_;
	Parms.Rune = Rune;
	Parms.IsBonusRune = IsBonusRune;
	Parms.Local_IsBonusRune = Local_IsBonusRune;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.SaveDeathStatueLocation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EArmorTypes             Local_Shell                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Local_Location                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EArmorTypes             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_CheckpointsSlotName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ShellDye           K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetCurrentPersistentLevelName_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABarbarous_C*                K2Node_DynamicCast_AsBarbarous                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDHGameInstance*             CallFunc_GetInstance_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPrimaryUserIndex_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DHSaveGameToSlot_Asynch_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCheckpointsSave_C*          CallFunc_CreateSaveGameObject_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_StormMode_C::SaveDeathStatueLocation(const struct FVector& Location, enum class EArmorTypes Local_Shell, const struct FVector& Local_Location, enum class EArmorTypes Temp_byte_Variable, const class FString& CallFunc_CheckpointsSlotName_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, enum class Enum_ShellDye K2Node_Select_Default, class FName CallFunc_GetCurrentPersistentLevelName_ReturnValue, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_1, class ABarbarous_C* K2Node_DynamicCast_AsBarbarous, bool K2Node_DynamicCast_bSuccess, class UDHGameInstance* CallFunc_GetInstance_ReturnValue, int32 CallFunc_GetPrimaryUserIndex_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_DHSaveGameToSlot_Asynch_ReturnValue, class UCheckpointsSave_C* CallFunc_CreateSaveGameObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "SaveDeathStatueLocation");

	Params::AGameplayPC_StormMode_C_SaveDeathStatueLocation_Params Parms{};

	Parms.Location = Location;
	Parms.Local_Shell = Local_Shell;
	Parms.Local_Location = Local_Location;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_CheckpointsSlotName_ReturnValue = CallFunc_CheckpointsSlotName_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base = CallFunc_GetCharacterAs0_Base_As0_Base;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetCurrentPersistentLevelName_ReturnValue = CallFunc_GetCurrentPersistentLevelName_ReturnValue;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base_1 = CallFunc_GetCharacterAs0_Base_As0_Base_1;
	Parms.K2Node_DynamicCast_AsBarbarous = K2Node_DynamicCast_AsBarbarous;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetInstance_ReturnValue = CallFunc_GetInstance_ReturnValue;
	Parms.CallFunc_GetPrimaryUserIndex_ReturnValue = CallFunc_GetPrimaryUserIndex_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_DHSaveGameToSlot_Asynch_ReturnValue = CallFunc_DHSaveGameToSlot_Asynch_ReturnValue;
	Parms.CallFunc_CreateSaveGameObject_ReturnValue = CallFunc_CreateSaveGameObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.LoadCheckpoints
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_CheckpointsSlotName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_CheckpointsSlotName_ReturnValue_1                       (ZeroConstructor, HasGetValueTypeHash)
// class UDHGameInstance*             CallFunc_GetInstance_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPrimaryUserIndex_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDHGameInstance*             CallFunc_GetInstance_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   CallFunc_DHLoadGameFromSlot_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPrimaryUserIndex_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCheckpointsSave_C*          K2Node_DynamicCast_AsCheckpoints_Save                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DoesSaveGameExist_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_StormMode_C::LoadCheckpoints(const class FString& CallFunc_CheckpointsSlotName_ReturnValue, const class FString& CallFunc_CheckpointsSlotName_ReturnValue_1, class UDHGameInstance* CallFunc_GetInstance_ReturnValue, int32 CallFunc_GetPrimaryUserIndex_ReturnValue, class UDHGameInstance* CallFunc_GetInstance_ReturnValue_1, class USaveGame* CallFunc_DHLoadGameFromSlot_ReturnValue, int32 CallFunc_GetPrimaryUserIndex_ReturnValue_1, class UCheckpointsSave_C* K2Node_DynamicCast_AsCheckpoints_Save, bool K2Node_DynamicCast_bSuccess, bool CallFunc_DoesSaveGameExist_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "LoadCheckpoints");

	Params::AGameplayPC_StormMode_C_LoadCheckpoints_Params Parms{};

	Parms.CallFunc_CheckpointsSlotName_ReturnValue = CallFunc_CheckpointsSlotName_ReturnValue;
	Parms.CallFunc_CheckpointsSlotName_ReturnValue_1 = CallFunc_CheckpointsSlotName_ReturnValue_1;
	Parms.CallFunc_GetInstance_ReturnValue = CallFunc_GetInstance_ReturnValue;
	Parms.CallFunc_GetPrimaryUserIndex_ReturnValue = CallFunc_GetPrimaryUserIndex_ReturnValue;
	Parms.CallFunc_GetInstance_ReturnValue_1 = CallFunc_GetInstance_ReturnValue_1;
	Parms.CallFunc_DHLoadGameFromSlot_ReturnValue = CallFunc_DHLoadGameFromSlot_ReturnValue;
	Parms.CallFunc_GetPrimaryUserIndex_ReturnValue_1 = CallFunc_GetPrimaryUserIndex_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsCheckpoints_Save = K2Node_DynamicCast_AsCheckpoints_Save;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_DoesSaveGameExist_ReturnValue = CallFunc_DoesSaveGameExist_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.SaveCheckpoint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Checkpoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Local_LevelName                                                  (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class FName                        Local_Checkpoint                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_CheckpointsSlotName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class UDHGameInstance*             CallFunc_GetInstance_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPrimaryUserIndex_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DHSaveGameToSlot_Asynch_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCheckpointsSave_C*          CallFunc_CreateSaveGameObject_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_StormMode_C::SaveCheckpoint(class FName Checkpoint, const class FString& Local_LevelName, class FName Local_Checkpoint, bool CallFunc_Not_PreBool_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const class FString& CallFunc_CheckpointsSlotName_ReturnValue, class UDHGameInstance* CallFunc_GetInstance_ReturnValue, int32 CallFunc_GetPrimaryUserIndex_ReturnValue, bool CallFunc_DHSaveGameToSlot_Asynch_ReturnValue, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UCheckpointsSave_C* CallFunc_CreateSaveGameObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "SaveCheckpoint");

	Params::AGameplayPC_StormMode_C_SaveCheckpoint_Params Parms{};

	Parms.Checkpoint = Checkpoint;
	Parms.Local_LevelName = Local_LevelName;
	Parms.Local_Checkpoint = Local_Checkpoint;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_CheckpointsSlotName_ReturnValue = CallFunc_CheckpointsSlotName_ReturnValue;
	Parms.CallFunc_GetInstance_ReturnValue = CallFunc_GetInstance_ReturnValue;
	Parms.CallFunc_GetPrimaryUserIndex_ReturnValue = CallFunc_GetPrimaryUserIndex_ReturnValue;
	Parms.CallFunc_DHSaveGameToSlot_Asynch_ReturnValue = CallFunc_DHSaveGameToSlot_Asynch_ReturnValue;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_CreateSaveGameObject_ReturnValue = CallFunc_CreateSaveGameObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.ResetFallgrimAsCurrentCheckpoint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_StormMode_C::ResetFallgrimAsCurrentCheckpoint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "ResetFallgrimAsCurrentCheckpoint");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.UnlockChaliceIncreaseProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_StormMode_C::UnlockChaliceIncreaseProgress(bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "UnlockChaliceIncreaseProgress");

	Params::AGameplayPC_StormMode_C_UnlockChaliceIncreaseProgress_Params Parms{};

	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.DebugAreaProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      MainString                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// enum class Enum_StormModeProgress  StormModeProgress                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Progress                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               InBool                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)

void AGameplayPC_StormMode_C::DebugAreaProgress(const class FString& MainString, enum class Enum_StormModeProgress StormModeProgress, int32 Progress, bool InBool, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "DebugAreaProgress");

	Params::AGameplayPC_StormMode_C_DebugAreaProgress_Params Parms{};

	Parms.MainString = MainString;
	Parms.StormModeProgress = StormModeProgress;
	Parms.Progress = Progress;
	Parms.InBool = InBool;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_BoolToString_ReturnValue = CallFunc_Conv_BoolToString_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.ResetInventory
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Local_ItemIndex                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryItem              Local_Item                                                       (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryItem              Temp_struct_Variable                                             (ConstParm, HasGetValueTypeHash)
// struct FInventoryItem              K2Node_MakeStruct_InventoryItem                                  (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryItem              CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_7                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_8                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_9                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_10                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_11                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_12                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_13                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_14                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_7                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_8                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_9                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_10                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_11                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_12                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_StormMode_C::ResetInventory(int32 Local_ItemIndex, const struct FInventoryItem& Local_Item, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FInventoryItem& Temp_struct_Variable, const struct FInventoryItem& K2Node_MakeStruct_InventoryItem, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, const struct FInventoryItem& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_3, bool CallFunc_EqualEqual_NameName_ReturnValue_4, bool CallFunc_EqualEqual_NameName_ReturnValue_5, bool CallFunc_EqualEqual_NameName_ReturnValue_6, bool CallFunc_EqualEqual_NameName_ReturnValue_7, bool CallFunc_EqualEqual_NameName_ReturnValue_8, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_9, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue_10, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_EqualEqual_NameName_ReturnValue_11, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_EqualEqual_NameName_ReturnValue_12, bool CallFunc_BooleanOR_ReturnValue_4, bool CallFunc_EqualEqual_NameName_ReturnValue_13, bool CallFunc_EqualEqual_NameName_ReturnValue_14, bool CallFunc_BooleanOR_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue_6, bool CallFunc_BooleanOR_ReturnValue_7, bool CallFunc_BooleanOR_ReturnValue_8, bool CallFunc_BooleanOR_ReturnValue_9, bool CallFunc_BooleanOR_ReturnValue_10, bool CallFunc_BooleanOR_ReturnValue_11, bool CallFunc_BooleanOR_ReturnValue_12)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "ResetInventory");

	Params::AGameplayPC_StormMode_C_ResetInventory_Params Parms{};

	Parms.Local_ItemIndex = Local_ItemIndex;
	Parms.Local_Item = Local_Item;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_MakeStruct_InventoryItem = K2Node_MakeStruct_InventoryItem;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_2 = CallFunc_EqualEqual_NameName_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_3 = CallFunc_EqualEqual_NameName_ReturnValue_3;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_4 = CallFunc_EqualEqual_NameName_ReturnValue_4;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_5 = CallFunc_EqualEqual_NameName_ReturnValue_5;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_6 = CallFunc_EqualEqual_NameName_ReturnValue_6;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_7 = CallFunc_EqualEqual_NameName_ReturnValue_7;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_8 = CallFunc_EqualEqual_NameName_ReturnValue_8;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_9 = CallFunc_EqualEqual_NameName_ReturnValue_9;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_10 = CallFunc_EqualEqual_NameName_ReturnValue_10;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_11 = CallFunc_EqualEqual_NameName_ReturnValue_11;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_12 = CallFunc_EqualEqual_NameName_ReturnValue_12;
	Parms.CallFunc_BooleanOR_ReturnValue_4 = CallFunc_BooleanOR_ReturnValue_4;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_13 = CallFunc_EqualEqual_NameName_ReturnValue_13;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_14 = CallFunc_EqualEqual_NameName_ReturnValue_14;
	Parms.CallFunc_BooleanOR_ReturnValue_5 = CallFunc_BooleanOR_ReturnValue_5;
	Parms.CallFunc_BooleanOR_ReturnValue_6 = CallFunc_BooleanOR_ReturnValue_6;
	Parms.CallFunc_BooleanOR_ReturnValue_7 = CallFunc_BooleanOR_ReturnValue_7;
	Parms.CallFunc_BooleanOR_ReturnValue_8 = CallFunc_BooleanOR_ReturnValue_8;
	Parms.CallFunc_BooleanOR_ReturnValue_9 = CallFunc_BooleanOR_ReturnValue_9;
	Parms.CallFunc_BooleanOR_ReturnValue_10 = CallFunc_BooleanOR_ReturnValue_10;
	Parms.CallFunc_BooleanOR_ReturnValue_11 = CallFunc_BooleanOR_ReturnValue_11;
	Parms.CallFunc_BooleanOR_ReturnValue_12 = CallFunc_BooleanOR_ReturnValue_12;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.InventoryUtil_GetCanUseItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               UsableInDarkForm                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_InventoryItem_CanUseReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_LuteType           Local_Lute                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_UsableInDarkForm                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Local_ID                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_LuteAbilities_Params_Active_Uses                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_LuteAbilities_Params_Active_Minutes                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_InventoryItem_CanUseCallFunc_InventoryUtil_GetCanUseItem_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Contains_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_InventoryItem_CanUseCallFunc_InventoryUtil_GetCanUseItem_ReturnValue_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_InventoryItem_CanUseCallFunc_InventoryUtil_GetCanUseItem_ReturnValue_2               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_InventoryItem_CanUseCallFunc_InventoryUtil_GetCanUseItem_ReturnValue_3               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

enum class Enum_InventoryItem_CanUse AGameplayPC_StormMode_C::InventoryUtil_GetCanUseItem(class FName ID, bool UsableInDarkForm, enum class Enum_LuteType Local_Lute, bool Local_UsableInDarkForm, class FName Local_ID, bool K2Node_SwitchName_CmpSuccess, int32 CallFunc_LuteAbilities_Params_Active_Uses, int32 CallFunc_LuteAbilities_Params_Active_Minutes, enum class Enum_InventoryItem_CanUse CallFunc_InventoryUtil_GetCanUseItem_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_Contains_ReturnValue, enum class Enum_InventoryItem_CanUse CallFunc_InventoryUtil_GetCanUseItem_ReturnValue_1, enum class Enum_InventoryItem_CanUse CallFunc_InventoryUtil_GetCanUseItem_ReturnValue_2, bool K2Node_SwitchName_CmpSuccess_1, class FName Temp_name_Variable, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, enum class Enum_InventoryItem_CanUse CallFunc_InventoryUtil_GetCanUseItem_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "InventoryUtil_GetCanUseItem");

	Params::AGameplayPC_StormMode_C_InventoryUtil_GetCanUseItem_Params Parms{};

	Parms.ID = ID;
	Parms.UsableInDarkForm = UsableInDarkForm;
	Parms.Local_Lute = Local_Lute;
	Parms.Local_UsableInDarkForm = Local_UsableInDarkForm;
	Parms.Local_ID = Local_ID;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.CallFunc_LuteAbilities_Params_Active_Uses = CallFunc_LuteAbilities_Params_Active_Uses;
	Parms.CallFunc_LuteAbilities_Params_Active_Minutes = CallFunc_LuteAbilities_Params_Active_Minutes;
	Parms.CallFunc_InventoryUtil_GetCanUseItem_ReturnValue = CallFunc_InventoryUtil_GetCanUseItem_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Contains_ReturnValue = CallFunc_Contains_ReturnValue;
	Parms.CallFunc_InventoryUtil_GetCanUseItem_ReturnValue_1 = CallFunc_InventoryUtil_GetCanUseItem_ReturnValue_1;
	Parms.CallFunc_InventoryUtil_GetCanUseItem_ReturnValue_2 = CallFunc_InventoryUtil_GetCanUseItem_ReturnValue_2;
	Parms.K2Node_SwitchName_CmpSuccess_1 = K2Node_SwitchName_CmpSuccess_1;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_InventoryUtil_GetCanUseItem_ReturnValue_3 = CallFunc_InventoryUtil_GetCanUseItem_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.ServerSaveGameSaveToDisk
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      InString                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetSaveSlot_ReturnValue                                 (ZeroConstructor, HasGetValueTypeHash)
// class UDHGameInstance*             CallFunc_GetInstance_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPrimaryUserIndex_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DHSaveGameToSlot_Asynch_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_StormMode_C::ServerSaveGameSaveToDisk(const class FString& InString, const class FString& CallFunc_GetSaveSlot_ReturnValue, class UDHGameInstance* CallFunc_GetInstance_ReturnValue, int32 CallFunc_GetPrimaryUserIndex_ReturnValue, bool CallFunc_DHSaveGameToSlot_Asynch_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "ServerSaveGameSaveToDisk");

	Params::AGameplayPC_StormMode_C_ServerSaveGameSaveToDisk_Params Parms{};

	Parms.InString = InString;
	Parms.CallFunc_GetSaveSlot_ReturnValue = CallFunc_GetSaveSlot_ReturnValue;
	Parms.CallFunc_GetInstance_ReturnValue = CallFunc_GetInstance_ReturnValue;
	Parms.CallFunc_GetPrimaryUserIndex_ReturnValue = CallFunc_GetPrimaryUserIndex_ReturnValue;
	Parms.CallFunc_DHSaveGameToSlot_Asynch_ReturnValue = CallFunc_DHSaveGameToSlot_Asynch_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.StormMode_ResetGPData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_StormMode_C::StormMode_ResetGPData(bool CallFunc_IsValid_ReturnValue, class FName Temp_name_Variable, int32 Temp_int_Variable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "StormMode_ResetGPData");

	Params::AGameplayPC_StormMode_C_StormMode_ResetGPData_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.OnOpenArea_IncreaseProgress_v1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_StormMode_C::OnOpenArea_IncreaseProgress_v1(bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "OnOpenArea_IncreaseProgress_v1");

	Params::AGameplayPC_StormMode_C_OnOpenArea_IncreaseProgress_v1_Params Parms{};

	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.OpenBlocker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_StormModeArea      AreaToOpen                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_AreaBlocker_C*           CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_StormMode_C::OpenBlocker(enum class Enum_StormModeArea AreaToOpen, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class ABP_AreaBlocker_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "OpenBlocker");

	Params::AGameplayPC_StormMode_C_OpenBlocker_Params Parms{};

	Parms.AreaToOpen = AreaToOpen;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.IncrementAreaProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Local_CurrentAreaProgress                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_StormMode_C::IncrementAreaProgress(int32 Local_CurrentAreaProgress, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "IncrementAreaProgress");

	Params::AGameplayPC_StormMode_C_IncrementAreaProgress_Params Parms{};

	Parms.Local_CurrentAreaProgress = Local_CurrentAreaProgress;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1 = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.DebugSavingStormMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_StormModeProgress  Progress_StormMode                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EArmorTypes             SelectedShell_StormMode                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EComboTypes             SelectedWeapon_StormMode                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CurrentMainLevel_StormMode                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CurrentSubLevel_StormMode                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CurrentCheckpoint_StormMode                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CurrentCheckpointTransform_StormMode                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TransformToString_ReturnValue                      (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_2                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_2             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_7                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_8                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_9                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_10                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_11                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_12                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_13                            (ZeroConstructor, HasGetValueTypeHash)

void AGameplayPC_StormMode_C::DebugSavingStormMode(enum class Enum_StormModeProgress Progress_StormMode, enum class EArmorTypes SelectedShell_StormMode, enum class EComboTypes SelectedWeapon_StormMode, class FName CurrentMainLevel_StormMode, class FName CurrentSubLevel_StormMode, class FName CurrentCheckpoint_StormMode, const struct FTransform& CurrentCheckpointTransform_StormMode, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_TransformToString_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, const class FString& CallFunc_Conv_NameToString_ReturnValue_2, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, const class FString& CallFunc_Concat_StrStr_ReturnValue_9, const class FString& CallFunc_Concat_StrStr_ReturnValue_10, const class FString& CallFunc_Concat_StrStr_ReturnValue_11, const class FString& CallFunc_Concat_StrStr_ReturnValue_12, const class FString& CallFunc_Concat_StrStr_ReturnValue_13)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "DebugSavingStormMode");

	Params::AGameplayPC_StormMode_C_DebugSavingStormMode_Params Parms{};

	Parms.Progress_StormMode = Progress_StormMode;
	Parms.SelectedShell_StormMode = SelectedShell_StormMode;
	Parms.SelectedWeapon_StormMode = SelectedWeapon_StormMode;
	Parms.CurrentMainLevel_StormMode = CurrentMainLevel_StormMode;
	Parms.CurrentSubLevel_StormMode = CurrentSubLevel_StormMode;
	Parms.CurrentCheckpoint_StormMode = CurrentCheckpoint_StormMode;
	Parms.CurrentCheckpointTransform_StormMode = CurrentCheckpointTransform_StormMode;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_TransformToString_ReturnValue = CallFunc_Conv_TransformToString_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue_1 = CallFunc_Conv_NameToString_ReturnValue_1;
	Parms.CallFunc_Conv_NameToString_ReturnValue_2 = CallFunc_Conv_NameToString_ReturnValue_2;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1 = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_2 = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.CallFunc_Concat_StrStr_ReturnValue_7 = CallFunc_Concat_StrStr_ReturnValue_7;
	Parms.CallFunc_Concat_StrStr_ReturnValue_8 = CallFunc_Concat_StrStr_ReturnValue_8;
	Parms.CallFunc_Concat_StrStr_ReturnValue_9 = CallFunc_Concat_StrStr_ReturnValue_9;
	Parms.CallFunc_Concat_StrStr_ReturnValue_10 = CallFunc_Concat_StrStr_ReturnValue_10;
	Parms.CallFunc_Concat_StrStr_ReturnValue_11 = CallFunc_Concat_StrStr_ReturnValue_11;
	Parms.CallFunc_Concat_StrStr_ReturnValue_12 = CallFunc_Concat_StrStr_ReturnValue_12;
	Parms.CallFunc_Concat_StrStr_ReturnValue_13 = CallFunc_Concat_StrStr_ReturnValue_13;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.LoadStormModeProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_StormMode_C::LoadStormModeProgress()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "LoadStormModeProgress");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.SpawnDeathStatueAtSavedLocation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_StormModeCheckpointSaveLocal_Save                                                       (Edit, BlueprintVisible, HasGetValueTypeHash)

void AGameplayPC_StormMode_C::SpawnDeathStatueAtSavedLocation(const struct FStruct_StormModeCheckpointSave& Local_Save)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "SpawnDeathStatueAtSavedLocation");

	Params::AGameplayPC_StormMode_C_SpawnDeathStatueAtSavedLocation_Params Parms{};

	Parms.Local_Save = Local_Save;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.ServerSaveGame
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bShouldRestorePlayerTransformOnLoad_                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EComboTypes             CallFunc_SaveCurrentWeapon_CurrentWeapon                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDateTime                   CallFunc_GetRunPlaytime_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FDateTime                   CallFunc_Now_ReturnValue                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FDateTime                   CallFunc_GetTotalPlaytimeForSave_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<class FName, float>           CallFunc_GetSerializedFloats_Floats                              (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UServerSaveGame_C*           CallFunc_CreateSaveGameObject_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_StormMode_C::ServerSaveGame(bool bShouldRestorePlayerTransformOnLoad_, enum class EComboTypes CallFunc_SaveCurrentWeapon_CurrentWeapon, const struct FDateTime& CallFunc_GetRunPlaytime_ReturnValue, const struct FDateTime& CallFunc_Now_ReturnValue, const struct FDateTime& CallFunc_GetTotalPlaytimeForSave_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, TMap<class FName, float> CallFunc_GetSerializedFloats_Floats, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UServerSaveGame_C* CallFunc_CreateSaveGameObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "ServerSaveGame");

	Params::AGameplayPC_StormMode_C_ServerSaveGame_Params Parms{};

	Parms.bShouldRestorePlayerTransformOnLoad_ = bShouldRestorePlayerTransformOnLoad_;
	Parms.CallFunc_SaveCurrentWeapon_CurrentWeapon = CallFunc_SaveCurrentWeapon_CurrentWeapon;
	Parms.CallFunc_GetRunPlaytime_ReturnValue = CallFunc_GetRunPlaytime_ReturnValue;
	Parms.CallFunc_Now_ReturnValue = CallFunc_Now_ReturnValue;
	Parms.CallFunc_GetTotalPlaytimeForSave_ReturnValue = CallFunc_GetTotalPlaytimeForSave_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetSerializedFloats_Floats = CallFunc_GetSerializedFloats_Floats;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_CreateSaveGameObject_ReturnValue = CallFunc_CreateSaveGameObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.ServerLoadGame
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      SaveSlotName                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               Local_SaveExist                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Local_SaveSlot                                                   (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadDataFromBaseGame_Success                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadInventoryItems_Success                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDHGameInstance*             CallFunc_GetInstance_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDHGameInstance*             CallFunc_GetInstance_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPrimaryUserIndex_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPrimaryUserIndex_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetSaveSlot_ReturnValue                                 (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesSaveGameExist_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class USaveGame*                   CallFunc_DHLoadGameFromSlot_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UServerSaveGame_C*           K2Node_DynamicCast_AsServer_Save_Game                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UServerSaveGame_C*           CallFunc_CreateSaveGameObject_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_StormMode_C::ServerLoadGame(const class FString& SaveSlotName, bool Local_SaveExist, const class FString& Local_SaveSlot, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_LoadDataFromBaseGame_Success, bool CallFunc_HasAuthority_ReturnValue, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, bool CallFunc_IsValid_ReturnValue, bool CallFunc_LoadInventoryItems_Success, class UDHGameInstance* CallFunc_GetInstance_ReturnValue, class UDHGameInstance* CallFunc_GetInstance_ReturnValue_1, int32 CallFunc_GetPrimaryUserIndex_ReturnValue, int32 CallFunc_GetPrimaryUserIndex_ReturnValue_1, const class FString& CallFunc_GetSaveSlot_ReturnValue, bool CallFunc_DoesSaveGameExist_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class USaveGame* CallFunc_DHLoadGameFromSlot_ReturnValue, class UServerSaveGame_C* K2Node_DynamicCast_AsServer_Save_Game, bool K2Node_DynamicCast_bSuccess, class UServerSaveGame_C* CallFunc_CreateSaveGameObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "ServerLoadGame");

	Params::AGameplayPC_StormMode_C_ServerLoadGame_Params Parms{};

	Parms.SaveSlotName = SaveSlotName;
	Parms.Local_SaveExist = Local_SaveExist;
	Parms.Local_SaveSlot = Local_SaveSlot;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_LoadDataFromBaseGame_Success = CallFunc_LoadDataFromBaseGame_Success;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_LoadInventoryItems_Success = CallFunc_LoadInventoryItems_Success;
	Parms.CallFunc_GetInstance_ReturnValue = CallFunc_GetInstance_ReturnValue;
	Parms.CallFunc_GetInstance_ReturnValue_1 = CallFunc_GetInstance_ReturnValue_1;
	Parms.CallFunc_GetPrimaryUserIndex_ReturnValue = CallFunc_GetPrimaryUserIndex_ReturnValue;
	Parms.CallFunc_GetPrimaryUserIndex_ReturnValue_1 = CallFunc_GetPrimaryUserIndex_ReturnValue_1;
	Parms.CallFunc_GetSaveSlot_ReturnValue = CallFunc_GetSaveSlot_ReturnValue;
	Parms.CallFunc_DoesSaveGameExist_ReturnValue = CallFunc_DoesSaveGameExist_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_DHLoadGameFromSlot_ReturnValue = CallFunc_DHLoadGameFromSlot_ReturnValue;
	Parms.K2Node_DynamicCast_AsServer_Save_Game = K2Node_DynamicCast_AsServer_Save_Game;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_CreateSaveGameObject_ReturnValue = CallFunc_CreateSaveGameObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.Timeline_Playtime_Run__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AGameplayPC_StormMode_C::Timeline_Playtime_Run__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "Timeline_Playtime_Run__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.Timeline_Playtime_Run__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AGameplayPC_StormMode_C::Timeline_Playtime_Run__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "Timeline_Playtime_Run__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.InpActEvt_PausedNav_Up_K2Node_InputActionEvent_5
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AGameplayPC_StormMode_C::InpActEvt_PausedNav_Up_K2Node_InputActionEvent_5(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "InpActEvt_PausedNav_Up_K2Node_InputActionEvent_5");

	Params::AGameplayPC_StormMode_C_InpActEvt_PausedNav_Up_K2Node_InputActionEvent_5_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.InpActEvt_PausedNav_Down_K2Node_InputActionEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AGameplayPC_StormMode_C::InpActEvt_PausedNav_Down_K2Node_InputActionEvent_4(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "InpActEvt_PausedNav_Down_K2Node_InputActionEvent_4");

	Params::AGameplayPC_StormMode_C_InpActEvt_PausedNav_Down_K2Node_InputActionEvent_4_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.InpActEvt_PausedNav_Confirm_K2Node_InputActionEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AGameplayPC_StormMode_C::InpActEvt_PausedNav_Confirm_K2Node_InputActionEvent_3(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "InpActEvt_PausedNav_Confirm_K2Node_InputActionEvent_3");

	Params::AGameplayPC_StormMode_C_InpActEvt_PausedNav_Confirm_K2Node_InputActionEvent_3_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.InpActEvt_PausedNav_Back_K2Node_InputActionEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AGameplayPC_StormMode_C::InpActEvt_PausedNav_Back_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "InpActEvt_PausedNav_Back_K2Node_InputActionEvent_2");

	Params::AGameplayPC_StormMode_C_InpActEvt_PausedNav_Back_K2Node_InputActionEvent_2_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.InpActEvt_PausedNav_Left_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AGameplayPC_StormMode_C::InpActEvt_PausedNav_Left_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "InpActEvt_PausedNav_Left_K2Node_InputActionEvent_1");

	Params::AGameplayPC_StormMode_C_InpActEvt_PausedNav_Left_K2Node_InputActionEvent_1_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.InpActEvt_PausedNav_Right_K2Node_InputActionEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AGameplayPC_StormMode_C::InpActEvt_PausedNav_Right_K2Node_InputActionEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "InpActEvt_PausedNav_Right_K2Node_InputActionEvent_0");

	Params::AGameplayPC_StormMode_C_InpActEvt_PausedNav_Right_K2Node_InputActionEvent_0_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.LoadStormModeLevel_Fallgrim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_StormMode_C::LoadStormModeLevel_Fallgrim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "LoadStormModeLevel_Fallgrim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.LoadStormModeLevel_Crypt
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_StormMode_C::LoadStormModeLevel_Crypt()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "LoadStormModeLevel_Crypt");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.OnLevelShown_Crypt
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_StormMode_C::OnLevelShown_Crypt()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "OnLevelShown_Crypt");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.BndEvt__RuneInventoryComponent_K2Node_ComponentBoundEvent_1_OnChaliceRuneGained__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                        ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_StormMode_C::BndEvt__RuneInventoryComponent_K2Node_ComponentBoundEvent_1_OnChaliceRuneGained__DelegateSignature(class FName ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "BndEvt__RuneInventoryComponent_K2Node_ComponentBoundEvent_1_OnChaliceRuneGained__DelegateSignature");

	Params::AGameplayPC_StormMode_C_BndEvt__RuneInventoryComponent_K2Node_ComponentBoundEvent_1_OnChaliceRuneGained__DelegateSignature_Params Parms{};

	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.SetStormModeEntranceState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_StormModeArea      Area                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_StormModeAreaState EntranceState                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_StormMode_C::SetStormModeEntranceState(enum class Enum_StormModeArea Area, enum class Enum_StormModeAreaState EntranceState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "SetStormModeEntranceState");

	Params::AGameplayPC_StormMode_C_SetStormModeEntranceState_Params Parms{};

	Parms.Area = Area;
	Parms.EntranceState = EntranceState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.StormMode_SetFallgrimAsCurrentCheckpoint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_StormMode_C::StormMode_SetFallgrimAsCurrentCheckpoint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "StormMode_SetFallgrimAsCurrentCheckpoint");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.StormMode_SetGlandData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_StormModeProgress  Progress                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_StormModeGlandData GlandData                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_StormMode_C::StormMode_SetGlandData(enum class Enum_StormModeProgress Progress, enum class Enum_StormModeGlandData GlandData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "StormMode_SetGlandData");

	Params::AGameplayPC_StormMode_C_StormMode_SetGlandData_Params Parms{};

	Parms.Progress = Progress;
	Parms.GlandData = GlandData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.LastChanceSaveStatue
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_StormMode_C::LastChanceSaveStatue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "LastChanceSaveStatue");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.LoadStormModeLevel_Cathedral
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_StormMode_C::LoadStormModeLevel_Cathedral()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "LoadStormModeLevel_Cathedral");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.OnLevelShown_Cathedral
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_StormMode_C::OnLevelShown_Cathedral()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "OnLevelShown_Cathedral");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.LoadStormModeLevel_FireTemple
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_StormMode_C::LoadStormModeLevel_FireTemple()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "LoadStormModeLevel_FireTemple");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.OnLevelShown_FireTemple
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_StormMode_C::OnLevelShown_FireTemple()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "OnLevelShown_FireTemple");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.StormMode_SetSeeds
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_StormModeSeeds      Seeds                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_StormMode_C::StormMode_SetSeeds(const struct FStruct_StormModeSeeds& Seeds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "StormMode_SetSeeds");

	Params::AGameplayPC_StormMode_C_StormMode_SetSeeds_Params Parms{};

	Parms.Seeds = Seeds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.StormMode_ResetOnEndCredits
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_StormMode_C::StormMode_ResetOnEndCredits()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "StormMode_ResetOnEndCredits");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.StormMode_SetSelectedShell
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EArmorTypes             Shell                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_StormMode_C::StormMode_SetSelectedShell(enum class EArmorTypes Shell)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "StormMode_SetSelectedShell");

	Params::AGameplayPC_StormMode_C_StormMode_SetSelectedShell_Params Parms{};

	Parms.Shell = Shell;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.StormModeRunStartOrResume
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_StormMode_C::StormModeRunStartOrResume()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "StormModeRunStartOrResume");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.HandleMoneyOnDeath
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_StormMode_C::HandleMoneyOnDeath()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "HandleMoneyOnDeath");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.BndEvt__RuneInventoryComponent_K2Node_ComponentBoundEvent_0_OnOpenNewArea__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                        ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_StormMode_C::BndEvt__RuneInventoryComponent_K2Node_ComponentBoundEvent_0_OnOpenNewArea__DelegateSignature(class FName ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "BndEvt__RuneInventoryComponent_K2Node_ComponentBoundEvent_0_OnOpenNewArea__DelegateSignature");

	Params::AGameplayPC_StormMode_C_BndEvt__RuneInventoryComponent_K2Node_ComponentBoundEvent_0_OnOpenNewArea__DelegateSignature_Params Parms{};

	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.ReceivePossess
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APawn*                       PossessedPawn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_StormMode_C::ReceivePossess(class APawn* PossessedPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "ReceivePossess");

	Params::AGameplayPC_StormMode_C_ReceivePossess_Params Parms{};

	Parms.PossessedPawn = PossessedPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.StormMode_ShowRuneNotify
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_Rune                Rune                                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               IsBonusRune                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_StormMode_C::StormMode_ShowRuneNotify(const struct FStruct_Rune& Rune, bool IsBonusRune)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "StormMode_ShowRuneNotify");

	Params::AGameplayPC_StormMode_C_StormMode_ShowRuneNotify_Params Parms{};

	Parms.Rune = Rune;
	Parms.IsBonusRune = IsBonusRune;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.Playtime_Start
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_StormMode_C::Playtime_Start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "Playtime_Start");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.Playtime_Stop
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_StormMode_C::Playtime_Stop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "Playtime_Stop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.Playtime_Check
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_StormMode_C::Playtime_Check()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "Playtime_Check");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.AddProgressRune
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_Rune                Rune                                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AGameplayPC_StormMode_C::AddProgressRune(const struct FStruct_Rune& Rune)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "AddProgressRune");

	Params::AGameplayPC_StormMode_C_AddProgressRune_Params Parms{};

	Parms.Rune = Rune;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.BndEvt__RuneInventoryComponent_K2Node_ComponentBoundEvent_2_OnBossRuneGained__DelegateSignature
// (BlueprintEvent)
// Parameters:

void AGameplayPC_StormMode_C::BndEvt__RuneInventoryComponent_K2Node_ComponentBoundEvent_2_OnBossRuneGained__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "BndEvt__RuneInventoryComponent_K2Node_ComponentBoundEvent_2_OnBossRuneGained__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.BndEvt__RuneInventoryComponent_K2Node_ComponentBoundEvent_3_OnGlandRuneGained__DelegateSignature
// (BlueprintEvent)
// Parameters:

void AGameplayPC_StormMode_C::BndEvt__RuneInventoryComponent_K2Node_ComponentBoundEvent_3_OnGlandRuneGained__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "BndEvt__RuneInventoryComponent_K2Node_ComponentBoundEvent_3_OnGlandRuneGained__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.StormMode_UpdateCheckpointTransform
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  Checkpoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)

void AGameplayPC_StormMode_C::StormMode_UpdateCheckpointTransform(const struct FTransform& Checkpoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "StormMode_UpdateCheckpointTransform");

	Params::AGameplayPC_StormMode_C_StormMode_UpdateCheckpointTransform_Params Parms{};

	Parms.Checkpoint = Checkpoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.OnAreaOpen_TeleportPlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_StormMode_C::OnAreaOpen_TeleportPlayer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "OnAreaOpen_TeleportPlayer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AGameplayPC_StormMode_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.StormMode_IncrementAreaProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_StormMode_C::StormMode_IncrementAreaProgress()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "StormMode_IncrementAreaProgress");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.OnChaliceUnlocked_TeleportPlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_StormMode_C::OnChaliceUnlocked_TeleportPlayer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "OnChaliceUnlocked_TeleportPlayer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.OnLevelShown_Fallgrim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_StormMode_C::OnLevelShown_Fallgrim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "OnLevelShown_Fallgrim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.OnGameLoaded
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_StormMode_C::OnGameLoaded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "OnGameLoaded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.SetStormModeProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_StormModeProgress  Progress                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_StormMode_C::SetStormModeProgress(enum class Enum_StormModeProgress Progress)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "SetStormModeProgress");

	Params::AGameplayPC_StormMode_C_SetStormModeProgress_Params Parms{};

	Parms.Progress = Progress;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.DeathAfterLastChance
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Killer                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_StormMode_C::DeathAfterLastChance(class AActor* Killer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "DeathAfterLastChance");

	Params::AGameplayPC_StormMode_C_DeathAfterLastChance_Params Parms{};

	Parms.Killer = Killer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.StormMode_DisableWeaponNotify
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_StormMode_C::StormMode_DisableWeaponNotify()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "StormMode_DisableWeaponNotify");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.StormMode_TeleportToNewArea
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_StormMode_C::StormMode_TeleportToNewArea(class FName ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "StormMode_TeleportToNewArea");

	Params::AGameplayPC_StormMode_C_StormMode_TeleportToNewArea_Params Parms{};

	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.StormMode_TeleportToChalice
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_StormMode_C::StormMode_TeleportToChalice()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "StormMode_TeleportToChalice");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.StormMode_FireLevelAsCurrentCheckpoint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_StormMode_C::StormMode_FireLevelAsCurrentCheckpoint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "StormMode_FireLevelAsCurrentCheckpoint");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.StormMode_CryptAsCurrentCheckpoint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_StormMode_C::StormMode_CryptAsCurrentCheckpoint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "StormMode_CryptAsCurrentCheckpoint");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.StormMode_CathedralAsCurrentCheckpoint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_StormMode_C::StormMode_CathedralAsCurrentCheckpoint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "StormMode_CathedralAsCurrentCheckpoint");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.StormMode_CheckpointOnGlandTaken
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_StormMode_C::StormMode_CheckpointOnGlandTaken()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "StormMode_CheckpointOnGlandTaken");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.SetActiveCheckpoint
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CurrentCheckpoint                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CurrentCheckpointTransform                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// class FName                        CurrentMainLevel                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CurrentSubLevel                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_StormMode_C::SetActiveCheckpoint(class FName CurrentCheckpoint, const struct FTransform& CurrentCheckpointTransform, class FName CurrentMainLevel, class FName CurrentSubLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "SetActiveCheckpoint");

	Params::AGameplayPC_StormMode_C_SetActiveCheckpoint_Params Parms{};

	Parms.CurrentCheckpoint = CurrentCheckpoint;
	Parms.CurrentCheckpointTransform = CurrentCheckpointTransform;
	Parms.CurrentMainLevel = CurrentMainLevel;
	Parms.CurrentSubLevel = CurrentSubLevel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.StormMode_UIVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Instant                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_StormMode_C::StormMode_UIVisibility(bool Show, bool Instant)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "StormMode_UIVisibility");

	Params::AGameplayPC_StormMode_C_StormMode_UIVisibility_Params Parms{};

	Parms.Show = Show;
	Parms.Instant = Instant;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.StormMode_RemoveItemWithNotify
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              AmountToRemove                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_StormMode_C::StormMode_RemoveItemWithNotify(class FName ID, int32 AmountToRemove)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "StormMode_RemoveItemWithNotify");

	Params::AGameplayPC_StormMode_C_StormMode_RemoveItemWithNotify_Params Parms{};

	Parms.ID = ID;
	Parms.AmountToRemove = AmountToRemove;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.StormMode_OnBeaten
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_StormMode_C::StormMode_OnBeaten()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "StormMode_OnBeaten");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.StormMode_ResetRunData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_StormMode_C::StormMode_ResetRunData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "StormMode_ResetRunData");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.IncreaseMilestoneProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_StormMode_C::IncreaseMilestoneProgress(class FName ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "IncreaseMilestoneProgress");

	Params::AGameplayPC_StormMode_C_IncreaseMilestoneProgress_Params Parms{};

	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.SetMilestoneProgressIfLess
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NewMinVal                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_StormMode_C::SetMilestoneProgressIfLess(class FName ID, int32 NewMinVal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "SetMilestoneProgressIfLess");

	Params::AGameplayPC_StormMode_C_SetMilestoneProgressIfLess_Params Parms{};

	Parms.ID = ID;
	Parms.NewMinVal = NewMinVal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.UpdateMilestonesOnInstinctGained
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_StormMode_C::UpdateMilestonesOnInstinctGained()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "UpdateMilestonesOnInstinctGained");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.OnStormModeProgressChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_StormMode_C::OnStormModeProgressChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "OnStormModeProgressChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.AddNewRune
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_Rune                Rune                                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               ShowNotify_                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsBonusRune_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ForceHealEffect_                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_StormMode_C::AddNewRune(const struct FStruct_Rune& Rune, bool ShowNotify_, bool IsBonusRune_, bool ForceHealEffect_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "AddNewRune");

	Params::AGameplayPC_StormMode_C_AddNewRune_Params Parms{};

	Parms.Rune = Rune;
	Parms.ShowNotify_ = ShowNotify_;
	Parms.IsBonusRune_ = IsBonusRune_;
	Parms.ForceHealEffect_ = ForceHealEffect_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.StormMode_AddShadeAbility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_StormMode_C::StormMode_AddShadeAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "StormMode_AddShadeAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.StormMode_DebugConcurrentEnemy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Remove                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_StormMode_C::StormMode_DebugConcurrentEnemy(bool Remove)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "StormMode_DebugConcurrentEnemy");

	Params::AGameplayPC_StormMode_C_StormMode_DebugConcurrentEnemy_Params Parms{};

	Parms.Remove = Remove;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.SaveKiller
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Killer                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_StormMode_C::SaveKiller(class AActor* Killer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "SaveKiller");

	Params::AGameplayPC_StormMode_C_SaveKiller_Params Parms{};

	Parms.Killer = Killer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.StormMode_FinalBossAsCurrentCheckpoint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_StormMode_C::StormMode_FinalBossAsCurrentCheckpoint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "StormMode_FinalBossAsCurrentCheckpoint");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.StormMode_ShowEndWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_StormMode_C::StormMode_ShowEndWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "StormMode_ShowEndWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.CheckSMBeatenAchievement
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_StormMode_C::CheckSMBeatenAchievement()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "CheckSMBeatenAchievement");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.OnSisterAudio_Start
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_StormMode_C::OnSisterAudio_Start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "OnSisterAudio_Start");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.OnSisterAudio_End
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_StormMode_C::OnSisterAudio_End()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "OnSisterAudio_End");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.StormMode_ShowCycleCompletedScreen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_StormMode_C::StormMode_ShowCycleCompletedScreen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "StormMode_ShowCycleCompletedScreen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.StormMode_CompleteCycleAndSave
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_StormMode_C::StormMode_CompleteCycleAndSave()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "StormMode_CompleteCycleAndSave");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.StormMode_UpdateSelectedWeapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EComboTypes             Weapon                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_StormMode_C::StormMode_UpdateSelectedWeapon(enum class EComboTypes Weapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "StormMode_UpdateSelectedWeapon");

	Params::AGameplayPC_StormMode_C_StormMode_UpdateSelectedWeapon_Params Parms{};

	Parms.Weapon = Weapon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.StormMode_UpdateEquippedLute
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Lute                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_StormMode_C::StormMode_UpdateEquippedLute(class FName Lute)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "StormMode_UpdateEquippedLute");

	Params::AGameplayPC_StormMode_C_StormMode_UpdateEquippedLute_Params Parms{};

	Parms.Lute = Lute;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.ExecuteUbergraph_GameplayPC_StormMode
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_2                                    (HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputActionEvent_Key_1                                    (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key                                      (HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_GM_C>K2Node_DynamicCast_AsBPI_Storm_Mode_GM                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadLevelInstance_bOutSuccess                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ULevelStreamingDynamic*      CallFunc_LoadLevelInstance_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_ComponentBoundEvent_ID_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_StormModeArea      K2Node_Event_Area                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_StormModeAreaState K2Node_Event_EntranceState                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_3                                    (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_4                                    (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_5                                    (HasGetValueTypeHash)
// enum class Enum_StormModeProgress  K2Node_Event_Progress_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_StormModeGlandData K2Node_Event_GlandData                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_10                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetControlledPawnLocation_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadLevelInstance_bOutSuccess_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ULevelStreamingDynamic*      CallFunc_LoadLevelInstance_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadLevelInstance_bOutSuccess_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ULevelStreamingDynamic*      CallFunc_LoadLevelInstance_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_StormModeSeeds      K2Node_Event_Seeds                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EArmorTypes             K2Node_Event_Shell                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_SeedManager_C*>   CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm, HasGetValueTypeHash)
// TArray<class ABP_SeedManager_C*>   CallFunc_GetAllActorsOfClass_OutActors_1                         (ReferenceParm, HasGetValueTypeHash)
// class ABP_SeedManager_C*           CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_SeedManager_C*           CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_AreaBlocker_C*>   CallFunc_GetAllActorsOfClass_OutActors_2                         (ReferenceParm, HasGetValueTypeHash)
// TArray<class ABP_SeedManager_C*>   CallFunc_GetAllActorsOfClass_OutActors_3                         (ReferenceParm, HasGetValueTypeHash)
// class ABP_SeedManager_C*           CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_11                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class ABP_SeedManager_C*>   CallFunc_GetAllActorsOfClass_OutActors_4                         (ReferenceParm, HasGetValueTypeHash)
// class FName                        K2Node_ComponentBoundEvent_ID                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_SeedManager_C*           CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_PossessedPawn                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABarbarous_StormMode_C*      K2Node_DynamicCast_AsBarbarous_Storm_Mode                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Rune                K2Node_Event_Rune_1                                              (HasGetValueTypeHash)
// bool                               K2Node_Event_IsBonusRune                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Rune                K2Node_CustomEvent_Rune                                          (HasGetValueTypeHash)
// struct FDateTime                   CallFunc_GetRunPlaytime_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyGland__ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  K2Node_Event_Checkpoint                                          (IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// TArray<class ABP_StormMode_Starter_C*>CallFunc_GetAllActorsOfClass_OutActors_5                         (ReferenceParm, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_12                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_StormMode_Starter_C*     CallFunc_Array_Get_Item_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_13                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadLevelInstance_bOutSuccess_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ULevelStreamingDynamic*      CallFunc_LoadLevelInstance_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// enum class Enum_StormModeProgress  K2Node_Event_Progress                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Killer                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_ID_3                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_Character_C>K2Node_DynamicCast_AsBPI_Storm_Mode_Character                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_StormModeArea      Temp_byte_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchName_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Event_CurrentCheckpoint                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  K2Node_Event_CurrentCheckpointTransform                          (IsPlainOldData, NoDestructor)
// class FName                        K2Node_Event_CurrentMainLevel                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_CurrentSubLevel                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Show                                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_Instant                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_14                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_15                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Event_ID_2                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_AmountToRemove                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RemoveInventoryItem_Success                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_StormModeAreaState Temp_byte_Variable_1                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_ID_1                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_ID                                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_NewMinVal                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNamedPCInt_Value                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNamedPCInt_Value_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetBeatMilestoneNameForShell_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetBeatMilestoneNameForShell_ReturnValue_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Rune                K2Node_Event_Rune                                                (HasGetValueTypeHash)
// bool                               K2Node_Event_ShowNotify_                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsBonusRune_                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_ForceHealEffect_                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_AddNewRune_ReloadRunesForCharacter_                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_Remove                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GoldenPathDialogueCounterName_PCIntName                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_StormModeArea      Temp_byte_Variable_2                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_Killer                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_16                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// enum class Enum_StormModePlayerKillerCallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_DeathDial_DiedInSM_PCIntName                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Interact_Dial_Talked_Once_This_Run_PCIntName            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_StormModeAreaState Temp_byte_Variable_3                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// enum class Enum_StormModeArea      Temp_byte_Variable_4                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_StormModeAreaState Temp_byte_Variable_5                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetBeatMilestoneNameForShell_ReturnValue_2              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EComboTypes             K2Node_Event_Weapon                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_Lute                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_StormMode_C::ExecuteUbergraph_GameplayPC_StormMode(int32 EntryPoint, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, const struct FKey& K2Node_InputActionEvent_Key_2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FKey& K2Node_InputActionEvent_Key_1, const struct FKey& K2Node_InputActionEvent_Key, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_8, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, TScriptInterface<class IBPI_StormMode_GM_C> K2Node_DynamicCast_AsBPI_Storm_Mode_GM, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LoadLevelInstance_bOutSuccess, class ULevelStreamingDynamic* CallFunc_LoadLevelInstance_ReturnValue, class FName K2Node_ComponentBoundEvent_ID_1, bool CallFunc_IsValid_ReturnValue_9, enum class Enum_StormModeArea K2Node_Event_Area, enum class Enum_StormModeAreaState K2Node_Event_EntranceState, const struct FKey& K2Node_InputActionEvent_Key_3, const struct FKey& K2Node_InputActionEvent_Key_4, const struct FKey& K2Node_InputActionEvent_Key_5, enum class Enum_StormModeProgress K2Node_Event_Progress_1, enum class Enum_StormModeGlandData K2Node_Event_GlandData, bool CallFunc_IsValid_ReturnValue_10, const struct FVector& CallFunc_GetControlledPawnLocation_ReturnValue, bool CallFunc_LoadLevelInstance_bOutSuccess_1, class ULevelStreamingDynamic* CallFunc_LoadLevelInstance_ReturnValue_1, bool CallFunc_LoadLevelInstance_bOutSuccess_2, class ULevelStreamingDynamic* CallFunc_LoadLevelInstance_ReturnValue_2, const struct FStruct_StormModeSeeds& K2Node_Event_Seeds, enum class EArmorTypes K2Node_Event_Shell, TArray<class ABP_SeedManager_C*>& CallFunc_GetAllActorsOfClass_OutActors, TArray<class ABP_SeedManager_C*>& CallFunc_GetAllActorsOfClass_OutActors_1, class ABP_SeedManager_C* CallFunc_Array_Get_Item, class ABP_SeedManager_C* CallFunc_Array_Get_Item_1, TArray<class ABP_AreaBlocker_C*>& CallFunc_GetAllActorsOfClass_OutActors_2, TArray<class ABP_SeedManager_C*>& CallFunc_GetAllActorsOfClass_OutActors_3, class ABP_SeedManager_C* CallFunc_Array_Get_Item_2, bool CallFunc_IsValid_ReturnValue_11, TArray<class ABP_SeedManager_C*>& CallFunc_GetAllActorsOfClass_OutActors_4, class FName K2Node_ComponentBoundEvent_ID, class ABP_SeedManager_C* CallFunc_Array_Get_Item_3, class APawn* K2Node_Event_PossessedPawn, class ABarbarous_StormMode_C* K2Node_DynamicCast_AsBarbarous_Storm_Mode, bool K2Node_DynamicCast_bSuccess_1, const struct FStruct_Rune& K2Node_Event_Rune_1, bool K2Node_Event_IsBonusRune, bool K2Node_SwitchName_CmpSuccess, bool CallFunc_NotEqual_ByteByte_ReturnValue, const struct FStruct_Rune& K2Node_CustomEvent_Rune, const struct FDateTime& CallFunc_GetRunPlaytime_ReturnValue, bool CallFunc_HasAnyGland__ReturnValue, const struct FTransform& K2Node_Event_Checkpoint, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<class ABP_StormMode_Starter_C*>& CallFunc_GetAllActorsOfClass_OutActors_5, bool CallFunc_IsValid_ReturnValue_12, class ABP_StormMode_Starter_C* CallFunc_Array_Get_Item_4, bool CallFunc_IsValid_ReturnValue_13, bool CallFunc_LoadLevelInstance_bOutSuccess_3, class ULevelStreamingDynamic* CallFunc_LoadLevelInstance_ReturnValue_3, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, enum class Enum_StormModeProgress K2Node_Event_Progress, class AActor* K2Node_Event_Killer, class FName K2Node_Event_ID_3, TScriptInterface<class IBPI_StormMode_Character_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Character, bool K2Node_DynamicCast_bSuccess_2, enum class Enum_StormModeArea Temp_byte_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool K2Node_SwitchName_CmpSuccess_1, class FName K2Node_Event_CurrentCheckpoint, const struct FTransform& K2Node_Event_CurrentCheckpointTransform, class FName K2Node_Event_CurrentMainLevel, class FName K2Node_Event_CurrentSubLevel, bool K2Node_Event_Show, bool K2Node_Event_Instant, bool CallFunc_IsValid_ReturnValue_14, bool CallFunc_IsValid_ReturnValue_15, bool K2Node_SwitchString_CmpSuccess, class FName K2Node_Event_ID_2, int32 K2Node_Event_AmountToRemove, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_RemoveInventoryItem_Success, enum class Enum_StormModeAreaState Temp_byte_Variable_1, class FName K2Node_Event_ID_1, class FName K2Node_Event_ID, int32 K2Node_Event_NewMinVal, int32 CallFunc_GetNamedPCInt_Value, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetNamedPCInt_Value_1, bool CallFunc_Less_IntInt_ReturnValue, class FName CallFunc_GetBeatMilestoneNameForShell_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, class FName CallFunc_GetBeatMilestoneNameForShell_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_2, const struct FStruct_Rune& K2Node_Event_Rune, bool K2Node_Event_ShowNotify_, bool K2Node_Event_IsBonusRune_, bool K2Node_Event_ForceHealEffect_, bool CallFunc_AddNewRune_ReloadRunesForCharacter_, bool K2Node_Event_Remove, class FName CallFunc_GoldenPathDialogueCounterName_PCIntName, int32 K2Node_Select_Default, int32 CallFunc_Add_IntInt_ReturnValue_1, enum class Enum_StormModeArea Temp_byte_Variable_2, class AActor* K2Node_CustomEvent_Killer, bool CallFunc_IsValid_ReturnValue_16, class UClass* CallFunc_GetObjectClass_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, enum class Enum_StormModePlayerKiller CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class FName CallFunc_DeathDial_DiedInSM_PCIntName, class FName CallFunc_Interact_Dial_Talked_Once_This_Run_PCIntName, enum class Enum_StormModeAreaState Temp_byte_Variable_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, enum class Enum_StormModeArea Temp_byte_Variable_4, enum class Enum_StormModeAreaState Temp_byte_Variable_5, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_BooleanAND_ReturnValue, class FName CallFunc_GetBeatMilestoneNameForShell_ReturnValue_2, enum class EComboTypes K2Node_Event_Weapon, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_1, class FName K2Node_Event_Lute)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "ExecuteUbergraph_GameplayPC_StormMode");

	Params::AGameplayPC_StormMode_C_ExecuteUbergraph_GameplayPC_StormMode_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.K2Node_InputActionEvent_Key_2 = K2Node_InputActionEvent_Key_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_InputActionEvent_Key_1 = K2Node_InputActionEvent_Key_1;
	Parms.K2Node_InputActionEvent_Key = K2Node_InputActionEvent_Key;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_GM = K2Node_DynamicCast_AsBPI_Storm_Mode_GM;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_LoadLevelInstance_bOutSuccess = CallFunc_LoadLevelInstance_bOutSuccess;
	Parms.CallFunc_LoadLevelInstance_ReturnValue = CallFunc_LoadLevelInstance_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_ID_1 = K2Node_ComponentBoundEvent_ID_1;
	Parms.CallFunc_IsValid_ReturnValue_9 = CallFunc_IsValid_ReturnValue_9;
	Parms.K2Node_Event_Area = K2Node_Event_Area;
	Parms.K2Node_Event_EntranceState = K2Node_Event_EntranceState;
	Parms.K2Node_InputActionEvent_Key_3 = K2Node_InputActionEvent_Key_3;
	Parms.K2Node_InputActionEvent_Key_4 = K2Node_InputActionEvent_Key_4;
	Parms.K2Node_InputActionEvent_Key_5 = K2Node_InputActionEvent_Key_5;
	Parms.K2Node_Event_Progress_1 = K2Node_Event_Progress_1;
	Parms.K2Node_Event_GlandData = K2Node_Event_GlandData;
	Parms.CallFunc_IsValid_ReturnValue_10 = CallFunc_IsValid_ReturnValue_10;
	Parms.CallFunc_GetControlledPawnLocation_ReturnValue = CallFunc_GetControlledPawnLocation_ReturnValue;
	Parms.CallFunc_LoadLevelInstance_bOutSuccess_1 = CallFunc_LoadLevelInstance_bOutSuccess_1;
	Parms.CallFunc_LoadLevelInstance_ReturnValue_1 = CallFunc_LoadLevelInstance_ReturnValue_1;
	Parms.CallFunc_LoadLevelInstance_bOutSuccess_2 = CallFunc_LoadLevelInstance_bOutSuccess_2;
	Parms.CallFunc_LoadLevelInstance_ReturnValue_2 = CallFunc_LoadLevelInstance_ReturnValue_2;
	Parms.K2Node_Event_Seeds = K2Node_Event_Seeds;
	Parms.K2Node_Event_Shell = K2Node_Event_Shell;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_1 = CallFunc_GetAllActorsOfClass_OutActors_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_2 = CallFunc_GetAllActorsOfClass_OutActors_2;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_3 = CallFunc_GetAllActorsOfClass_OutActors_3;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_IsValid_ReturnValue_11 = CallFunc_IsValid_ReturnValue_11;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_4 = CallFunc_GetAllActorsOfClass_OutActors_4;
	Parms.K2Node_ComponentBoundEvent_ID = K2Node_ComponentBoundEvent_ID;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.K2Node_Event_PossessedPawn = K2Node_Event_PossessedPawn;
	Parms.K2Node_DynamicCast_AsBarbarous_Storm_Mode = K2Node_DynamicCast_AsBarbarous_Storm_Mode;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_Event_Rune_1 = K2Node_Event_Rune_1;
	Parms.K2Node_Event_IsBonusRune = K2Node_Event_IsBonusRune;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.K2Node_CustomEvent_Rune = K2Node_CustomEvent_Rune;
	Parms.CallFunc_GetRunPlaytime_ReturnValue = CallFunc_GetRunPlaytime_ReturnValue;
	Parms.CallFunc_HasAnyGland__ReturnValue = CallFunc_HasAnyGland__ReturnValue;
	Parms.K2Node_Event_Checkpoint = K2Node_Event_Checkpoint;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_5 = CallFunc_GetAllActorsOfClass_OutActors_5;
	Parms.CallFunc_IsValid_ReturnValue_12 = CallFunc_IsValid_ReturnValue_12;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_IsValid_ReturnValue_13 = CallFunc_IsValid_ReturnValue_13;
	Parms.CallFunc_LoadLevelInstance_bOutSuccess_3 = CallFunc_LoadLevelInstance_bOutSuccess_3;
	Parms.CallFunc_LoadLevelInstance_ReturnValue_3 = CallFunc_LoadLevelInstance_ReturnValue_3;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.K2Node_Event_Progress = K2Node_Event_Progress;
	Parms.K2Node_Event_Killer = K2Node_Event_Killer;
	Parms.K2Node_Event_ID_3 = K2Node_Event_ID_3;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_Character = K2Node_DynamicCast_AsBPI_Storm_Mode_Character;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_SwitchName_CmpSuccess_1 = K2Node_SwitchName_CmpSuccess_1;
	Parms.K2Node_Event_CurrentCheckpoint = K2Node_Event_CurrentCheckpoint;
	Parms.K2Node_Event_CurrentCheckpointTransform = K2Node_Event_CurrentCheckpointTransform;
	Parms.K2Node_Event_CurrentMainLevel = K2Node_Event_CurrentMainLevel;
	Parms.K2Node_Event_CurrentSubLevel = K2Node_Event_CurrentSubLevel;
	Parms.K2Node_Event_Show = K2Node_Event_Show;
	Parms.K2Node_Event_Instant = K2Node_Event_Instant;
	Parms.CallFunc_IsValid_ReturnValue_14 = CallFunc_IsValid_ReturnValue_14;
	Parms.CallFunc_IsValid_ReturnValue_15 = CallFunc_IsValid_ReturnValue_15;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;
	Parms.K2Node_Event_ID_2 = K2Node_Event_ID_2;
	Parms.K2Node_Event_AmountToRemove = K2Node_Event_AmountToRemove;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_RemoveInventoryItem_Success = CallFunc_RemoveInventoryItem_Success;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Event_ID_1 = K2Node_Event_ID_1;
	Parms.K2Node_Event_ID = K2Node_Event_ID;
	Parms.K2Node_Event_NewMinVal = K2Node_Event_NewMinVal;
	Parms.CallFunc_GetNamedPCInt_Value = CallFunc_GetNamedPCInt_Value;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetNamedPCInt_Value_1 = CallFunc_GetNamedPCInt_Value_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetBeatMilestoneNameForShell_ReturnValue = CallFunc_GetBeatMilestoneNameForShell_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_GetBeatMilestoneNameForShell_ReturnValue_1 = CallFunc_GetBeatMilestoneNameForShell_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.K2Node_Event_Rune = K2Node_Event_Rune;
	Parms.K2Node_Event_ShowNotify_ = K2Node_Event_ShowNotify_;
	Parms.K2Node_Event_IsBonusRune_ = K2Node_Event_IsBonusRune_;
	Parms.K2Node_Event_ForceHealEffect_ = K2Node_Event_ForceHealEffect_;
	Parms.CallFunc_AddNewRune_ReloadRunesForCharacter_ = CallFunc_AddNewRune_ReloadRunesForCharacter_;
	Parms.K2Node_Event_Remove = K2Node_Event_Remove;
	Parms.CallFunc_GoldenPathDialogueCounterName_PCIntName = CallFunc_GoldenPathDialogueCounterName_PCIntName;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.K2Node_CustomEvent_Killer = K2Node_CustomEvent_Killer;
	Parms.CallFunc_IsValid_ReturnValue_16 = CallFunc_IsValid_ReturnValue_16;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_DeathDial_DiedInSM_PCIntName = CallFunc_DeathDial_DiedInSM_PCIntName;
	Parms.CallFunc_Interact_Dial_Talked_Once_This_Run_PCIntName = CallFunc_Interact_Dial_Talked_Once_This_Run_PCIntName;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = CallFunc_EqualEqual_ByteByte_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetBeatMilestoneNameForShell_ReturnValue_2 = CallFunc_GetBeatMilestoneNameForShell_ReturnValue_2;
	Parms.K2Node_Event_Weapon = K2Node_Event_Weapon;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_1 = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_1;
	Parms.K2Node_Event_Lute = K2Node_Event_Lute;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.OnMilestoneUnlocked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LastUnlockedTier                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_StormMode_C::OnMilestoneUnlocked__DelegateSignature(class FName ID, int32 LastUnlockedTier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "OnMilestoneUnlocked__DelegateSignature");

	Params::AGameplayPC_StormMode_C_OnMilestoneUnlocked__DelegateSignature_Params Parms{};

	Parms.ID = ID;
	Parms.LastUnlockedTier = LastUnlockedTier;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.StormMode_RuneNotify__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_RuneFancyNotification_C* Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_StormMode_C::StormMode_RuneNotify__DelegateSignature(class UUI_RuneFancyNotification_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "StormMode_RuneNotify__DelegateSignature");

	Params::AGameplayPC_StormMode_C_StormMode_RuneNotify__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC_StormMode.GameplayPC_StormMode_C.StormMode_RunStart__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_StormMode_C::StormMode_RunStart__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_StormMode_C", "StormMode_RunStart__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}



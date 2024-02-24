#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GameplayPC.GameplayPC_C
// (Actor, PlayerController)

class UClass* AGameplayPC_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayPC_C");

	return Clss;
}


// GameplayPC_C GameplayPC.Default__GameplayPC_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGameplayPC_C* AGameplayPC_C::GetDefaultObj()
{
	static class AGameplayPC_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGameplayPC_C*>(AGameplayPC_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GameplayPC.GameplayPC_C.PCLoadingScreen_GetItemsDiscovered
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                ItemsDiscovered                                                  (Parm, OutParm, HasGetValueTypeHash)
// bool                               Empty                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::PCLoadingScreen_GetItemsDiscovered(TArray<class FName>* ItemsDiscovered, bool* Empty)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "PCLoadingScreen_GetItemsDiscovered");

	Params::AGameplayPC_C_PCLoadingScreen_GetItemsDiscovered_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ItemsDiscovered != nullptr)
		*ItemsDiscovered = std::move(Parms.ItemsDiscovered);

	if (Empty != nullptr)
		*Empty = Parms.Empty;

}


// Function GameplayPC.GameplayPC_C.PCLoadingScreen_GetLoadingScreenInfo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryItem              InventoryItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int32                              LocalFamiliarity                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      ItemEffectDescription                                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_GetItemFamiliarity_Value                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_CreateItemEffectDescription_ReturnValue                 (ZeroConstructor, HasGetValueTypeHash)

void AGameplayPC_C::PCLoadingScreen_GetLoadingScreenInfo(const struct FInventoryItem& InventoryItem, int32* LocalFamiliarity, class FString* ItemEffectDescription, int32 CallFunc_GetItemFamiliarity_Value, const class FString& CallFunc_CreateItemEffectDescription_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "PCLoadingScreen_GetLoadingScreenInfo");

	Params::AGameplayPC_C_PCLoadingScreen_GetLoadingScreenInfo_Params Parms{};

	Parms.InventoryItem = InventoryItem;
	Parms.CallFunc_GetItemFamiliarity_Value = CallFunc_GetItemFamiliarity_Value;
	Parms.CallFunc_CreateItemEffectDescription_ReturnValue = CallFunc_CreateItemEffectDescription_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (LocalFamiliarity != nullptr)
		*LocalFamiliarity = Parms.LocalFamiliarity;

	if (ItemEffectDescription != nullptr)
		*ItemEffectDescription = std::move(Parms.ItemEffectDescription);

}


// Function GameplayPC.GameplayPC_C.IsSkinApplied
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_Skins              Skin                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetSkinID_ID                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

bool AGameplayPC_C::IsSkinApplied(enum class Enum_Skins Skin, class FName CallFunc_GetSkinID_ID, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "IsSkinApplied");

	Params::AGameplayPC_C_IsSkinApplied_Params Parms{};

	Parms.Skin = Skin;
	Parms.CallFunc_GetSkinID_ID = CallFunc_GetSkinID_ID;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameplayPC.GameplayPC_C.StormMode_HasLoreEntry
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

bool AGameplayPC_C::StormMode_HasLoreEntry(class FName ID, bool CallFunc_Array_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "StormMode_HasLoreEntry");

	Params::AGameplayPC_C_StormMode_HasLoreEntry_Params Parms{};

	Parms.ID = ID;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameplayPC.GameplayPC_C.GetHideUI
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AGameplayPC_C::GetHideUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "GetHideUI");

	Params::AGameplayPC_C_GetHideUI_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameplayPC.GameplayPC_C.GetMainLevelFromSave_StormMode
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Level                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_Slot                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Local_SlotName                                                   (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class UDHGameInstance*             CallFunc_GetInstance_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPrimaryUserIndex_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDHGameInstance*             CallFunc_GetInstance_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesSaveGameExist_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetPrimaryUserIndex_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   CallFunc_DHLoadGameFromSlot_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class UServerSaveGame_C*           K2Node_DynamicCast_AsServer_Save_Game                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetCurrentSaveSlot_Slot                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::GetMainLevelFromSave_StormMode(class FName* Level, int32 Local_Slot, const class FString& Local_SlotName, class UDHGameInstance* CallFunc_GetInstance_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, int32 CallFunc_GetPrimaryUserIndex_ReturnValue, class UDHGameInstance* CallFunc_GetInstance_ReturnValue_1, bool CallFunc_DoesSaveGameExist_ReturnValue, int32 CallFunc_GetPrimaryUserIndex_ReturnValue_1, class USaveGame* CallFunc_DHLoadGameFromSlot_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class UServerSaveGame_C* K2Node_DynamicCast_AsServer_Save_Game, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_GetCurrentSaveSlot_Slot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "GetMainLevelFromSave_StormMode");

	Params::AGameplayPC_C_GetMainLevelFromSave_StormMode_Params Parms{};

	Parms.Local_Slot = Local_Slot;
	Parms.Local_SlotName = Local_SlotName;
	Parms.CallFunc_GetInstance_ReturnValue = CallFunc_GetInstance_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_GetPrimaryUserIndex_ReturnValue = CallFunc_GetPrimaryUserIndex_ReturnValue;
	Parms.CallFunc_GetInstance_ReturnValue_1 = CallFunc_GetInstance_ReturnValue_1;
	Parms.CallFunc_DoesSaveGameExist_ReturnValue = CallFunc_DoesSaveGameExist_ReturnValue;
	Parms.CallFunc_GetPrimaryUserIndex_ReturnValue_1 = CallFunc_GetPrimaryUserIndex_ReturnValue_1;
	Parms.CallFunc_DHLoadGameFromSlot_ReturnValue = CallFunc_DHLoadGameFromSlot_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.K2Node_DynamicCast_AsServer_Save_Game = K2Node_DynamicCast_AsServer_Save_Game;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetCurrentSaveSlot_Slot = CallFunc_GetCurrentSaveSlot_Slot;

	UObject::ProcessEvent(Func, &Parms);

	if (Level != nullptr)
		*Level = Parms.Level;

}


// Function GameplayPC.GameplayPC_C.GetMainLevelFromSave
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Level                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Local_SlotName                                                   (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// int32                              Local_Slot                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDHGameInstance*             CallFunc_GetInstance_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPrimaryUserIndex_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDHGameInstance*             CallFunc_GetInstance_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesSaveGameExist_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetPrimaryUserIndex_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   CallFunc_DHLoadGameFromSlot_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class UServerSaveGame_C*           K2Node_DynamicCast_AsServer_Save_Game                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetCurrentSaveSlot_Slot                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::GetMainLevelFromSave(class FName* Level, const class FString& Local_SlotName, int32 Local_Slot, class UDHGameInstance* CallFunc_GetInstance_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, int32 CallFunc_GetPrimaryUserIndex_ReturnValue, class UDHGameInstance* CallFunc_GetInstance_ReturnValue_1, bool CallFunc_DoesSaveGameExist_ReturnValue, int32 CallFunc_GetPrimaryUserIndex_ReturnValue_1, class USaveGame* CallFunc_DHLoadGameFromSlot_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class UServerSaveGame_C* K2Node_DynamicCast_AsServer_Save_Game, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_GetCurrentSaveSlot_Slot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "GetMainLevelFromSave");

	Params::AGameplayPC_C_GetMainLevelFromSave_Params Parms{};

	Parms.Local_SlotName = Local_SlotName;
	Parms.Local_Slot = Local_Slot;
	Parms.CallFunc_GetInstance_ReturnValue = CallFunc_GetInstance_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_GetPrimaryUserIndex_ReturnValue = CallFunc_GetPrimaryUserIndex_ReturnValue;
	Parms.CallFunc_GetInstance_ReturnValue_1 = CallFunc_GetInstance_ReturnValue_1;
	Parms.CallFunc_DoesSaveGameExist_ReturnValue = CallFunc_DoesSaveGameExist_ReturnValue;
	Parms.CallFunc_GetPrimaryUserIndex_ReturnValue_1 = CallFunc_GetPrimaryUserIndex_ReturnValue_1;
	Parms.CallFunc_DHLoadGameFromSlot_ReturnValue = CallFunc_DHLoadGameFromSlot_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.K2Node_DynamicCast_AsServer_Save_Game = K2Node_DynamicCast_AsServer_Save_Game;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetCurrentSaveSlot_Slot = CallFunc_GetCurrentSaveSlot_Slot;

	UObject::ProcessEvent(Func, &Parms);

	if (Level != nullptr)
		*Level = Parms.Level;

}


// Function GameplayPC.GameplayPC_C.GetIsInputBlocked
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AGameplayPC_C::GetIsInputBlocked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "GetIsInputBlocked");

	Params::AGameplayPC_C_GetIsInputBlocked_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameplayPC.GameplayPC_C.InventoryUtil_IsTutorialUnlocked?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Tut                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Unlocked_                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::InventoryUtil_IsTutorialUnlocked_(class FName Tut, bool* Unlocked_, bool CallFunc_Array_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "InventoryUtil_IsTutorialUnlocked?");

	Params::AGameplayPC_C_InventoryUtil_IsTutorialUnlocked__Params Parms{};

	Parms.Tut = Tut;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Unlocked_ != nullptr)
		*Unlocked_ = Parms.Unlocked_;

}


// Function GameplayPC.GameplayPC_C.GetIsInBossFight
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AGameplayPC_C::GetIsInBossFight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "GetIsInBossFight");

	Params::AGameplayPC_C_GetIsInBossFight_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameplayPC.GameplayPC_C.GetHadernAbilityTextFromIndex
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               InvalidIndex                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Text                                                             (Parm, OutParm)
// class FName                        Local_Key                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetHadernSkillKeyFromIndex_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::GetHadernAbilityTextFromIndex(int32 Index, bool* InvalidIndex, class FText* Text, class FName Local_Key, class FName CallFunc_GetHadernSkillKeyFromIndex_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, class FText CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "GetHadernAbilityTextFromIndex");

	Params::AGameplayPC_C_GetHadernAbilityTextFromIndex_Params Parms{};

	Parms.Index = Index;
	Parms.Local_Key = Local_Key;
	Parms.CallFunc_GetHadernSkillKeyFromIndex_ReturnValue = CallFunc_GetHadernSkillKeyFromIndex_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (InvalidIndex != nullptr)
		*InvalidIndex = Parms.InvalidIndex;

	if (Text != nullptr)
		*Text = Parms.Text;

}


// Function GameplayPC.GameplayPC_C.GetHadernAbilityTextFromSlot
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_HadernSkills       HadernSlot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Text                                                             (Parm, OutParm)
// class FName                        CallFunc_GetHadernSkillKeyFromSlot_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::GetHadernAbilityTextFromSlot(enum class Enum_HadernSkills HadernSlot, class FText* Text, class FName CallFunc_GetHadernSkillKeyFromSlot_ReturnValue, class FText CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "GetHadernAbilityTextFromSlot");

	Params::AGameplayPC_C_GetHadernAbilityTextFromSlot_Params Parms{};

	Parms.HadernSlot = HadernSlot;
	Parms.CallFunc_GetHadernSkillKeyFromSlot_ReturnValue = CallFunc_GetHadernSkillKeyFromSlot_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

}


// Function GameplayPC.GameplayPC_C.GetCurrentHadernAbilityForSlot
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_HadernSkills       HadernSlot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        AbilityID                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetHadernSkillKeyFromSlot_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::GetCurrentHadernAbilityForSlot(enum class Enum_HadernSkills HadernSlot, class FName* AbilityID, class FName CallFunc_GetHadernSkillKeyFromSlot_ReturnValue, class FName CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "GetCurrentHadernAbilityForSlot");

	Params::AGameplayPC_C_GetCurrentHadernAbilityForSlot_Params Parms{};

	Parms.HadernSlot = HadernSlot;
	Parms.CallFunc_GetHadernSkillKeyFromSlot_ReturnValue = CallFunc_GetHadernSkillKeyFromSlot_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (AbilityID != nullptr)
		*AbilityID = Parms.AbilityID;

}


// Function GameplayPC.GameplayPC_C.StormMode_GetCurrentMainLevelFromSave
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Level                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Local_Level                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)

void AGameplayPC_C::StormMode_GetCurrentMainLevelFromSave(class FName* Level, class FName Local_Level, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "StormMode_GetCurrentMainLevelFromSave");

	Params::AGameplayPC_C_StormMode_GetCurrentMainLevelFromSave_Params Parms{};

	Parms.Local_Level = Local_Level;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Level != nullptr)
		*Level = Parms.Level;

}


// Function GameplayPC.GameplayPC_C.GetEquipmentMenuType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_EquipmentMenuType  Menu                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AGameplayPC_C::GetEquipmentMenuType(enum class Enum_EquipmentMenuType* Menu)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "GetEquipmentMenuType");

	Params::AGameplayPC_C_GetEquipmentMenuType_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Menu != nullptr)
		*Menu = Parms.Menu;

	return Parms.ReturnValue;

}


// Function GameplayPC.GameplayPC_C.CanOpenPhotoModeFromPauseMenu
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor)

bool AGameplayPC_C::CanOpenPhotoModeFromPauseMenu(bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_4, bool CallFunc_Not_PreBool_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "CanOpenPhotoModeFromPauseMenu");

	Params::AGameplayPC_C_CanOpenPhotoModeFromPauseMenu_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.CallFunc_Not_PreBool_ReturnValue_4 = CallFunc_Not_PreBool_ReturnValue_4;
	Parms.CallFunc_Not_PreBool_ReturnValue_5 = CallFunc_Not_PreBool_ReturnValue_5;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue_4 = CallFunc_BooleanAND_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameplayPC.GameplayPC_C.GetIsInCutscene
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AGameplayPC_C::GetIsInCutscene()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "GetIsInCutscene");

	Params::AGameplayPC_C_GetIsInCutscene_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameplayPC.GameplayPC_C.GetShellDyesLockState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_ShellsDyes_LockStateLockState                                                        (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::GetShellDyesLockState(struct FStruct_ShellsDyes_LockState* LockState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "GetShellDyesLockState");

	Params::AGameplayPC_C_GetShellDyesLockState_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (LockState != nullptr)
		*LockState = std::move(Parms.LockState);

}


// Function GameplayPC.GameplayPC_C.GetHasRenouncedShell
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AGameplayPC_C::GetHasRenouncedShell()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "GetHasRenouncedShell");

	Params::AGameplayPC_C_GetHasRenouncedShell_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameplayPC.GameplayPC_C.GetShellDyes
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_ShellDyes           Dyes                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::GetShellDyes(struct FStruct_ShellDyes* Dyes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "GetShellDyes");

	Params::AGameplayPC_C_GetShellDyes_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Dyes != nullptr)
		*Dyes = std::move(Parms.Dyes);

}


// Function GameplayPC.GameplayPC_C.GetIsInPhotoMode
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PhotoMode_                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::GetIsInPhotoMode(bool* PhotoMode_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "GetIsInPhotoMode");

	Params::AGameplayPC_C_GetIsInPhotoMode_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (PhotoMode_ != nullptr)
		*PhotoMode_ = Parms.PhotoMode_;

}


// Function GameplayPC.GameplayPC_C.GameplayPC_IsInTutorial
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsInTutorial                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::GameplayPC_IsInTutorial(bool* IsInTutorial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "GameplayPC_IsInTutorial");

	Params::AGameplayPC_C_GameplayPC_IsInTutorial_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsInTutorial != nullptr)
		*IsInTutorial = Parms.IsInTutorial;

}


// Function GameplayPC.GameplayPC_C.InventoryUtil_IsUpgradeUnlocked
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        UnlockID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Unlocked                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::InventoryUtil_IsUpgradeUnlocked(class FName UnlockID, bool* Unlocked, bool CallFunc_Array_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "InventoryUtil_IsUpgradeUnlocked");

	Params::AGameplayPC_C_InventoryUtil_IsUpgradeUnlocked_Params Parms{};

	Parms.UnlockID = UnlockID;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Unlocked != nullptr)
		*Unlocked = Parms.Unlocked;

}


// Function GameplayPC.GameplayPC_C.InventoryUtil_GetCanUseItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               UsableInDarkForm                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_InventoryItem_CanUseReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EComboTypes             Local_SummonedWeapon                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_InventoryItem_CanUseLocal_CanUseItem                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EArmorTypes             Local_EffigyShell                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EComboTypes             Local_CurrentWeapon                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EArmorTypes             Local_CurrentShell                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_HasRenouncedShells_                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AZero_Base_C*                Local_0Base                                                      (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               Local_GameplayPC                                                 (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_UsableInDarkForm                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Local_ID                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetCurrentPersistentLevelName_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetCharacterWeaponIDFromEnum_ID                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckPlayerInventoryForGland_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsShellNameKnown_bKnown                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetShellUnlockID_ShellUnlockID                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUpgradeUnlocked_bUnlocked                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

enum class Enum_InventoryItem_CanUse AGameplayPC_C::InventoryUtil_GetCanUseItem(class FName ID, bool UsableInDarkForm, enum class EComboTypes Local_SummonedWeapon, enum class Enum_InventoryItem_CanUse Local_CanUseItem, enum class EArmorTypes Local_EffigyShell, enum class EComboTypes Local_CurrentWeapon, enum class EArmorTypes Local_CurrentShell, bool Local_HasRenouncedShells_, class AZero_Base_C* Local_0Base, class AGameplayPC_C* Local_GameplayPC, bool Local_UsableInDarkForm, class FName Local_ID, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, class FName CallFunc_GetCurrentPersistentLevelName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, class FName CallFunc_GetCharacterWeaponIDFromEnum_ID, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_CheckPlayerInventoryForGland_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool K2Node_SwitchName_CmpSuccess, bool CallFunc_BooleanOR_ReturnValue_1, class FName Temp_name_Variable, class FName CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_IsShellNameKnown_bKnown, class FName CallFunc_GetShellUnlockID_ShellUnlockID, bool CallFunc_IsUpgradeUnlocked_bUnlocked, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "InventoryUtil_GetCanUseItem");

	Params::AGameplayPC_C_InventoryUtil_GetCanUseItem_Params Parms{};

	Parms.ID = ID;
	Parms.UsableInDarkForm = UsableInDarkForm;
	Parms.Local_SummonedWeapon = Local_SummonedWeapon;
	Parms.Local_CanUseItem = Local_CanUseItem;
	Parms.Local_EffigyShell = Local_EffigyShell;
	Parms.Local_CurrentWeapon = Local_CurrentWeapon;
	Parms.Local_CurrentShell = Local_CurrentShell;
	Parms.Local_HasRenouncedShells_ = Local_HasRenouncedShells_;
	Parms.Local_0Base = Local_0Base;
	Parms.Local_GameplayPC = Local_GameplayPC;
	Parms.Local_UsableInDarkForm = Local_UsableInDarkForm;
	Parms.Local_ID = Local_ID;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetCurrentPersistentLevelName_ReturnValue = CallFunc_GetCurrentPersistentLevelName_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_GetCharacterWeaponIDFromEnum_ID = CallFunc_GetCharacterWeaponIDFromEnum_ID;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_CheckPlayerInventoryForGland_ReturnValue = CallFunc_CheckPlayerInventoryForGland_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = CallFunc_EqualEqual_ByteByte_ReturnValue_3;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_IsShellNameKnown_bKnown = CallFunc_IsShellNameKnown_bKnown;
	Parms.CallFunc_GetShellUnlockID_ShellUnlockID = CallFunc_GetShellUnlockID_ShellUnlockID;
	Parms.CallFunc_IsUpgradeUnlocked_bUnlocked = CallFunc_IsUpgradeUnlocked_bUnlocked;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameplayPC.GameplayPC_C.UI_GetContainerItem
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ContainerSlot                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryItem              InventoryItem                                                    (Parm, OutParm, HasGetValueTypeHash)
// struct FInventoryItem              CallFunc_GetInventoryItem_InventoryItem                          (HasGetValueTypeHash)

void AGameplayPC_C::UI_GetContainerItem(int32 ContainerSlot, struct FInventoryItem* InventoryItem, const struct FInventoryItem& CallFunc_GetInventoryItem_InventoryItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "UI_GetContainerItem");

	Params::AGameplayPC_C_UI_GetContainerItem_Params Parms{};

	Parms.ContainerSlot = ContainerSlot;
	Parms.CallFunc_GetInventoryItem_InventoryItem = CallFunc_GetInventoryItem_InventoryItem;

	UObject::ProcessEvent(Func, &Parms);

	if (InventoryItem != nullptr)
		*InventoryItem = std::move(Parms.InventoryItem);

}


// Function GameplayPC.GameplayPC_C.UI_GetInventoryItemFromSlot
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              InventorySlot                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryItem              InventoryItem                                                    (Parm, OutParm, HasGetValueTypeHash)
// struct FInventoryItem              CallFunc_GetInventoryItem_InventoryItem                          (HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::UI_GetInventoryItemFromSlot(int32 InventorySlot, struct FInventoryItem* InventoryItem, const struct FInventoryItem& CallFunc_GetInventoryItem_InventoryItem, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "UI_GetInventoryItemFromSlot");

	Params::AGameplayPC_C_UI_GetInventoryItemFromSlot_Params Parms{};

	Parms.InventorySlot = InventorySlot;
	Parms.CallFunc_GetInventoryItem_InventoryItem = CallFunc_GetInventoryItem_InventoryItem;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (InventoryItem != nullptr)
		*InventoryItem = std::move(Parms.InventoryItem);

}


// Function GameplayPC.GameplayPC_C.UI_GetWasInputKeyJustPressed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               WasKeyPressed                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_WasInputKeyJustPressed_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::UI_GetWasInputKeyJustPressed(bool* WasKeyPressed, bool CallFunc_WasInputKeyJustPressed_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "UI_GetWasInputKeyJustPressed");

	Params::AGameplayPC_C_UI_GetWasInputKeyJustPressed_Params Parms{};

	Parms.CallFunc_WasInputKeyJustPressed_ReturnValue = CallFunc_WasInputKeyJustPressed_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (WasKeyPressed != nullptr)
		*WasKeyPressed = Parms.WasKeyPressed;

}


// Function GameplayPC.GameplayPC_C.UI_GetNumPlayerDeaths
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              TotalPlayerDeaths                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::UI_GetNumPlayerDeaths(int32* TotalPlayerDeaths)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "UI_GetNumPlayerDeaths");

	Params::AGameplayPC_C_UI_GetNumPlayerDeaths_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (TotalPlayerDeaths != nullptr)
		*TotalPlayerDeaths = Parms.TotalPlayerDeaths;

}


// Function GameplayPC.GameplayPC_C.UI_Get_InventorySlots
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UInventory_Slot_C*>   NewParam                                                         (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)

void AGameplayPC_C::UI_Get_InventorySlots(TArray<class UInventory_Slot_C*>* NewParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "UI_Get_InventorySlots");

	Params::AGameplayPC_C_UI_Get_InventorySlots_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = std::move(Parms.NewParam);

}


// Function GameplayPC.GameplayPC_C.UI_Get_PlayerStats
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Gold                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Damage                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Armor                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Strength                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Dexterity                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Intelligence                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InventorySize                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::UI_Get_PlayerStats(int32* Gold, int32* Damage, int32* Armor, int32* Strength, int32* Dexterity, int32* Intelligence, int32* InventorySize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "UI_Get_PlayerStats");

	Params::AGameplayPC_C_UI_Get_PlayerStats_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Gold != nullptr)
		*Gold = Parms.Gold;

	if (Damage != nullptr)
		*Damage = Parms.Damage;

	if (Armor != nullptr)
		*Armor = Parms.Armor;

	if (Strength != nullptr)
		*Strength = Parms.Strength;

	if (Dexterity != nullptr)
		*Dexterity = Parms.Dexterity;

	if (Intelligence != nullptr)
		*Intelligence = Parms.Intelligence;

	if (InventorySize != nullptr)
		*InventorySize = Parms.InventorySize;

}


// Function GameplayPC.GameplayPC_C.UI_Get_IsShiftKeyDown
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsShiftKeyDown                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::UI_Get_IsShiftKeyDown(bool* IsShiftKeyDown)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "UI_Get_IsShiftKeyDown");

	Params::AGameplayPC_C_UI_Get_IsShiftKeyDown_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsShiftKeyDown != nullptr)
		*IsShiftKeyDown = Parms.IsShiftKeyDown;

}


// Function GameplayPC.GameplayPC_C.LoadCurrentWeaponAndArmor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryItem              CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_StormModeContentIsEnabled_Enabled_                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetInventoryItem_Success                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_StormModeContentIsEnabled_Enabled__1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryItem              CallFunc_GetMainHandWeapon_EquippedMainHandWeapon                (HasGetValueTypeHash)
// enum class EComboTypes             CallFunc_GetCharacterWeaponEnumFromID_Weapon                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::LoadCurrentWeaponAndArmor(const struct FInventoryItem& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_StormModeContentIsEnabled_Enabled_, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_SetInventoryItem_Success, bool CallFunc_StormModeContentIsEnabled_Enabled__1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_2, const struct FInventoryItem& CallFunc_GetMainHandWeapon_EquippedMainHandWeapon, enum class EComboTypes CallFunc_GetCharacterWeaponEnumFromID_Weapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "LoadCurrentWeaponAndArmor");

	Params::AGameplayPC_C_LoadCurrentWeaponAndArmor_Params Parms{};

	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base = CallFunc_GetCharacterAs0_Base_As0_Base;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base_1 = CallFunc_GetCharacterAs0_Base_As0_Base_1;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_StormModeContentIsEnabled_Enabled_ = CallFunc_StormModeContentIsEnabled_Enabled_;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_1 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_SetInventoryItem_Success = CallFunc_SetInventoryItem_Success;
	Parms.CallFunc_StormModeContentIsEnabled_Enabled__1 = CallFunc_StormModeContentIsEnabled_Enabled__1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base_2 = CallFunc_GetCharacterAs0_Base_As0_Base_2;
	Parms.CallFunc_GetMainHandWeapon_EquippedMainHandWeapon = CallFunc_GetMainHandWeapon_EquippedMainHandWeapon;
	Parms.CallFunc_GetCharacterWeaponEnumFromID_Weapon = CallFunc_GetCharacterWeaponEnumFromID_Weapon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.DH_HideUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::DH_HideUI(bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "DH_HideUI");

	Params::AGameplayPC_C_DH_HideUI_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.SaveShouldEnableSuperStoneForm
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::SaveShouldEnableSuperStoneForm()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "SaveShouldEnableSuperStoneForm");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.LoadShouldEnableSuperStoneForm
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::LoadShouldEnableSuperStoneForm()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "LoadShouldEnableSuperStoneForm");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.SaveRiposteDeflectStacks
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::SaveRiposteDeflectStacks()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "SaveRiposteDeflectStacks");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.LoadRiposteDeflectStacks
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::LoadRiposteDeflectStacks()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "LoadRiposteDeflectStacks");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.SaveParryDeflectStacks
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::SaveParryDeflectStacks()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "SaveParryDeflectStacks");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.LoadParryDeflectStacks
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::LoadParryDeflectStacks()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "LoadParryDeflectStacks");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.StormModeMenu_Create
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_StormMode_Menu_C*        CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::StormModeMenu_Create(bool CallFunc_IsValid_ReturnValue, class UUI_StormMode_Menu_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "StormModeMenu_Create");

	Params::AGameplayPC_C_StormModeMenu_Create_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.PossessStormModeMenuActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::PossessStormModeMenuActor(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "PossessStormModeMenuActor");

	Params::AGameplayPC_C_PossessStormModeMenuActor_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.InterruptVideoSettingsWarning
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::InterruptVideoSettingsWarning(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "InterruptVideoSettingsWarning");

	Params::AGameplayPC_C_InterruptVideoSettingsWarning_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.PossessStormModeUpgradesCameraPawn
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>              CallFunc_GetAllActorsWithTag_OutActors                           (ReferenceParm, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_EquipmentMenuPawn_RunicGate_C*K2Node_DynamicCast_AsBP_Equipment_Menu_Pawn_Runic_Gate           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::PossessStormModeUpgradesCameraPawn(TArray<class AActor*>& CallFunc_GetAllActorsWithTag_OutActors, bool CallFunc_Array_IsValidIndex_ReturnValue, class AActor* CallFunc_Array_Get_Item, class ABP_EquipmentMenuPawn_RunicGate_C* K2Node_DynamicCast_AsBP_Equipment_Menu_Pawn_Runic_Gate, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "PossessStormModeUpgradesCameraPawn");

	Params::AGameplayPC_C_PossessStormModeUpgradesCameraPawn_Params Parms{};

	Parms.CallFunc_GetAllActorsWithTag_OutActors = CallFunc_GetAllActorsWithTag_OutActors;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsBP_Equipment_Menu_Pawn_Runic_Gate = K2Node_DynamicCast_AsBP_Equipment_Menu_Pawn_Runic_Gate;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.PossessStormModeUpgradesPawn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::PossessStormModeUpgradesPawn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "PossessStormModeUpgradesPawn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.RemoveStormModeUpgradesMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Condition                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::RemoveStormModeUpgradesMenu(bool Condition, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "RemoveStormModeUpgradesMenu");

	Params::AGameplayPC_C_RemoveStormModeUpgradesMenu_Params Parms{};

	Parms.Condition = Condition;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.PossessStormModeUpgradesActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::PossessStormModeUpgradesActor(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "PossessStormModeUpgradesActor");

	Params::AGameplayPC_C_PossessStormModeUpgradesActor_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.StormModeUpgradesMenu_Create
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_StormModeIsActive_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_StormModeUpgradesPanel_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::StormModeUpgradesMenu_Create(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_StormModeIsActive_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UUI_StormModeUpgradesPanel_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "StormModeUpgradesMenu_Create");

	Params::AGameplayPC_C_StormModeUpgradesMenu_Create_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_StormModeIsActive_ReturnValue = CallFunc_StormModeIsActive_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.DualSense_TransitionSound_Stop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::DualSense_TransitionSound_Stop(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "DualSense_TransitionSound_Stop");

	Params::AGameplayPC_C_DualSense_TransitionSound_Stop_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.DualSense_TransitionSound_Play
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAudioComponent*             CallFunc_Spawn2DControllerSound_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::DualSense_TransitionSound_Play(class UAudioComponent* CallFunc_Spawn2DControllerSound_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "DualSense_TransitionSound_Play");

	Params::AGameplayPC_C_DualSense_TransitionSound_Play_Params Parms{};

	Parms.CallFunc_Spawn2DControllerSound_ReturnValue = CallFunc_Spawn2DControllerSound_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.ResetCheckpointsSaveData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// TMap<class FName, class FName>     Temp_name_Variable                                               (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDHGameInstance*             CallFunc_GetInstance_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPrimaryUserIndex_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_DHSaveGameToSlot_Asynch_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::ResetCheckpointsSaveData(const class FString& CallFunc_Concat_StrStr_ReturnValue, TMap<class FName, class FName> Temp_name_Variable, bool CallFunc_IsValid_ReturnValue, class UDHGameInstance* CallFunc_GetInstance_ReturnValue, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, int32 CallFunc_GetPrimaryUserIndex_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_DHSaveGameToSlot_Asynch_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "ResetCheckpointsSaveData");

	Params::AGameplayPC_C_ResetCheckpointsSaveData_Params Parms{};

	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetInstance_ReturnValue = CallFunc_GetInstance_ReturnValue;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;
	Parms.CallFunc_GetPrimaryUserIndex_ReturnValue = CallFunc_GetPrimaryUserIndex_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_DHSaveGameToSlot_Asynch_ReturnValue = CallFunc_DHSaveGameToSlot_Asynch_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.GivePlayerKeyItem_NoNotify
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryItem              CallFunc_GetItemFromID_Item                                      (HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryToAddItemToInventory_Success                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryItem              CallFunc_TryToAddItemToInventory_OutItem                         (HasGetValueTypeHash)
// int32                              CallFunc_TryToAddItemToInventory_AddedToSlot                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::GivePlayerKeyItem_NoNotify(class FName ItemId, const struct FInventoryItem& CallFunc_GetItemFromID_Item, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, bool CallFunc_TryToAddItemToInventory_Success, const struct FInventoryItem& CallFunc_TryToAddItemToInventory_OutItem, int32 CallFunc_TryToAddItemToInventory_AddedToSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "GivePlayerKeyItem_NoNotify");

	Params::AGameplayPC_C_GivePlayerKeyItem_NoNotify_Params Parms{};

	Parms.ItemId = ItemId;
	Parms.CallFunc_GetItemFromID_Item = CallFunc_GetItemFromID_Item;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_TryToAddItemToInventory_Success = CallFunc_TryToAddItemToInventory_Success;
	Parms.CallFunc_TryToAddItemToInventory_OutItem = CallFunc_TryToAddItemToInventory_OutItem;
	Parms.CallFunc_TryToAddItemToInventory_AddedToSlot = CallFunc_TryToAddItemToInventory_AddedToSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.PossessRunesMenuCameraPawn
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>              CallFunc_GetAllActorsWithTag_OutActors                           (ReferenceParm, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_EquipmentMenuPawn_Runes_C*K2Node_DynamicCast_AsBP_Equipment_Menu_Pawn_Runes                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::PossessRunesMenuCameraPawn(TArray<class AActor*>& CallFunc_GetAllActorsWithTag_OutActors, bool CallFunc_Array_IsValidIndex_ReturnValue, class AActor* CallFunc_Array_Get_Item, class ABP_EquipmentMenuPawn_Runes_C* K2Node_DynamicCast_AsBP_Equipment_Menu_Pawn_Runes, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "PossessRunesMenuCameraPawn");

	Params::AGameplayPC_C_PossessRunesMenuCameraPawn_Params Parms{};

	Parms.CallFunc_GetAllActorsWithTag_OutActors = CallFunc_GetAllActorsWithTag_OutActors;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsBP_Equipment_Menu_Pawn_Runes = K2Node_DynamicCast_AsBP_Equipment_Menu_Pawn_Runes;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.PossessRunesMenuPawn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::PossessRunesMenuPawn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "PossessRunesMenuPawn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.IsPhotoModeSpeedChangeInProgress
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

bool AGameplayPC_C::IsPhotoModeSpeedChangeInProgress(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "IsPhotoModeSpeedChangeInProgress");

	Params::AGameplayPC_C_IsPhotoModeSpeedChangeInProgress_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameplayPC.GameplayPC_C.PhotoMode_ResetCamera
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::PhotoMode_ResetCamera(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "PhotoMode_ResetCamera");

	Params::AGameplayPC_C_PhotoMode_ResetCamera_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.FoundlingMenu_Create
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_FoundlingMenu_C*         CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::FoundlingMenu_Create(bool CallFunc_IsValid_ReturnValue, class UUI_FoundlingMenu_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "FoundlingMenu_Create");

	Params::AGameplayPC_C_FoundlingMenu_Create_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.PossessFoundlingMenuCameraPawn
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>              CallFunc_GetAllActorsWithTag_OutActors                           (ReferenceParm, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_EquipmentMenuPawn_Foundling_C*K2Node_DynamicCast_AsBP_Equipment_Menu_Pawn_Foundling            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::PossessFoundlingMenuCameraPawn(TArray<class AActor*>& CallFunc_GetAllActorsWithTag_OutActors, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, class ABP_EquipmentMenuPawn_Foundling_C* K2Node_DynamicCast_AsBP_Equipment_Menu_Pawn_Foundling, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "PossessFoundlingMenuCameraPawn");

	Params::AGameplayPC_C_PossessFoundlingMenuCameraPawn_Params Parms{};

	Parms.CallFunc_GetAllActorsWithTag_OutActors = CallFunc_GetAllActorsWithTag_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Equipment_Menu_Pawn_Foundling = K2Node_DynamicCast_AsBP_Equipment_Menu_Pawn_Foundling;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.PossessFoundlingMenuPawn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::PossessFoundlingMenuPawn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "PossessFoundlingMenuPawn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.GetCachedBarbAsPawn
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class APawn* AGameplayPC_C::GetCachedBarbAsPawn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "GetCachedBarbAsPawn");

	Params::AGameplayPC_C_GetCachedBarbAsPawn_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameplayPC.GameplayPC_C.UpdateCantUseItems
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CantUseItems                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::UpdateCantUseItems(bool CantUseItems)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "UpdateCantUseItems");

	Params::AGameplayPC_C_UpdateCantUseItems_Params Parms{};

	Parms.CantUseItems = CantUseItems;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.TempAspectRatio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::TempAspectRatio()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "TempAspectRatio");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.RestoreAspectRatio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetAspectRatioConstraint_index                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::RestoreAspectRatio(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetAspectRatioConstraint_index, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "RestoreAspectRatio");

	Params::AGameplayPC_C_RestoreAspectRatio_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetAspectRatioConstraint_index = CallFunc_GetAspectRatioConstraint_index;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.UpdateAspectRatio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetAspectRatioConstraint_index                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::UpdateAspectRatio(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetAspectRatioConstraint_index, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "UpdateAspectRatio");

	Params::AGameplayPC_C_UpdateAspectRatio_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetAspectRatioConstraint_index = CallFunc_GetAspectRatioConstraint_index;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.UpdateCameraModifier_FOV
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::UpdateCameraModifier_FOV(class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "UpdateCameraModifier_FOV");

	Params::AGameplayPC_C_UpdateCameraModifier_FOV_Params Parms{};

	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.AddCameraModifier_FOV
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCameraModifier*             CallFunc_AddNewCameraModifier_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCameraModifier_FOV_C*       K2Node_DynamicCast_AsCamera_Modifier_FOV                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::AddCameraModifier_FOV(class UCameraModifier* CallFunc_AddNewCameraModifier_ReturnValue, class UCameraModifier_FOV_C* K2Node_DynamicCast_AsCamera_Modifier_FOV, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "AddCameraModifier_FOV");

	Params::AGameplayPC_C_AddCameraModifier_FOV_Params Parms{};

	Parms.CallFunc_AddNewCameraModifier_ReturnValue = CallFunc_AddNewCameraModifier_ReturnValue;
	Parms.K2Node_DynamicCast_AsCamera_Modifier_FOV = K2Node_DynamicCast_AsCamera_Modifier_FOV;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.InterruptVideoSettingsDirty
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::InterruptVideoSettingsDirty(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "InterruptVideoSettingsDirty");

	Params::AGameplayPC_C_InterruptVideoSettingsDirty_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.EquipmentMenuCloseCall
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::EquipmentMenuCloseCall()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "EquipmentMenuCloseCall");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.EquipmentMenuOpenCall
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::EquipmentMenuOpenCall()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "EquipmentMenuOpenCall");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.UpdateForceFeedbackScale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetForceFeedbackScale_Scale                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::UpdateForceFeedbackScale(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetForceFeedbackScale_Scale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "UpdateForceFeedbackScale");

	Params::AGameplayPC_C_UpdateForceFeedbackScale_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetForceFeedbackScale_Scale = CallFunc_GetForceFeedbackScale_Scale;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.UpdateCameraShakeScale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetCameraShakeScale_Scale                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::UpdateCameraShakeScale(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetCameraShakeScale_Scale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "UpdateCameraShakeScale");

	Params::AGameplayPC_C_UpdateCameraShakeScale_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCameraShakeScale_Scale = CallFunc_GetCameraShakeScale_Scale;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.ForceCancelStoneForm
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::ForceCancelStoneForm()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "ForceCancelStoneForm");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.CheckItemFamiliarityAchievement
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bAllGood                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                ItemsToCheck                                                     (Edit, BlueprintVisible, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlayerAtMaxFamiliarity__ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::CheckItemFamiliarityAchievement(bool bAllGood, const TArray<class FName>& ItemsToCheck, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class FName>& K2Node_MakeArray_Array, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsPlayerAtMaxFamiliarity__ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "CheckItemFamiliarityAchievement");

	Params::AGameplayPC_C_CheckItemFamiliarityAchievement_Params Parms{};

	Parms.bAllGood = bAllGood;
	Parms.ItemsToCheck = ItemsToCheck;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_IsPlayerAtMaxFamiliarity__ReturnValue = CallFunc_IsPlayerAtMaxFamiliarity__ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.SetIsInDialogue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsInDialogue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::SetIsInDialogue(bool bIsInDialogue, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "SetIsInDialogue");

	Params::AGameplayPC_C_SetIsInDialogue_Params Parms{};

	Parms.bIsInDialogue = bIsInDialogue;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base = CallFunc_GetCharacterAs0_Base_As0_Base;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.WorkbenchMenu_Create
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_WorkbenchPanelNew_C*     CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWorkbenchPanel_C*           CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::WorkbenchMenu_Create(bool CallFunc_IsValid_ReturnValue, class UUI_WorkbenchPanelNew_C* CallFunc_Create_ReturnValue, class UWorkbenchPanel_C* CallFunc_Create_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "WorkbenchMenu_Create");

	Params::AGameplayPC_C_WorkbenchMenu_Create_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.PossessWorkbenchActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::PossessWorkbenchActor(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "PossessWorkbenchActor");

	Params::AGameplayPC_C_PossessWorkbenchActor_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.HandleBeginPlayLoadingScreen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInfoInstance_C*         GameInstance                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         Local_GameInstance                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ILoadingScreenInterface_C>K2Node_DynamicCast_AsLoading_Screen_Interface                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::HandleBeginPlayLoadingScreen(class UGameInfoInstance_C* GameInstance, class UGameInfoInstance_C* Local_GameInstance, TScriptInterface<class ILoadingScreenInterface_C> K2Node_DynamicCast_AsLoading_Screen_Interface, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "HandleBeginPlayLoadingScreen");

	Params::AGameplayPC_C_HandleBeginPlayLoadingScreen_Params Parms{};

	Parms.GameInstance = GameInstance;
	Parms.Local_GameInstance = Local_GameInstance;
	Parms.K2Node_DynamicCast_AsLoading_Screen_Interface = K2Node_DynamicCast_AsLoading_Screen_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.UpdateIsInCutscene
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsInCutscene                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::UpdateIsInCutscene(bool IsInCutscene)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "UpdateIsInCutscene");

	Params::AGameplayPC_C_UpdateIsInCutscene_Params Parms{};

	Parms.IsInCutscene = IsInCutscene;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.UpdateCameraModifier_Brightness
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::UpdateCameraModifier_Brightness(class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "UpdateCameraModifier_Brightness");

	Params::AGameplayPC_C_UpdateCameraModifier_Brightness_Params Parms{};

	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.UpdateCameraModifier_PixelMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::UpdateCameraModifier_PixelMode(class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "UpdateCameraModifier_PixelMode");

	Params::AGameplayPC_C_UpdateCameraModifier_PixelMode_Params Parms{};

	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.UpdateCameraModifier_FilmGrain
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::UpdateCameraModifier_FilmGrain(class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "UpdateCameraModifier_FilmGrain");

	Params::AGameplayPC_C_UpdateCameraModifier_FilmGrain_Params Parms{};

	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.UpdateCameraModifier_MotionBlur
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::UpdateCameraModifier_MotionBlur(class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "UpdateCameraModifier_MotionBlur");

	Params::AGameplayPC_C_UpdateCameraModifier_MotionBlur_Params Parms{};

	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.MerchantMenu_Create
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Local_UseNew                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MerchantPanelNew_C*      CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMerchantPanel_C*            CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::MerchantMenu_Create(bool Local_UseNew, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UUI_MerchantPanelNew_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UMerchantPanel_C* CallFunc_Create_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "MerchantMenu_Create");

	Params::AGameplayPC_C_MerchantMenu_Create_Params Parms{};

	Parms.Local_UseNew = Local_UseNew;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.PossessMerchantCameraPawn
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              CallFunc_GetAllActorsWithTag_OutActors                           (ReferenceParm, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AUsable_Branching_NPC_C*     K2Node_DynamicCast_AsUsable_Branching_NPC                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::PossessMerchantCameraPawn(bool CallFunc_IsValid_ReturnValue, TArray<class AActor*>& CallFunc_GetAllActorsWithTag_OutActors, bool CallFunc_Array_IsValidIndex_ReturnValue, class AActor* CallFunc_Array_Get_Item, class AUsable_Branching_NPC_C* K2Node_DynamicCast_AsUsable_Branching_NPC, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "PossessMerchantCameraPawn");

	Params::AGameplayPC_C_PossessMerchantCameraPawn_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetAllActorsWithTag_OutActors = CallFunc_GetAllActorsWithTag_OutActors;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsUsable_Branching_NPC = K2Node_DynamicCast_AsUsable_Branching_NPC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.PossessMerchantPawn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::PossessMerchantPawn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "PossessMerchantPawn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.InterruptKeyBindChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::InterruptKeyBindChange()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "InterruptKeyBindChange");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.SetItemAsDiscovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::SetItemAsDiscovered(class FName ID, int32 CallFunc_Array_AddUnique_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "SetItemAsDiscovered");

	Params::AGameplayPC_C_SetItemAsDiscovered_Params Parms{};

	Parms.ID = ID;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.GetSaveSlot
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)

class FString AGameplayPC_C::GetSaveSlot(const class FString& CallFunc_Concat_StrStr_ReturnValue, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "GetSaveSlot");

	Params::AGameplayPC_C_GetSaveSlot_Params Parms{};

	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameplayPC.GameplayPC_C.AddCameraModifier_Brightness
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCameraModifier*             CallFunc_AddNewCameraModifier_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCameraModifier_Brightness_C*K2Node_DynamicCast_AsCamera_Modifier_Brightness                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::AddCameraModifier_Brightness(class UCameraModifier* CallFunc_AddNewCameraModifier_ReturnValue, class UCameraModifier_Brightness_C* K2Node_DynamicCast_AsCamera_Modifier_Brightness, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "AddCameraModifier_Brightness");

	Params::AGameplayPC_C_AddCameraModifier_Brightness_Params Parms{};

	Parms.CallFunc_AddNewCameraModifier_ReturnValue = CallFunc_AddNewCameraModifier_ReturnValue;
	Parms.K2Node_DynamicCast_AsCamera_Modifier_Brightness = K2Node_DynamicCast_AsCamera_Modifier_Brightness;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.UpdateQuickItemSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_CycleQuickSlot_ReturnIndex                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CycleQuickSlot_ItemFound                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CycleQuickSlot_NoValidItem                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::UpdateQuickItemSlot(int32 CallFunc_CycleQuickSlot_ReturnIndex, bool CallFunc_CycleQuickSlot_ItemFound, bool CallFunc_CycleQuickSlot_NoValidItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "UpdateQuickItemSlot");

	Params::AGameplayPC_C_UpdateQuickItemSlot_Params Parms{};

	Parms.CallFunc_CycleQuickSlot_ReturnIndex = CallFunc_CycleQuickSlot_ReturnIndex;
	Parms.CallFunc_CycleQuickSlot_ItemFound = CallFunc_CycleQuickSlot_ItemFound;
	Parms.CallFunc_CycleQuickSlot_NoValidItem = CallFunc_CycleQuickSlot_NoValidItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.Sound Equipment Menu Transition_Destroy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::Sound_Equipment_Menu_Transition_Destroy(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "Sound Equipment Menu Transition_Destroy");

	Params::AGameplayPC_C_Sound_Equipment_Menu_Transition_Destroy_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.Sound Equipment Menu Transition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAudioComponent*             CallFunc_SpawnSound2D_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::Sound_Equipment_Menu_Transition(class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "Sound Equipment Menu Transition");

	Params::AGameplayPC_C_Sound_Equipment_Menu_Transition_Params Parms{};

	Parms.CallFunc_SpawnSound2D_ReturnValue = CallFunc_SpawnSound2D_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.CallOnJustUnlockedName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::CallOnJustUnlockedName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "CallOnJustUnlockedName");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.ShellsUpgradeMenu_Create
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_ShellUpgradeMenu_C*      CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::ShellsUpgradeMenu_Create(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UUI_ShellUpgradeMenu_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "ShellsUpgradeMenu_Create");

	Params::AGameplayPC_C_ShellsUpgradeMenu_Create_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.PauseMenu_Close
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Sound                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         K2Node_DynamicCast_AsGame_Info_Instance                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInViewport_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         K2Node_DynamicCast_AsGame_Info_Instance_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::PauseMenu_Close(bool Sound, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGameInfoInstance_C* K2Node_DynamicCast_AsGame_Info_Instance, bool K2Node_DynamicCast_bSuccess, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsInViewport_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class APawn* CallFunc_K2_GetPawn_ReturnValue, class UGameInfoInstance_C* K2Node_DynamicCast_AsGame_Info_Instance_1, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "PauseMenu_Close");

	Params::AGameplayPC_C_PauseMenu_Close_Params Parms{};

	Parms.Sound = Sound;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Info_Instance = K2Node_DynamicCast_AsGame_Info_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsInViewport_ReturnValue = CallFunc_IsInViewport_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Info_Instance_1 = K2Node_DynamicCast_AsGame_Info_Instance_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.PauseMenu_Open
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::PauseMenu_Open(class APawn* CallFunc_K2_GetPawn_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "PauseMenu_Open");

	Params::AGameplayPC_C_PauseMenu_Open_Params Parms{};

	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.SelectPrevActiveItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_CycleQuickSlot_ReturnIndex                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CycleQuickSlot_ItemFound                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CycleQuickSlot_NoValidItem                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::SelectPrevActiveItem(bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_CycleQuickSlot_ReturnIndex, bool CallFunc_CycleQuickSlot_ItemFound, bool CallFunc_CycleQuickSlot_NoValidItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "SelectPrevActiveItem");

	Params::AGameplayPC_C_SelectPrevActiveItem_Params Parms{};

	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_CycleQuickSlot_ReturnIndex = CallFunc_CycleQuickSlot_ReturnIndex;
	Parms.CallFunc_CycleQuickSlot_ItemFound = CallFunc_CycleQuickSlot_ItemFound;
	Parms.CallFunc_CycleQuickSlot_NoValidItem = CallFunc_CycleQuickSlot_NoValidItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.SelectNextActiveItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Local_Index                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_CycleQuickSlot_ReturnIndex                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CycleQuickSlot_ItemFound                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CycleQuickSlot_NoValidItem                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::SelectNextActiveItem(int32 Local_Index, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_CycleQuickSlot_ReturnIndex, bool CallFunc_CycleQuickSlot_ItemFound, bool CallFunc_CycleQuickSlot_NoValidItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "SelectNextActiveItem");

	Params::AGameplayPC_C_SelectNextActiveItem_Params Parms{};

	Parms.Local_Index = Local_Index;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_CycleQuickSlot_ReturnIndex = CallFunc_CycleQuickSlot_ReturnIndex;
	Parms.CallFunc_CycleQuickSlot_ItemFound = CallFunc_CycleQuickSlot_ItemFound;
	Parms.CallFunc_CycleQuickSlot_NoValidItem = CallFunc_CycleQuickSlot_NoValidItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.ActiveItem_DebugString
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void AGameplayPC_C::ActiveItem_DebugString(const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "ActiveItem_DebugString");

	Params::AGameplayPC_C_ActiveItem_DebugString_Params Parms{};

	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.QuickActiveItem_Use
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Local_ItemID                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_ID                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFalling_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Get_Use_Item_Conditions_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_6                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_7                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_8                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_9                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_10                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_11                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_12                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_13                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_7                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_8                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_9                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_UseInventoryItem_ItemUsed                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_10                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryItem              CallFunc_GetInventoryItem_InventoryItem                          (HasGetValueTypeHash)
// struct FInventoryItem              CallFunc_GetInventoryItem_InventoryItem_1                        (HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetItemIDFromQuickAccessSlot_ItemId                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetItemIDFromQuickAccessSlot_bValidItem                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::QuickActiveItem_Use(class FName Local_ItemID, int32 Local_ID, bool CallFunc_IsFalling_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_4, bool CallFunc_Not_PreBool_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Get_Use_Item_Conditions_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_4, bool CallFunc_EqualEqual_NameName_ReturnValue, bool K2Node_SwitchName_CmpSuccess, bool CallFunc_Not_PreBool_ReturnValue_6, bool CallFunc_Not_PreBool_ReturnValue_7, bool CallFunc_Not_PreBool_ReturnValue_8, bool CallFunc_Not_PreBool_ReturnValue_9, bool CallFunc_Not_PreBool_ReturnValue_10, bool CallFunc_Not_PreBool_ReturnValue_11, bool CallFunc_Not_PreBool_ReturnValue_12, bool CallFunc_Not_PreBool_ReturnValue_13, bool CallFunc_BooleanAND_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_6, bool CallFunc_BooleanAND_ReturnValue_7, bool CallFunc_BooleanAND_ReturnValue_8, bool CallFunc_BooleanAND_ReturnValue_9, bool CallFunc_UseInventoryItem_ItemUsed, bool CallFunc_BooleanAND_ReturnValue_10, const struct FInventoryItem& CallFunc_GetInventoryItem_InventoryItem, const struct FInventoryItem& CallFunc_GetInventoryItem_InventoryItem_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_NotEqual_NameName_ReturnValue, int32 CallFunc_GetItemIDFromQuickAccessSlot_ItemId, bool CallFunc_GetItemIDFromQuickAccessSlot_bValidItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "QuickActiveItem_Use");

	Params::AGameplayPC_C_QuickActiveItem_Use_Params Parms{};

	Parms.Local_ItemID = Local_ItemID;
	Parms.Local_ID = Local_ID;
	Parms.CallFunc_IsFalling_ReturnValue = CallFunc_IsFalling_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.CallFunc_Not_PreBool_ReturnValue_4 = CallFunc_Not_PreBool_ReturnValue_4;
	Parms.CallFunc_Not_PreBool_ReturnValue_5 = CallFunc_Not_PreBool_ReturnValue_5;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Get_Use_Item_Conditions_ReturnValue = CallFunc_Get_Use_Item_Conditions_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue_4 = CallFunc_BooleanAND_ReturnValue_4;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.CallFunc_Not_PreBool_ReturnValue_6 = CallFunc_Not_PreBool_ReturnValue_6;
	Parms.CallFunc_Not_PreBool_ReturnValue_7 = CallFunc_Not_PreBool_ReturnValue_7;
	Parms.CallFunc_Not_PreBool_ReturnValue_8 = CallFunc_Not_PreBool_ReturnValue_8;
	Parms.CallFunc_Not_PreBool_ReturnValue_9 = CallFunc_Not_PreBool_ReturnValue_9;
	Parms.CallFunc_Not_PreBool_ReturnValue_10 = CallFunc_Not_PreBool_ReturnValue_10;
	Parms.CallFunc_Not_PreBool_ReturnValue_11 = CallFunc_Not_PreBool_ReturnValue_11;
	Parms.CallFunc_Not_PreBool_ReturnValue_12 = CallFunc_Not_PreBool_ReturnValue_12;
	Parms.CallFunc_Not_PreBool_ReturnValue_13 = CallFunc_Not_PreBool_ReturnValue_13;
	Parms.CallFunc_BooleanAND_ReturnValue_5 = CallFunc_BooleanAND_ReturnValue_5;
	Parms.CallFunc_BooleanAND_ReturnValue_6 = CallFunc_BooleanAND_ReturnValue_6;
	Parms.CallFunc_BooleanAND_ReturnValue_7 = CallFunc_BooleanAND_ReturnValue_7;
	Parms.CallFunc_BooleanAND_ReturnValue_8 = CallFunc_BooleanAND_ReturnValue_8;
	Parms.CallFunc_BooleanAND_ReturnValue_9 = CallFunc_BooleanAND_ReturnValue_9;
	Parms.CallFunc_UseInventoryItem_ItemUsed = CallFunc_UseInventoryItem_ItemUsed;
	Parms.CallFunc_BooleanAND_ReturnValue_10 = CallFunc_BooleanAND_ReturnValue_10;
	Parms.CallFunc_GetInventoryItem_InventoryItem = CallFunc_GetInventoryItem_InventoryItem;
	Parms.CallFunc_GetInventoryItem_InventoryItem_1 = CallFunc_GetInventoryItem_InventoryItem_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_GetItemIDFromQuickAccessSlot_ItemId = CallFunc_GetItemIDFromQuickAccessSlot_ItemId;
	Parms.CallFunc_GetItemIDFromQuickAccessSlot_bValidItem = CallFunc_GetItemIDFromQuickAccessSlot_bValidItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.EquipmentMenu_DestroyTransition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::EquipmentMenu_DestroyTransition(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "EquipmentMenu_DestroyTransition");

	Params::AGameplayPC_C_EquipmentMenu_DestroyTransition_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.ApplyResolutionScale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)

void AGameplayPC_C::ApplyResolutionScale(const class FString& CallFunc_Concat_StrStr_ReturnValue, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "ApplyResolutionScale");

	Params::AGameplayPC_C_ApplyResolutionScale_Params Parms{};

	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Conv_FloatToString_ReturnValue = CallFunc_Conv_FloatToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.SkippingCutscene
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_Cutscene_SkipType  InputPin                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ULevelSequencePlayer*        CallFunc_GetSequencePlayer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlaying_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQualifiedFrameTime         CallFunc_GetEndTime_ReturnValue                                  (NoDestructor, HasGetValueTypeHash)
// struct FFrameNumber                CallFunc_BreakQualifiedFrameTime_Frame                           (NoDestructor, HasGetValueTypeHash)
// struct FFrameRate                  CallFunc_BreakQualifiedFrameTime_FrameRate                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakQualifiedFrameTime_SubFrame                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFrameTime                  K2Node_MakeStruct_FrameTime                                      (NoDestructor, HasGetValueTypeHash)
// struct FFrameTime                  K2Node_MakeStruct_FrameTime_1                                    (NoDestructor, HasGetValueTypeHash)
// struct FFrameTime                  K2Node_MakeStruct_FrameTime_2                                    (NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::SkippingCutscene(enum class Enum_Cutscene_SkipType InputPin, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue, bool CallFunc_IsPlaying_ReturnValue, const struct FQualifiedFrameTime& CallFunc_GetEndTime_ReturnValue, const struct FFrameNumber& CallFunc_BreakQualifiedFrameTime_Frame, const struct FFrameRate& CallFunc_BreakQualifiedFrameTime_FrameRate, float CallFunc_BreakQualifiedFrameTime_SubFrame, const struct FFrameTime& K2Node_MakeStruct_FrameTime, const struct FFrameTime& K2Node_MakeStruct_FrameTime_1, const struct FFrameTime& K2Node_MakeStruct_FrameTime_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "SkippingCutscene");

	Params::AGameplayPC_C_SkippingCutscene_Params Parms{};

	Parms.InputPin = InputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetSequencePlayer_ReturnValue = CallFunc_GetSequencePlayer_ReturnValue;
	Parms.CallFunc_IsPlaying_ReturnValue = CallFunc_IsPlaying_ReturnValue;
	Parms.CallFunc_GetEndTime_ReturnValue = CallFunc_GetEndTime_ReturnValue;
	Parms.CallFunc_BreakQualifiedFrameTime_Frame = CallFunc_BreakQualifiedFrameTime_Frame;
	Parms.CallFunc_BreakQualifiedFrameTime_FrameRate = CallFunc_BreakQualifiedFrameTime_FrameRate;
	Parms.CallFunc_BreakQualifiedFrameTime_SubFrame = CallFunc_BreakQualifiedFrameTime_SubFrame;
	Parms.K2Node_MakeStruct_FrameTime = K2Node_MakeStruct_FrameTime;
	Parms.K2Node_MakeStruct_FrameTime_1 = K2Node_MakeStruct_FrameTime_1;
	Parms.K2Node_MakeStruct_FrameTime_2 = K2Node_MakeStruct_FrameTime_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.EquipmentMenu_Possess
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::EquipmentMenu_Possess(bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "EquipmentMenu_Possess");

	Params::AGameplayPC_C_EquipmentMenu_Possess_Params Parms{};

	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.EquipmentMenu_PossessDelayed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::EquipmentMenu_PossessDelayed(bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "EquipmentMenu_PossessDelayed");

	Params::AGameplayPC_C_EquipmentMenu_PossessDelayed_Params Parms{};

	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.UpdateDeathStatueLocTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Delegate                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::UpdateDeathStatueLocTimer(FDelegateProperty_ Delegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "UpdateDeathStatueLocTimer");

	Params::AGameplayPC_C_UpdateDeathStatueLocTimer_Params Parms{};

	Parms.Delegate = Delegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.AddCameraModifier_PixelMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCameraModifier*             CallFunc_AddNewCameraModifier_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::AddCameraModifier_PixelMode(class UCameraModifier* CallFunc_AddNewCameraModifier_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "AddCameraModifier_PixelMode");

	Params::AGameplayPC_C_AddCameraModifier_PixelMode_Params Parms{};

	Parms.CallFunc_AddNewCameraModifier_ReturnValue = CallFunc_AddNewCameraModifier_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.AddCameraModifier_FilmGrain
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCameraModifier*             CallFunc_AddNewCameraModifier_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCameraModifier_FilmGrain_C* K2Node_DynamicCast_AsCamera_Modifier_Film_Grain                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::AddCameraModifier_FilmGrain(class UCameraModifier* CallFunc_AddNewCameraModifier_ReturnValue, class UCameraModifier_FilmGrain_C* K2Node_DynamicCast_AsCamera_Modifier_Film_Grain, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "AddCameraModifier_FilmGrain");

	Params::AGameplayPC_C_AddCameraModifier_FilmGrain_Params Parms{};

	Parms.CallFunc_AddNewCameraModifier_ReturnValue = CallFunc_AddNewCameraModifier_ReturnValue;
	Parms.K2Node_DynamicCast_AsCamera_Modifier_Film_Grain = K2Node_DynamicCast_AsCamera_Modifier_Film_Grain;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.AddCameraModifier_MotionBlur
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCameraModifier*             CallFunc_AddNewCameraModifier_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCameraModifier_MotionBlur_C*K2Node_DynamicCast_AsCamera_Modifier_Motion_Blur                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::AddCameraModifier_MotionBlur(class UCameraModifier* CallFunc_AddNewCameraModifier_ReturnValue, class UCameraModifier_MotionBlur_C* K2Node_DynamicCast_AsCamera_Modifier_Motion_Blur, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "AddCameraModifier_MotionBlur");

	Params::AGameplayPC_C_AddCameraModifier_MotionBlur_Params Parms{};

	Parms.CallFunc_AddNewCameraModifier_ReturnValue = CallFunc_AddNewCameraModifier_ReturnValue;
	Parms.K2Node_DynamicCast_AsCamera_Modifier_Motion_Blur = K2Node_DynamicCast_AsCamera_Modifier_Motion_Blur;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.UpdateDeathStatueLoc
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Local_Debug                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetScaledCapsuleHalfHeight_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::UpdateDeathStatueLoc(bool Local_Debug, bool CallFunc_Not_PreBool_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_GetScaledCapsuleHalfHeight_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "UpdateDeathStatueLoc");

	Params::AGameplayPC_C_UpdateDeathStatueLoc_Params Parms{};

	Parms.Local_Debug = Local_Debug;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetScaledCapsuleHalfHeight_ReturnValue = CallFunc_GetScaledCapsuleHalfHeight_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.EquipmentMenu_Sound_Close
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Condition                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::EquipmentMenu_Sound_Close(bool Condition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "EquipmentMenu_Sound_Close");

	Params::AGameplayPC_C_EquipmentMenu_Sound_Close_Params Parms{};

	Parms.Condition = Condition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.DidCharacterDieInTutorialLevel?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     Object                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IEnemyCommonInterface_C>K2Node_DynamicCast_AsEnemy_Common_Interface                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BossCharacterHadern_IsHadern_IsHadern                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetCurrentPersistentLevelName_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

bool AGameplayPC_C::DidCharacterDieInTutorialLevel_(class UObject* Object, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, TScriptInterface<class IEnemyCommonInterface_C> K2Node_DynamicCast_AsEnemy_Common_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BossCharacterHadern_IsHadern_IsHadern, class FName CallFunc_GetCurrentPersistentLevelName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "DidCharacterDieInTutorialLevel?");

	Params::AGameplayPC_C_DidCharacterDieInTutorialLevel__Params Parms{};

	Parms.Object = Object;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;
	Parms.K2Node_DynamicCast_AsEnemy_Common_Interface = K2Node_DynamicCast_AsEnemy_Common_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_BossCharacterHadern_IsHadern_IsHadern = CallFunc_BossCharacterHadern_IsHadern_IsHadern;
	Parms.CallFunc_GetCurrentPersistentLevelName_ReturnValue = CallFunc_GetCurrentPersistentLevelName_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameplayPC.GameplayPC_C.CreateEquipmentMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_Equipment_Menu_C*        CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::CreateEquipmentMenu(class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UUI_Equipment_Menu_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "CreateEquipmentMenu");

	Params::AGameplayPC_C_CreateEquipmentMenu_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.HUD_Show
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Instant                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               NoHideNotifies                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AHUD*                        CallFunc_GetHUD_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AYourHUD_C*                  K2Node_DynamicCast_AsYour_HUD                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::HUD_Show(bool Instant, bool NoHideNotifies, class AHUD* CallFunc_GetHUD_ReturnValue, class AYourHUD_C* K2Node_DynamicCast_AsYour_HUD, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "HUD_Show");

	Params::AGameplayPC_C_HUD_Show_Params Parms{};

	Parms.Instant = Instant;
	Parms.NoHideNotifies = NoHideNotifies;
	Parms.CallFunc_GetHUD_ReturnValue = CallFunc_GetHUD_ReturnValue;
	Parms.K2Node_DynamicCast_AsYour_HUD = K2Node_DynamicCast_AsYour_HUD;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.HUD_Hide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Instant                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               NoHideNotifies                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AHUD*                        CallFunc_GetHUD_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AYourHUD_C*                  K2Node_DynamicCast_AsYour_HUD                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::HUD_Hide(bool Instant, bool NoHideNotifies, class AHUD* CallFunc_GetHUD_ReturnValue, class AYourHUD_C* K2Node_DynamicCast_AsYour_HUD, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "HUD_Hide");

	Params::AGameplayPC_C_HUD_Hide_Params Parms{};

	Parms.Instant = Instant;
	Parms.NoHideNotifies = NoHideNotifies;
	Parms.CallFunc_GetHUD_ReturnValue = CallFunc_GetHUD_ReturnValue;
	Parms.K2Node_DynamicCast_AsYour_HUD = K2Node_DynamicCast_AsYour_HUD;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.EquipmentMenu_Close
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CloseSound                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_CloseSound                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::EquipmentMenu_Close(bool CloseSound, bool Local_CloseSound, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue_6)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "EquipmentMenu_Close");

	Params::AGameplayPC_C_EquipmentMenu_Close_Params Parms{};

	Parms.CloseSound = CloseSound;
	Parms.Local_CloseSound = Local_CloseSound;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.PossessShellsMenuPawn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::PossessShellsMenuPawn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "PossessShellsMenuPawn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.PossessShellsMenuCameraPawn
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>              CallFunc_GetAllActorsWithTag_OutActors                           (ReferenceParm, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_EquipmentMenuPawn_Shells_C*K2Node_DynamicCast_AsBP_Equipment_Menu_Pawn_Shells               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::PossessShellsMenuCameraPawn(TArray<class AActor*>& CallFunc_GetAllActorsWithTag_OutActors, bool CallFunc_Array_IsValidIndex_ReturnValue, class AActor* CallFunc_Array_Get_Item, class ABP_EquipmentMenuPawn_Shells_C* K2Node_DynamicCast_AsBP_Equipment_Menu_Pawn_Shells, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "PossessShellsMenuCameraPawn");

	Params::AGameplayPC_C_PossessShellsMenuCameraPawn_Params Parms{};

	Parms.CallFunc_GetAllActorsWithTag_OutActors = CallFunc_GetAllActorsWithTag_OutActors;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsBP_Equipment_Menu_Pawn_Shells = K2Node_DynamicCast_AsBP_Equipment_Menu_Pawn_Shells;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.SetSerializedFloats
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<class FName, float>           Floats                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class FName                        Temp_name_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_1                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Map_Find_Value_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::SetSerializedFloats(TMap<class FName, float> Floats, class FName Temp_name_Variable, class FName Temp_name_Variable_1, float CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, float CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "SetSerializedFloats");

	Params::AGameplayPC_C_SetSerializedFloats_Params Parms{};

	Parms.Floats = Floats;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base = CallFunc_GetCharacterAs0_Base_As0_Base;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.GetSerializedFloats
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TMap<class FName, float>           Floats                                                           (Parm, OutParm)
// class AZero_Base_C*                Local_0Base                                                      (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<class FName, float>           K2Node_MakeMap_Map                                               (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::GetSerializedFloats(TMap<class FName, float>* Floats, class AZero_Base_C* Local_0Base, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, TMap<class FName, float> K2Node_MakeMap_Map, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "GetSerializedFloats");

	Params::AGameplayPC_C_GetSerializedFloats_Params Parms{};

	Parms.Local_0Base = Local_0Base;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base = CallFunc_GetCharacterAs0_Base_As0_Base;
	Parms.K2Node_MakeMap_Map = K2Node_MakeMap_Map;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Floats != nullptr)
		*Floats = Parms.Floats;

}


// Function GameplayPC.GameplayPC_C.PauseMenu_Remove
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Sound                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInViewport_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::PauseMenu_Remove(bool Sound, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsInViewport_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "PauseMenu_Remove");

	Params::AGameplayPC_C_PauseMenu_Remove_Params Parms{};

	Parms.Sound = Sound;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsInViewport_ReturnValue = CallFunc_IsInViewport_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.PauseMenu_Create
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_MainMenu_C*              CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInViewport_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::PauseMenu_Create(class UUI_MainMenu_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsInViewport_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "PauseMenu_Create");

	Params::AGameplayPC_C_PauseMenu_Create_Params Parms{};

	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsInViewport_ReturnValue = CallFunc_IsInViewport_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.PossessWaifuMenuCameraPawn
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_EquipmentMenuType  EquipmentMenuType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_GetAllActorsWithTag_OutActors                           (ReferenceParm, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_EquipmentMenuPawn_Abilities_C*K2Node_DynamicCast_AsBP_Equipment_Menu_Pawn_Abilities            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::PossessWaifuMenuCameraPawn(enum class Enum_EquipmentMenuType EquipmentMenuType, TArray<class AActor*>& CallFunc_GetAllActorsWithTag_OutActors, bool CallFunc_Array_IsValidIndex_ReturnValue, class AActor* CallFunc_Array_Get_Item, class ABP_EquipmentMenuPawn_Abilities_C* K2Node_DynamicCast_AsBP_Equipment_Menu_Pawn_Abilities, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "PossessWaifuMenuCameraPawn");

	Params::AGameplayPC_C_PossessWaifuMenuCameraPawn_Params Parms{};

	Parms.EquipmentMenuType = EquipmentMenuType;
	Parms.CallFunc_GetAllActorsWithTag_OutActors = CallFunc_GetAllActorsWithTag_OutActors;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsBP_Equipment_Menu_Pawn_Abilities = K2Node_DynamicCast_AsBP_Equipment_Menu_Pawn_Abilities;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.PossessWaifuMenuPawn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_EquipmentMenuType  EquipmentMenuType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::PossessWaifuMenuPawn(enum class Enum_EquipmentMenuType EquipmentMenuType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "PossessWaifuMenuPawn");

	Params::AGameplayPC_C_PossessWaifuMenuPawn_Params Parms{};

	Parms.EquipmentMenuType = EquipmentMenuType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.EnableCharacterInputs
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::EnableCharacterInputs(class APawn* CallFunc_K2_GetPawn_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "EnableCharacterInputs");

	Params::AGameplayPC_C_EnableCharacterInputs_Params Parms{};

	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.DisableCharacterInputs
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::DisableCharacterInputs(class APawn* CallFunc_K2_GetPawn_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "DisableCharacterInputs");

	Params::AGameplayPC_C_DisableCharacterInputs_Params Parms{};

	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.ConsumeTransitionEffect
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 OnFinished                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
// FDelegateProperty_                 OnEnd                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_EquipmentMenuOpenTransition_C*CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::ConsumeTransitionEffect(FDelegateProperty_& OnFinished, FDelegateProperty_& OnEnd, class APawn* CallFunc_K2_GetPawn_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_EquipmentMenuOpenTransition_C* CallFunc_FinishSpawningActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "ConsumeTransitionEffect");

	Params::AGameplayPC_C_ConsumeTransitionEffect_Params Parms{};

	Parms.OnFinished = OnFinished;
	Parms.OnEnd = OnEnd;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.LockAllShells
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CallFunc_GetShellUnlockID_ShellUnlockID                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetShellUnlockID_ShellUnlockID_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetShellUnlockID_ShellUnlockID_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetShellUnlockID_ShellUnlockID_3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetShellUnlockID_ShellUnlockID_4                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::LockAllShells(class FName CallFunc_GetShellUnlockID_ShellUnlockID, class FName CallFunc_GetShellUnlockID_ShellUnlockID_1, class FName CallFunc_GetShellUnlockID_ShellUnlockID_2, class FName CallFunc_GetShellUnlockID_ShellUnlockID_3, class FName CallFunc_GetShellUnlockID_ShellUnlockID_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "LockAllShells");

	Params::AGameplayPC_C_LockAllShells_Params Parms{};

	Parms.CallFunc_GetShellUnlockID_ShellUnlockID = CallFunc_GetShellUnlockID_ShellUnlockID;
	Parms.CallFunc_GetShellUnlockID_ShellUnlockID_1 = CallFunc_GetShellUnlockID_ShellUnlockID_1;
	Parms.CallFunc_GetShellUnlockID_ShellUnlockID_2 = CallFunc_GetShellUnlockID_ShellUnlockID_2;
	Parms.CallFunc_GetShellUnlockID_ShellUnlockID_3 = CallFunc_GetShellUnlockID_ShellUnlockID_3;
	Parms.CallFunc_GetShellUnlockID_ShellUnlockID_4 = CallFunc_GetShellUnlockID_ShellUnlockID_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.ShowFancyNotification
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Heading                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_FancyNotification_C*     CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::ShowFancyNotification(class FText Heading, class FText Text, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_FancyNotification_C* CallFunc_FinishSpawningActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "ShowFancyNotification");

	Params::AGameplayPC_C_ShowFancyNotification_Params Parms{};

	Parms.Heading = Heading;
	Parms.Text = Text;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.Notification
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Icon                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        NotificationText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Description                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               ShowFamiliarity                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               AnimateLastDiamond                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              PreviousFamiliarity                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentFamiliarity                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MaxFamiliarity                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FToolTipInfo                K2Node_MakeStruct_ToolTipInfo                                    (HasGetValueTypeHash)

void AGameplayPC_C::Notification(class UTexture2D* Icon, class FText NotificationText, class FText Name, class FText Description, bool ShowFamiliarity, bool AnimateLastDiamond, int32 PreviousFamiliarity, int32 CurrentFamiliarity, int32 MaxFamiliarity, const struct FToolTipInfo& K2Node_MakeStruct_ToolTipInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "Notification");

	Params::AGameplayPC_C_Notification_Params Parms{};

	Parms.Icon = Icon;
	Parms.NotificationText = NotificationText;
	Parms.Name = Name;
	Parms.Description = Description;
	Parms.ShowFamiliarity = ShowFamiliarity;
	Parms.AnimateLastDiamond = AnimateLastDiamond;
	Parms.PreviousFamiliarity = PreviousFamiliarity;
	Parms.CurrentFamiliarity = CurrentFamiliarity;
	Parms.MaxFamiliarity = MaxFamiliarity;
	Parms.K2Node_MakeStruct_ToolTipInfo = K2Node_MakeStruct_ToolTipInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.RemoveInventoryItem
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              AmountToRemove                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_MiscTexts          Local_RemovedItemText                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryItem              RemovedItem                                                      (Edit, BlueprintVisible, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_HasItem_Success                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_HasItem_InventorySlot                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_HasItem_Amount                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryItem              CallFunc_GetInventoryItem_InventoryItem                          (HasGetValueTypeHash)
// bool                               CallFunc_RemoveFromItemAmount_WasFullAmountRemoved               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryItem              CallFunc_RemoveFromItemAmount_OutnventoryItem                    (HasGetValueTypeHash)
// int32                              CallFunc_RemoveFromItemAmount_AmountRemoved                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::RemoveInventoryItem(class FName ItemId, int32 AmountToRemove, bool* Success, enum class Enum_MiscTexts Local_RemovedItemText, const struct FInventoryItem& RemovedItem, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, bool CallFunc_HasItem_Success, int32 CallFunc_HasItem_InventorySlot, int32 CallFunc_HasItem_Amount, const struct FInventoryItem& CallFunc_GetInventoryItem_InventoryItem, bool CallFunc_RemoveFromItemAmount_WasFullAmountRemoved, const struct FInventoryItem& CallFunc_RemoveFromItemAmount_OutnventoryItem, int32 CallFunc_RemoveFromItemAmount_AmountRemoved)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "RemoveInventoryItem");

	Params::AGameplayPC_C_RemoveInventoryItem_Params Parms{};

	Parms.ItemId = ItemId;
	Parms.AmountToRemove = AmountToRemove;
	Parms.Local_RemovedItemText = Local_RemovedItemText;
	Parms.RemovedItem = RemovedItem;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_HasItem_Success = CallFunc_HasItem_Success;
	Parms.CallFunc_HasItem_InventorySlot = CallFunc_HasItem_InventorySlot;
	Parms.CallFunc_HasItem_Amount = CallFunc_HasItem_Amount;
	Parms.CallFunc_GetInventoryItem_InventoryItem = CallFunc_GetInventoryItem_InventoryItem;
	Parms.CallFunc_RemoveFromItemAmount_WasFullAmountRemoved = CallFunc_RemoveFromItemAmount_WasFullAmountRemoved;
	Parms.CallFunc_RemoveFromItemAmount_OutnventoryItem = CallFunc_RemoveFromItemAmount_OutnventoryItem;
	Parms.CallFunc_RemoveFromItemAmount_AmountRemoved = CallFunc_RemoveFromItemAmount_AmountRemoved;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function GameplayPC.GameplayPC_C.SetUIModeAndInput
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UIMode                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bWithVirtualCursor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::SetUIModeAndInput(bool UIMode, bool bWithVirtualCursor, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "SetUIModeAndInput");

	Params::AGameplayPC_C_SetUIModeAndInput_Params Parms{};

	Parms.UIMode = UIMode;
	Parms.bWithVirtualCursor = bWithVirtualCursor;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.PossessInventoryMenuPawn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::PossessInventoryMenuPawn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "PossessInventoryMenuPawn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.GivePlayerKeyItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryItem              CallFunc_GetItemFromID_Item                                      (HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryToAddItemToInventory_Success                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryItem              CallFunc_TryToAddItemToInventory_OutItem                         (HasGetValueTypeHash)
// int32                              CallFunc_TryToAddItemToInventory_AddedToSlot                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::GivePlayerKeyItem(class FName ItemId, const struct FInventoryItem& CallFunc_GetItemFromID_Item, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, bool CallFunc_TryToAddItemToInventory_Success, const struct FInventoryItem& CallFunc_TryToAddItemToInventory_OutItem, int32 CallFunc_TryToAddItemToInventory_AddedToSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "GivePlayerKeyItem");

	Params::AGameplayPC_C_GivePlayerKeyItem_Params Parms{};

	Parms.ItemId = ItemId;
	Parms.CallFunc_GetItemFromID_Item = CallFunc_GetItemFromID_Item;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_TryToAddItemToInventory_Success = CallFunc_TryToAddItemToInventory_Success;
	Parms.CallFunc_TryToAddItemToInventory_OutItem = CallFunc_TryToAddItemToInventory_OutItem;
	Parms.CallFunc_TryToAddItemToInventory_AddedToSlot = CallFunc_TryToAddItemToInventory_AddedToSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.PossessInventoryMenuCameraPawn
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>              CallFunc_GetAllActorsWithTag_OutActors                           (ReferenceParm, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_EquipmentMenuPawn_Inventory_C*K2Node_DynamicCast_AsBP_Equipment_Menu_Pawn_Inventory            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::PossessInventoryMenuCameraPawn(TArray<class AActor*>& CallFunc_GetAllActorsWithTag_OutActors, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, class ABP_EquipmentMenuPawn_Inventory_C* K2Node_DynamicCast_AsBP_Equipment_Menu_Pawn_Inventory, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "PossessInventoryMenuCameraPawn");

	Params::AGameplayPC_C_PossessInventoryMenuCameraPawn_Params Parms{};

	Parms.CallFunc_GetAllActorsWithTag_OutActors = CallFunc_GetAllActorsWithTag_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Equipment_Menu_Pawn_Inventory = K2Node_DynamicCast_AsBP_Equipment_Menu_Pawn_Inventory;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.HandleGamepadCursorMovement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::HandleGamepadCursorMovement()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "HandleGamepadCursorMovement");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.SetDangliesOnHeavyShell
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::SetDangliesOnHeavyShell(class FName CallFunc_MakeLiteralName_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue_1, class FName CallFunc_MakeLiteralName_ReturnValue_2, class FName CallFunc_MakeLiteralName_ReturnValue_3, class FName CallFunc_MakeLiteralName_ReturnValue_4, class FName CallFunc_MakeLiteralName_ReturnValue_5, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "SetDangliesOnHeavyShell");

	Params::AGameplayPC_C_SetDangliesOnHeavyShell_Params Parms{};

	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_MakeLiteralName_ReturnValue_1 = CallFunc_MakeLiteralName_ReturnValue_1;
	Parms.CallFunc_MakeLiteralName_ReturnValue_2 = CallFunc_MakeLiteralName_ReturnValue_2;
	Parms.CallFunc_MakeLiteralName_ReturnValue_3 = CallFunc_MakeLiteralName_ReturnValue_3;
	Parms.CallFunc_MakeLiteralName_ReturnValue_4 = CallFunc_MakeLiteralName_ReturnValue_4;
	Parms.CallFunc_MakeLiteralName_ReturnValue_5 = CallFunc_MakeLiteralName_ReturnValue_5;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base = CallFunc_GetCharacterAs0_Base_As0_Base;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.GetInteractTextWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UInteractText_C*             InteractTextWidget                                               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInteractText_C*             CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::GetInteractTextWidget(class UInteractText_C** InteractTextWidget, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UInteractText_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "GetInteractTextWidget");

	Params::AGameplayPC_C_GetInteractTextWidget_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (InteractTextWidget != nullptr)
		*InteractTextWidget = Parms.InteractTextWidget;

}


// Function GameplayPC.GameplayPC_C.UpdateVisibilityOnAllUsableUpgrades
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABPUsableUpgradeUnlock_C*>CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABPUsableUpgradeUnlock_C*    CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::UpdateVisibilityOnAllUsableUpgrades(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class ABPUsableUpgradeUnlock_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, class ABPUsableUpgradeUnlock_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "UpdateVisibilityOnAllUsableUpgrades");

	Params::AGameplayPC_C_UpdateVisibilityOnAllUsableUpgrades_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.UpdateVisibilityOnAllWeapons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AUsable_Weapon_C*>    CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AUsable_Weapon_C*            CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::UpdateVisibilityOnAllWeapons(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AUsable_Weapon_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, class AUsable_Weapon_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "UpdateVisibilityOnAllWeapons");

	Params::AGameplayPC_C_UpdateVisibilityOnAllWeapons_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.DisplayShellRecallNotify
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::DisplayShellRecallNotify()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "DisplayShellRecallNotify");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.NotifyBossFightEnded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::NotifyBossFightEnded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "NotifyBossFightEnded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.NotifyBossFightStarted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::NotifyBossFightStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "NotifyBossFightStarted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.ShouldRestorePlayerLocationOnNextLoad?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               RestoreOnNextLoad                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::ShouldRestorePlayerLocationOnNextLoad_(enum class EEndPlayReason EndPlayReason, bool* RestoreOnNextLoad, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "ShouldRestorePlayerLocationOnNextLoad?");

	Params::AGameplayPC_C_ShouldRestorePlayerLocationOnNextLoad__Params Parms{};

	Parms.EndPlayReason = EndPlayReason;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (RestoreOnNextLoad != nullptr)
		*RestoreOnNextLoad = Parms.RestoreOnNextLoad;

}


// Function GameplayPC.GameplayPC_C.EquipArmor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EArmorTypes             ArmorType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bReinitPose                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class USkeletalMesh*               CallFunc_GetMeshForArmorType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USword_AnimBP2v3_C*          K2Node_DynamicCast_AsSword_Anim_BP2v_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::EquipArmor(enum class EArmorTypes ArmorType, bool bReinitPose, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class USkeletalMesh* CallFunc_GetMeshForArmorType_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class USword_AnimBP2v3_C* K2Node_DynamicCast_AsSword_Anim_BP2v_3, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "EquipArmor");

	Params::AGameplayPC_C_EquipArmor_Params Parms{};

	Parms.ArmorType = ArmorType;
	Parms.bReinitPose = bReinitPose;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_GetMeshForArmorType_ReturnValue = CallFunc_GetMeshForArmorType_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsSword_Anim_BP2v_3 = K2Node_DynamicCast_AsSword_Anim_BP2v_3;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.CheckShouldStartThrow?
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::CheckShouldStartThrow_(bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "CheckShouldStartThrow?");

	Params::AGameplayPC_C_CheckShouldStartThrow__Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.SetIsDead
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                K2Node_DynamicCast_As0_Base                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::SetIsDead(class APawn* CallFunc_K2_GetPawn_ReturnValue, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "SetIsDead");

	Params::AGameplayPC_C_SetIsDead_Params Parms{};

	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_As0_Base = K2Node_DynamicCast_As0_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.GetControlledPawnLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                K2Node_DynamicCast_As0_Base                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetScaledCapsuleHalfHeight_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector AGameplayPC_C::GetControlledPawnLocation(class APawn* CallFunc_K2_GetPawn_ReturnValue, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_GetScaledCapsuleHalfHeight_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "GetControlledPawnLocation");

	Params::AGameplayPC_C_GetControlledPawnLocation_Params Parms{};

	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_As0_Base = K2Node_DynamicCast_As0_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_GetScaledCapsuleHalfHeight_ReturnValue = CallFunc_GetScaledCapsuleHalfHeight_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameplayPC.GameplayPC_C.SpawnDeathStatueAtSavedLocation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class UDHGameInstance*             CallFunc_GetInstance_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDHGameInstance*             CallFunc_GetInstance_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPrimaryUserIndex_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPrimaryUserIndex_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetCurrentPersistentLevelName_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   CallFunc_DHLoadGameFromSlot_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesSaveGameExist_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCheckpointsSave_C*          K2Node_DynamicCast_AsCheckpoints_Save                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AUseable_Player_Death_TarVFX_C*CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_1                             (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AUseable_Player_Death_Statue_C*CallFunc_FinishSpawningActor_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::SpawnDeathStatueAtSavedLocation(const class FString& CallFunc_Concat_StrStr_ReturnValue, class UDHGameInstance* CallFunc_GetInstance_ReturnValue, class UDHGameInstance* CallFunc_GetInstance_ReturnValue_1, int32 CallFunc_GetPrimaryUserIndex_ReturnValue, int32 CallFunc_GetPrimaryUserIndex_ReturnValue_1, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, bool CallFunc_Not_PreBool_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FName CallFunc_GetCurrentPersistentLevelName_ReturnValue, class USaveGame* CallFunc_DHLoadGameFromSlot_ReturnValue, bool CallFunc_DoesSaveGameExist_ReturnValue, class UCheckpointsSave_C* K2Node_DynamicCast_AsCheckpoints_Save, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_VectorVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AUseable_Player_Death_TarVFX_C* CallFunc_FinishSpawningActor_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, class AUseable_Player_Death_Statue_C* CallFunc_FinishSpawningActor_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "SpawnDeathStatueAtSavedLocation");

	Params::AGameplayPC_C_SpawnDeathStatueAtSavedLocation_Params Parms{};

	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetInstance_ReturnValue = CallFunc_GetInstance_ReturnValue;
	Parms.CallFunc_GetInstance_ReturnValue_1 = CallFunc_GetInstance_ReturnValue_1;
	Parms.CallFunc_GetPrimaryUserIndex_ReturnValue = CallFunc_GetPrimaryUserIndex_ReturnValue;
	Parms.CallFunc_GetPrimaryUserIndex_ReturnValue_1 = CallFunc_GetPrimaryUserIndex_ReturnValue_1;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_GetCurrentPersistentLevelName_ReturnValue = CallFunc_GetCurrentPersistentLevelName_ReturnValue;
	Parms.CallFunc_DHLoadGameFromSlot_ReturnValue = CallFunc_DHLoadGameFromSlot_ReturnValue;
	Parms.CallFunc_DoesSaveGameExist_ReturnValue = CallFunc_DoesSaveGameExist_ReturnValue;
	Parms.K2Node_DynamicCast_AsCheckpoints_Save = K2Node_DynamicCast_AsCheckpoints_Save;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_NotEqual_VectorVector_ReturnValue = CallFunc_NotEqual_VectorVector_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue_1 = CallFunc_MakeTransform_ReturnValue_1;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_1 = CallFunc_FinishSpawningActor_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.SaveDeathStatueLocation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDHGameInstance*             CallFunc_GetInstance_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPrimaryUserIndex_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABarbarous_C*                K2Node_DynamicCast_AsBarbarous                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetCurrentPersistentLevelName_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// enum class EArmorTypes             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_DHSaveGameToSlot_Asynch_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_ShellDye           K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCheckpointsSave_C*          CallFunc_CreateSaveGameObject_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::SaveDeathStatueLocation(const struct FVector& Location, class UDHGameInstance* CallFunc_GetInstance_ReturnValue, int32 CallFunc_GetPrimaryUserIndex_ReturnValue, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, class ABarbarous_C* K2Node_DynamicCast_AsBarbarous, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Conv_IntToString_ReturnValue, class FName CallFunc_GetCurrentPersistentLevelName_ReturnValue, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, enum class EArmorTypes Temp_byte_Variable, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_DHSaveGameToSlot_Asynch_ReturnValue, enum class Enum_ShellDye K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue, class UCheckpointsSave_C* CallFunc_CreateSaveGameObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "SaveDeathStatueLocation");

	Params::AGameplayPC_C_SaveDeathStatueLocation_Params Parms{};

	Parms.Location = Location;
	Parms.CallFunc_GetInstance_ReturnValue = CallFunc_GetInstance_ReturnValue;
	Parms.CallFunc_GetPrimaryUserIndex_ReturnValue = CallFunc_GetPrimaryUserIndex_ReturnValue;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base = CallFunc_GetCharacterAs0_Base_As0_Base;
	Parms.K2Node_DynamicCast_AsBarbarous = K2Node_DynamicCast_AsBarbarous;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_GetCurrentPersistentLevelName_ReturnValue = CallFunc_GetCurrentPersistentLevelName_ReturnValue;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base_1 = CallFunc_GetCharacterAs0_Base_As0_Base_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_DHSaveGameToSlot_Asynch_ReturnValue = CallFunc_DHSaveGameToSlot_Asynch_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_CreateSaveGameObject_ReturnValue = CallFunc_CreateSaveGameObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.LoadCheckpoints
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class UDHGameInstance*             CallFunc_GetInstance_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPrimaryUserIndex_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDHGameInstance*             CallFunc_GetInstance_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPrimaryUserIndex_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesSaveGameExist_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USaveGame*                   CallFunc_DHLoadGameFromSlot_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCheckpointsSave_C*          K2Node_DynamicCast_AsCheckpoints_Save                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::LoadCheckpoints(const class FString& CallFunc_Concat_StrStr_ReturnValue, class UDHGameInstance* CallFunc_GetInstance_ReturnValue, int32 CallFunc_GetPrimaryUserIndex_ReturnValue, class UDHGameInstance* CallFunc_GetInstance_ReturnValue_1, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, int32 CallFunc_GetPrimaryUserIndex_ReturnValue_1, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_DoesSaveGameExist_ReturnValue, class USaveGame* CallFunc_DHLoadGameFromSlot_ReturnValue, class UCheckpointsSave_C* K2Node_DynamicCast_AsCheckpoints_Save, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "LoadCheckpoints");

	Params::AGameplayPC_C_LoadCheckpoints_Params Parms{};

	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetInstance_ReturnValue = CallFunc_GetInstance_ReturnValue;
	Parms.CallFunc_GetPrimaryUserIndex_ReturnValue = CallFunc_GetPrimaryUserIndex_ReturnValue;
	Parms.CallFunc_GetInstance_ReturnValue_1 = CallFunc_GetInstance_ReturnValue_1;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;
	Parms.CallFunc_GetPrimaryUserIndex_ReturnValue_1 = CallFunc_GetPrimaryUserIndex_ReturnValue_1;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_DoesSaveGameExist_ReturnValue = CallFunc_DoesSaveGameExist_ReturnValue;
	Parms.CallFunc_DHLoadGameFromSlot_ReturnValue = CallFunc_DHLoadGameFromSlot_ReturnValue;
	Parms.K2Node_DynamicCast_AsCheckpoints_Save = K2Node_DynamicCast_AsCheckpoints_Save;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.SaveCheckpoint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Checkpoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDHGameInstance*             CallFunc_GetInstance_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPrimaryUserIndex_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_DHSaveGameToSlot_Asynch_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCheckpointsSave_C*          CallFunc_CreateSaveGameObject_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::SaveCheckpoint(class FName Checkpoint, class UDHGameInstance* CallFunc_GetInstance_ReturnValue, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, int32 CallFunc_GetPrimaryUserIndex_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_DHSaveGameToSlot_Asynch_ReturnValue, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UCheckpointsSave_C* CallFunc_CreateSaveGameObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "SaveCheckpoint");

	Params::AGameplayPC_C_SaveCheckpoint_Params Parms{};

	Parms.Checkpoint = Checkpoint;
	Parms.CallFunc_GetInstance_ReturnValue = CallFunc_GetInstance_ReturnValue;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;
	Parms.CallFunc_GetPrimaryUserIndex_ReturnValue = CallFunc_GetPrimaryUserIndex_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_DHSaveGameToSlot_Asynch_ReturnValue = CallFunc_DHSaveGameToSlot_Asynch_ReturnValue;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_CreateSaveGameObject_ReturnValue = CallFunc_CreateSaveGameObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.ResetInstanceBuffs
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         K2Node_DynamicCast_AsGame_Info_Instance                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::ResetInstanceBuffs(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGameInfoInstance_C* K2Node_DynamicCast_AsGame_Info_Instance, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "ResetInstanceBuffs");

	Params::AGameplayPC_C_ResetInstanceBuffs_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Info_Instance = K2Node_DynamicCast_AsGame_Info_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.GetCurrentMap
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        CurrentMap                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         K2Node_DynamicCast_AsGame_Info_Instance                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::GetCurrentMap(class FName* CurrentMap, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGameInfoInstance_C* K2Node_DynamicCast_AsGame_Info_Instance, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "GetCurrentMap");

	Params::AGameplayPC_C_GetCurrentMap_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Info_Instance = K2Node_DynamicCast_AsGame_Info_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (CurrentMap != nullptr)
		*CurrentMap = Parms.CurrentMap;

}


// Function GameplayPC.GameplayPC_C.ShowDemoRestartWidget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerDeathNew_C*           CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_DeathEffect_C*           CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::ShowDemoRestartWidget(class APawn* CallFunc_K2_GetPawn_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class UPlayerDeathNew_C* CallFunc_Create_ReturnValue, class ABP_DeathEffect_C* CallFunc_FinishSpawningActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "ShowDemoRestartWidget");

	Params::AGameplayPC_C_ShowDemoRestartWidget_Params Parms{};

	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.IsKeyboardMode?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsKeyboardMode                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UKeyboardModeNotifierComponent_C*CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::IsKeyboardMode_(bool* IsKeyboardMode, class UKeyboardModeNotifierComponent_C* CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "IsKeyboardMode?");

	Params::AGameplayPC_C_IsKeyboardMode__Params Parms{};

	Parms.CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier = CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier;

	UObject::ProcessEvent(Func, &Parms);

	if (IsKeyboardMode != nullptr)
		*IsKeyboardMode = Parms.IsKeyboardMode;

}


// Function GameplayPC.GameplayPC_C.DropMainHandWeapon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_ClearInventoryItem_Success                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryItem              CallFunc_GetInventoryItem_InventoryItem                          (HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AInvModularWeapon_C*         CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::DropMainHandWeapon(bool CallFunc_ClearInventoryItem_Success, const struct FInventoryItem& CallFunc_GetInventoryItem_InventoryItem, bool CallFunc_IsValid_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AInvModularWeapon_C* CallFunc_FinishSpawningActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "DropMainHandWeapon");

	Params::AGameplayPC_C_DropMainHandWeapon_Params Parms{};

	Parms.CallFunc_ClearInventoryItem_Success = CallFunc_ClearInventoryItem_Success;
	Parms.CallFunc_GetInventoryItem_InventoryItem = CallFunc_GetInventoryItem_InventoryItem;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.GetBuffsFromGameInstance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         K2Node_DynamicCast_AsGame_Info_Instance                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::GetBuffsFromGameInstance(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGameInfoInstance_C* K2Node_DynamicCast_AsGame_Info_Instance, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "GetBuffsFromGameInstance");

	Params::AGameplayPC_C_GetBuffsFromGameInstance_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Info_Instance = K2Node_DynamicCast_AsGame_Info_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.Process Damage Resist
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DamageIn                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      DamageType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              DamageOut                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              RetValue                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_RandomFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABarbarous_C*                CallFunc_GetCharacterAsBarbarous_AsBarbarous                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::Process_Damage_Resist(float DamageIn, class UClass* DamageType, float* DamageOut, float RetValue, bool Temp_bool_Variable, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue_2, bool CallFunc_EqualEqual_ClassClass_ReturnValue_3, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_RandomFloat_ReturnValue, class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float K2Node_Select_Default, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_FMax_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "Process Damage Resist");

	Params::AGameplayPC_C_Process_Damage_Resist_Params Parms{};

	Parms.DamageIn = DamageIn;
	Parms.DamageType = DamageType;
	Parms.RetValue = RetValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_1 = CallFunc_EqualEqual_ClassClass_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_2 = CallFunc_EqualEqual_ClassClass_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_3 = CallFunc_EqualEqual_ClassClass_ReturnValue_3;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_RandomFloat_ReturnValue = CallFunc_RandomFloat_ReturnValue;
	Parms.CallFunc_GetCharacterAsBarbarous_AsBarbarous = CallFunc_GetCharacterAsBarbarous_AsBarbarous;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_1 = CallFunc_Subtract_FloatFloat_ReturnValue_1;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (DamageOut != nullptr)
		*DamageOut = Parms.DamageOut;

}


// Function GameplayPC.GameplayPC_C.ProcessLichBuff
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::ProcessLichBuff(int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "ProcessLichBuff");

	Params::AGameplayPC_C_ProcessLichBuff_Params Parms{};

	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.ResetMultipliers
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         K2Node_DynamicCast_AsGame_Info_Instance                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::ResetMultipliers(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGameInfoInstance_C* K2Node_DynamicCast_AsGame_Info_Instance, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "ResetMultipliers");

	Params::AGameplayPC_C_ResetMultipliers_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Info_Instance = K2Node_DynamicCast_AsGame_Info_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.HideContainerLootLabel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::HideContainerLootLabel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "HideContainerLootLabel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.ShowContainerLootLabel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::ShowContainerLootLabel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "ShowContainerLootLabel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.RotatePlayerToFirstNavPoint
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ANavPointSpawner_C*>  CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANavPointSpawner_C*          CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_FindLookAtRotation_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_SetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::RotatePlayerToFirstNavPoint(bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class APawn* CallFunc_K2_GetPawn_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class ANavPointSpawner_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, class ANavPointSpawner_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_K2_SetActorRotation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "RotatePlayerToFirstNavPoint");

	Params::AGameplayPC_C_RotatePlayerToFirstNavPoint_Params Parms{};

	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_FindLookAtRotation_ReturnValue = CallFunc_FindLookAtRotation_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll_1 = CallFunc_BreakRotator_Roll_1;
	Parms.CallFunc_BreakRotator_Pitch_1 = CallFunc_BreakRotator_Pitch_1;
	Parms.CallFunc_BreakRotator_Yaw_1 = CallFunc_BreakRotator_Yaw_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_K2_SetActorRotation_ReturnValue = CallFunc_K2_SetActorRotation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.IsItemIdentifiedByID
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsIdentified                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryItem              CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::IsItemIdentifiedByID(class FName ID, bool* IsIdentified, const struct FInventoryItem& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "IsItemIdentifiedByID");

	Params::AGameplayPC_C_IsItemIdentifiedByID_Params Parms{};

	Parms.ID = ID;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsIdentified != nullptr)
		*IsIdentified = Parms.IsIdentified;

}


// Function GameplayPC.GameplayPC_C.GetInvItemFromSlot
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              GetSlotItemInfo                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemInformation            ItemInfo                                                         (Parm, OutParm, HasGetValueTypeHash)
// struct FItemInformation            K2Node_MakeStruct_ItemInformation                                (HasGetValueTypeHash)
// struct FItemInformation            K2Node_MakeStruct_ItemInformation_1                              (HasGetValueTypeHash)
// struct FInventoryItem              CallFunc_GetInventoryItem_InventoryItem                          (HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemInformation            K2Node_MakeStruct_ItemInformation_2                              (HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::GetInvItemFromSlot(int32 GetSlotItemInfo, struct FItemInformation* ItemInfo, const struct FItemInformation& K2Node_MakeStruct_ItemInformation, const struct FItemInformation& K2Node_MakeStruct_ItemInformation_1, const struct FInventoryItem& CallFunc_GetInventoryItem_InventoryItem, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FItemInformation& K2Node_MakeStruct_ItemInformation_2, bool CallFunc_Array_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "GetInvItemFromSlot");

	Params::AGameplayPC_C_GetInvItemFromSlot_Params Parms{};

	Parms.GetSlotItemInfo = GetSlotItemInfo;
	Parms.K2Node_MakeStruct_ItemInformation = K2Node_MakeStruct_ItemInformation;
	Parms.K2Node_MakeStruct_ItemInformation_1 = K2Node_MakeStruct_ItemInformation_1;
	Parms.CallFunc_GetInventoryItem_InventoryItem = CallFunc_GetInventoryItem_InventoryItem;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_MakeStruct_ItemInformation_2 = K2Node_MakeStruct_ItemInformation_2;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemInfo != nullptr)
		*ItemInfo = std::move(Parms.ItemInfo);

}


// Function GameplayPC.GameplayPC_C.SaveUnlocks
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDHGameInstance*             CallFunc_GetInstance_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDHGameInstance*             CallFunc_GetInstance_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPrimaryUserIndex_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPrimaryUserIndex_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGamePlayPlayerState_C*      K2Node_DynamicCast_AsGame_Play_Player_State                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUnlocksSave_C*              CallFunc_CreateSaveGameObject_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DHSaveGameToSlot_Asynch_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DHSaveGameToSlot_Asynch_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDHGameInstance*             CallFunc_GetInstance_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPrimaryUserIndex_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesSaveGameExist_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::SaveUnlocks(class UDHGameInstance* CallFunc_GetInstance_ReturnValue, class UDHGameInstance* CallFunc_GetInstance_ReturnValue_1, int32 CallFunc_GetPrimaryUserIndex_ReturnValue, int32 CallFunc_GetPrimaryUserIndex_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue, class AGamePlayPlayerState_C* K2Node_DynamicCast_AsGame_Play_Player_State, bool K2Node_DynamicCast_bSuccess, class UUnlocksSave_C* CallFunc_CreateSaveGameObject_ReturnValue, bool CallFunc_DHSaveGameToSlot_Asynch_ReturnValue, bool CallFunc_DHSaveGameToSlot_Asynch_ReturnValue_1, class UDHGameInstance* CallFunc_GetInstance_ReturnValue_2, int32 CallFunc_GetPrimaryUserIndex_ReturnValue_2, bool CallFunc_DoesSaveGameExist_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "SaveUnlocks");

	Params::AGameplayPC_C_SaveUnlocks_Params Parms{};

	Parms.CallFunc_GetInstance_ReturnValue = CallFunc_GetInstance_ReturnValue;
	Parms.CallFunc_GetInstance_ReturnValue_1 = CallFunc_GetInstance_ReturnValue_1;
	Parms.CallFunc_GetPrimaryUserIndex_ReturnValue = CallFunc_GetPrimaryUserIndex_ReturnValue;
	Parms.CallFunc_GetPrimaryUserIndex_ReturnValue_1 = CallFunc_GetPrimaryUserIndex_ReturnValue_1;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Play_Player_State = K2Node_DynamicCast_AsGame_Play_Player_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_CreateSaveGameObject_ReturnValue = CallFunc_CreateSaveGameObject_ReturnValue;
	Parms.CallFunc_DHSaveGameToSlot_Asynch_ReturnValue = CallFunc_DHSaveGameToSlot_Asynch_ReturnValue;
	Parms.CallFunc_DHSaveGameToSlot_Asynch_ReturnValue_1 = CallFunc_DHSaveGameToSlot_Asynch_ReturnValue_1;
	Parms.CallFunc_GetInstance_ReturnValue_2 = CallFunc_GetInstance_ReturnValue_2;
	Parms.CallFunc_GetPrimaryUserIndex_ReturnValue_2 = CallFunc_GetPrimaryUserIndex_ReturnValue_2;
	Parms.CallFunc_DoesSaveGameExist_ReturnValue = CallFunc_DoesSaveGameExist_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.CheckForUnlocks
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ItemToUnlock                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryItem              CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FToolTipInfo                K2Node_MakeStruct_ToolTipInfo                                    (HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::CheckForUnlocks(class FName ItemToUnlock, bool CallFunc_NotEqual_NameName_ReturnValue, const struct FInventoryItem& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FToolTipInfo& K2Node_MakeStruct_ToolTipInfo, int32 CallFunc_Array_AddUnique_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, bool K2Node_SwitchString_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "CheckForUnlocks");

	Params::AGameplayPC_C_CheckForUnlocks_Params Parms{};

	Parms.ItemToUnlock = ItemToUnlock;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.K2Node_MakeStruct_ToolTipInfo = K2Node_MakeStruct_ToolTipInfo;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.ClientUnlockNotification
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FToolTipInfo                ToolTipInfo                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FToolTipInfo                TempTooltip                                                      (Edit, BlueprintVisible, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void AGameplayPC_C::ClientUnlockNotification(const struct FToolTipInfo& ToolTipInfo, const struct FToolTipInfo& TempTooltip, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "ClientUnlockNotification");

	Params::AGameplayPC_C_ClientUnlockNotification_Params Parms{};

	Parms.ToolTipInfo = ToolTipInfo;
	Parms.TempTooltip = TempTooltip;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.SetStartingItems
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryItem              NewLocalVar_0                                                    (Edit, BlueprintVisible, HasGetValueTypeHash)
// struct FInventoryItem              CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetInventoryItem_Success                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetInventoryItemCount_ItemCount                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::SetStartingItems(const struct FInventoryItem& NewLocalVar_0, const struct FInventoryItem& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_SetInventoryItem_Success, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetInventoryItemCount_ItemCount, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "SetStartingItems");

	Params::AGameplayPC_C_SetStartingItems_Params Parms{};

	Parms.NewLocalVar_0 = NewLocalVar_0;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_SetInventoryItem_Success = CallFunc_SetInventoryItem_Success;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetInventoryItemCount_ItemCount = CallFunc_GetInventoryItemCount_ItemCount;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.GetActiveItemInfo
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              GetSlotItemInfo                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemInformation            ItemInfo                                                         (Parm, OutParm, HasGetValueTypeHash)
// struct FInventoryItem              FullItem                                                         (Parm, OutParm, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// struct FInventoryItem              CallFunc_GetInventoryItem_InventoryItem                          (HasGetValueTypeHash)
// struct FItemInformation            K2Node_MakeStruct_ItemInformation                                (HasGetValueTypeHash)

void AGameplayPC_C::GetActiveItemInfo(int32 GetSlotItemInfo, struct FItemInformation* ItemInfo, struct FInventoryItem* FullItem, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const struct FInventoryItem& CallFunc_GetInventoryItem_InventoryItem, const struct FItemInformation& K2Node_MakeStruct_ItemInformation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "GetActiveItemInfo");

	Params::AGameplayPC_C_GetActiveItemInfo_Params Parms{};

	Parms.GetSlotItemInfo = GetSlotItemInfo;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetInventoryItem_InventoryItem = CallFunc_GetInventoryItem_InventoryItem;
	Parms.K2Node_MakeStruct_ItemInformation = K2Node_MakeStruct_ItemInformation;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemInfo != nullptr)
		*ItemInfo = std::move(Parms.ItemInfo);

	if (FullItem != nullptr)
		*FullItem = std::move(Parms.FullItem);

}


// Function GameplayPC.GameplayPC_C.UpdateActiveItemWidget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NoValidItem                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               AutoCheckValidItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetItemIDFromQuickAccessSlot_ItemId                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetItemIDFromQuickAccessSlot_bValidItem                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemInformation            CallFunc_GetActiveItemInfo_ItemInfo                              (HasGetValueTypeHash)
// struct FInventoryItem              CallFunc_GetActiveItemInfo_FullItem                              (HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::UpdateActiveItemWidget(bool NoValidItem, bool AutoCheckValidItem, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, int32 CallFunc_GetItemIDFromQuickAccessSlot_ItemId, bool CallFunc_GetItemIDFromQuickAccessSlot_bValidItem, enum class ESlateVisibility Temp_byte_Variable_1, bool K2Node_Select_Default, const struct FItemInformation& CallFunc_GetActiveItemInfo_ItemInfo, const struct FInventoryItem& CallFunc_GetActiveItemInfo_FullItem, bool Temp_bool_Variable_1, enum class ESlateVisibility K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "UpdateActiveItemWidget");

	Params::AGameplayPC_C_UpdateActiveItemWidget_Params Parms{};

	Parms.NoValidItem = NoValidItem;
	Parms.AutoCheckValidItem = AutoCheckValidItem;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetItemIDFromQuickAccessSlot_ItemId = CallFunc_GetItemIDFromQuickAccessSlot_ItemId;
	Parms.CallFunc_GetItemIDFromQuickAccessSlot_bValidItem = CallFunc_GetItemIDFromQuickAccessSlot_bValidItem;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetActiveItemInfo_ItemInfo = CallFunc_GetActiveItemInfo_ItemInfo;
	Parms.CallFunc_GetActiveItemInfo_FullItem = CallFunc_GetActiveItemInfo_FullItem;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.GetNumPlayerDeaths
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              TotalPlayerDeaths                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::GetNumPlayerDeaths(int32* TotalPlayerDeaths)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "GetNumPlayerDeaths");

	Params::AGameplayPC_C_GetNumPlayerDeaths_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (TotalPlayerDeaths != nullptr)
		*TotalPlayerDeaths = Parms.TotalPlayerDeaths;

}


// Function GameplayPC.GameplayPC_C.SetDialogMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsDialogMode                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::SetDialogMode(bool IsDialogMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "SetDialogMode");

	Params::AGameplayPC_C_SetDialogMode_Params Parms{};

	Parms.IsDialogMode = IsDialogMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.IsSinglePlayer
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsSinglePlayer                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         K2Node_DynamicCast_AsGame_Info_Instance                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::IsSinglePlayer(bool* IsSinglePlayer, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGameInfoInstance_C* K2Node_DynamicCast_AsGame_Info_Instance, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "IsSinglePlayer");

	Params::AGameplayPC_C_IsSinglePlayer_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Info_Instance = K2Node_DynamicCast_AsGame_Info_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (IsSinglePlayer != nullptr)
		*IsSinglePlayer = Parms.IsSinglePlayer;

}


// Function GameplayPC.GameplayPC_C.SetCurrentFloor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CurrentFloor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         K2Node_DynamicCast_AsGame_Info_Instance                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::SetCurrentFloor(int32 CurrentFloor, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGameInfoInstance_C* K2Node_DynamicCast_AsGame_Info_Instance, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "SetCurrentFloor");

	Params::AGameplayPC_C_SetCurrentFloor_Params Parms{};

	Parms.CurrentFloor = CurrentFloor;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Info_Instance = K2Node_DynamicCast_AsGame_Info_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.GetHighScores
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        HighScores                                                       (Parm, OutParm)
// class FString                      HighScoreList                                                    (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDHGameInstance*             CallFunc_GetInstance_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPrimaryUserIndex_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   CallFunc_DHLoadGameFromSlot_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class UHighScoresSave_C*           K2Node_DynamicCast_AsHigh_Scores_Save                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHighScoreStruct            CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Year                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Month                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Day                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Hour                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Minute                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Second                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Millisecond                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_1                            (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_2                            (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_3                            (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_4                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_5                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)

void AGameplayPC_C::GetHighScores(class FText* HighScores, const class FString& HighScoreList, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UDHGameInstance* CallFunc_GetInstance_ReturnValue, int32 CallFunc_GetPrimaryUserIndex_ReturnValue, class USaveGame* CallFunc_DHLoadGameFromSlot_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class UHighScoresSave_C* K2Node_DynamicCast_AsHigh_Scores_Save, bool K2Node_DynamicCast_bSuccess, const struct FHighScoreStruct& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, int32 CallFunc_BreakDateTime_Year, int32 CallFunc_BreakDateTime_Month, int32 CallFunc_BreakDateTime_Day, int32 CallFunc_BreakDateTime_Hour, int32 CallFunc_BreakDateTime_Minute, int32 CallFunc_BreakDateTime_Second, int32 CallFunc_BreakDateTime_Millisecond, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, class FText CallFunc_Conv_IntToText_ReturnValue_2, class FText CallFunc_Conv_IntToText_ReturnValue_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_5, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "GetHighScores");

	Params::AGameplayPC_C_GetHighScores_Params Parms{};

	Parms.HighScoreList = HighScoreList;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetInstance_ReturnValue = CallFunc_GetInstance_ReturnValue;
	Parms.CallFunc_GetPrimaryUserIndex_ReturnValue = CallFunc_GetPrimaryUserIndex_ReturnValue;
	Parms.CallFunc_DHLoadGameFromSlot_ReturnValue = CallFunc_DHLoadGameFromSlot_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_DynamicCast_AsHigh_Scores_Save = K2Node_DynamicCast_AsHigh_Scores_Save;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_BreakDateTime_Year = CallFunc_BreakDateTime_Year;
	Parms.CallFunc_BreakDateTime_Month = CallFunc_BreakDateTime_Month;
	Parms.CallFunc_BreakDateTime_Day = CallFunc_BreakDateTime_Day;
	Parms.CallFunc_BreakDateTime_Hour = CallFunc_BreakDateTime_Hour;
	Parms.CallFunc_BreakDateTime_Minute = CallFunc_BreakDateTime_Minute;
	Parms.CallFunc_BreakDateTime_Second = CallFunc_BreakDateTime_Second;
	Parms.CallFunc_BreakDateTime_Millisecond = CallFunc_BreakDateTime_Millisecond;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue_1 = CallFunc_Conv_IntToText_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.CallFunc_Conv_IntToText_ReturnValue_2 = CallFunc_Conv_IntToText_ReturnValue_2;
	Parms.CallFunc_Conv_IntToText_ReturnValue_3 = CallFunc_Conv_IntToText_ReturnValue_3;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.K2Node_MakeStruct_FormatArgumentData_4 = K2Node_MakeStruct_FormatArgumentData_4;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_5 = K2Node_MakeStruct_FormatArgumentData_5;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (HighScores != nullptr)
		*HighScores = Parms.HighScores;

}


// Function GameplayPC.GameplayPC_C.ShowHighScores
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_GetHighScores_HighScores                                (None)
// class UHighScores_C*               CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::ShowHighScores(class FText CallFunc_GetHighScores_HighScores, class UHighScores_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "ShowHighScores");

	Params::AGameplayPC_C_ShowHighScores_Params Parms{};

	Parms.CallFunc_GetHighScores_HighScores = CallFunc_GetHighScores_HighScores;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.GetCurrentFloor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              CurrentFloor                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         K2Node_DynamicCast_AsGame_Info_Instance                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::GetCurrentFloor(int32* CurrentFloor, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGameInfoInstance_C* K2Node_DynamicCast_AsGame_Info_Instance, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "GetCurrentFloor");

	Params::AGameplayPC_C_GetCurrentFloor_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Info_Instance = K2Node_DynamicCast_AsGame_Info_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (CurrentFloor != nullptr)
		*CurrentFloor = Parms.CurrentFloor;

}


// Function GameplayPC.GameplayPC_C.UpdateHighScores
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDHGameInstance*             CallFunc_GetInstance_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDHGameInstance*             CallFunc_GetInstance_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPrimaryUserIndex_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPrimaryUserIndex_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDHGameInstance*             CallFunc_GetInstance_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDHGameInstance*             CallFunc_GetInstance_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPrimaryUserIndex_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPrimaryUserIndex_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   CallFunc_DHLoadGameFromSlot_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesSaveGameExist_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHighScoresSave_C*           K2Node_DynamicCast_AsHigh_Scores_Save                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DHSaveGameToSlot_Asynch_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDateTime                   CallFunc_Now_ReturnValue                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FDateTime                   CallFunc_Now_ReturnValue_1                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentFloor_CurrentFloor                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentFloor_CurrentFloor_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_1                            (None)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// struct FHighScoreStruct            K2Node_MakeStruct_HighScoreStruct                                (HasGetValueTypeHash)
// class UHighScoresSave_C*           CallFunc_CreateSaveGameObject_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// bool                               CallFunc_DHSaveGameToSlot_Asynch_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHighScoreStruct            K2Node_MakeStruct_HighScoreStruct_1                              (HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::UpdateHighScores(class UDHGameInstance* CallFunc_GetInstance_ReturnValue, class UDHGameInstance* CallFunc_GetInstance_ReturnValue_1, int32 CallFunc_GetPrimaryUserIndex_ReturnValue, int32 CallFunc_GetPrimaryUserIndex_ReturnValue_1, class UDHGameInstance* CallFunc_GetInstance_ReturnValue_2, class UDHGameInstance* CallFunc_GetInstance_ReturnValue_3, int32 CallFunc_GetPrimaryUserIndex_ReturnValue_2, int32 CallFunc_GetPrimaryUserIndex_ReturnValue_3, class USaveGame* CallFunc_DHLoadGameFromSlot_ReturnValue, bool CallFunc_DoesSaveGameExist_ReturnValue, class UHighScoresSave_C* K2Node_DynamicCast_AsHigh_Scores_Save, bool K2Node_DynamicCast_bSuccess, bool CallFunc_DHSaveGameToSlot_Asynch_ReturnValue, const struct FDateTime& CallFunc_Now_ReturnValue, const struct FDateTime& CallFunc_Now_ReturnValue_1, int32 CallFunc_GetCurrentFloor_CurrentFloor, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, int32 CallFunc_GetCurrentFloor_CurrentFloor_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Conv_IntToText_ReturnValue_1, class FText CallFunc_Format_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, const struct FHighScoreStruct& K2Node_MakeStruct_HighScoreStruct, class UHighScoresSave_C* CallFunc_CreateSaveGameObject_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, bool CallFunc_DHSaveGameToSlot_Asynch_ReturnValue_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, const struct FHighScoreStruct& K2Node_MakeStruct_HighScoreStruct_1, int32 CallFunc_Array_Add_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "UpdateHighScores");

	Params::AGameplayPC_C_UpdateHighScores_Params Parms{};

	Parms.CallFunc_GetInstance_ReturnValue = CallFunc_GetInstance_ReturnValue;
	Parms.CallFunc_GetInstance_ReturnValue_1 = CallFunc_GetInstance_ReturnValue_1;
	Parms.CallFunc_GetPrimaryUserIndex_ReturnValue = CallFunc_GetPrimaryUserIndex_ReturnValue;
	Parms.CallFunc_GetPrimaryUserIndex_ReturnValue_1 = CallFunc_GetPrimaryUserIndex_ReturnValue_1;
	Parms.CallFunc_GetInstance_ReturnValue_2 = CallFunc_GetInstance_ReturnValue_2;
	Parms.CallFunc_GetInstance_ReturnValue_3 = CallFunc_GetInstance_ReturnValue_3;
	Parms.CallFunc_GetPrimaryUserIndex_ReturnValue_2 = CallFunc_GetPrimaryUserIndex_ReturnValue_2;
	Parms.CallFunc_GetPrimaryUserIndex_ReturnValue_3 = CallFunc_GetPrimaryUserIndex_ReturnValue_3;
	Parms.CallFunc_DHLoadGameFromSlot_ReturnValue = CallFunc_DHLoadGameFromSlot_ReturnValue;
	Parms.CallFunc_DoesSaveGameExist_ReturnValue = CallFunc_DoesSaveGameExist_ReturnValue;
	Parms.K2Node_DynamicCast_AsHigh_Scores_Save = K2Node_DynamicCast_AsHigh_Scores_Save;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_DHSaveGameToSlot_Asynch_ReturnValue = CallFunc_DHSaveGameToSlot_Asynch_ReturnValue;
	Parms.CallFunc_Now_ReturnValue = CallFunc_Now_ReturnValue;
	Parms.CallFunc_Now_ReturnValue_1 = CallFunc_Now_ReturnValue_1;
	Parms.CallFunc_GetCurrentFloor_CurrentFloor = CallFunc_GetCurrentFloor_CurrentFloor;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_GetCurrentFloor_CurrentFloor_1 = CallFunc_GetCurrentFloor_CurrentFloor_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Conv_IntToText_ReturnValue_1 = CallFunc_Conv_IntToText_ReturnValue_1;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_MakeStruct_HighScoreStruct = K2Node_MakeStruct_HighScoreStruct;
	Parms.CallFunc_CreateSaveGameObject_ReturnValue = CallFunc_CreateSaveGameObject_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.CallFunc_DHSaveGameToSlot_Asynch_ReturnValue_1 = CallFunc_DHSaveGameToSlot_Asynch_ReturnValue_1;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.K2Node_MakeStruct_HighScoreStruct_1 = K2Node_MakeStruct_HighScoreStruct_1;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.ShowCharacterDialog
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::ShowCharacterDialog()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "ShowCharacterDialog");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.SetPlayerHealth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewHealthValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              LocPreviousHealth                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::SetPlayerHealth(float NewHealthValue, float LocPreviousHealth, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "SetPlayerHealth");

	Params::AGameplayPC_C_SetPlayerHealth_Params Parms{};

	Parms.NewHealthValue = NewHealthValue;
	Parms.LocPreviousHealth = LocPreviousHealth;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.ClientCenterNotification
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        NotificationHeading                                              (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        NotificationDetails                                              (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        NotificationFlavor                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// float                              NotificationTime                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHUD*                        CallFunc_GetHUD_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDHCenterNotification       K2Node_MakeStruct_DHCenterNotification                           (None)
// class AYourHUD_C*                  K2Node_DynamicCast_AsYour_HUD                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::ClientCenterNotification(class FText NotificationHeading, class FText NotificationDetails, class FText NotificationFlavor, float NotificationTime, class AHUD* CallFunc_GetHUD_ReturnValue, const struct FDHCenterNotification& K2Node_MakeStruct_DHCenterNotification, class AYourHUD_C* K2Node_DynamicCast_AsYour_HUD, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "ClientCenterNotification");

	Params::AGameplayPC_C_ClientCenterNotification_Params Parms{};

	Parms.NotificationHeading = NotificationHeading;
	Parms.NotificationDetails = NotificationDetails;
	Parms.NotificationFlavor = NotificationFlavor;
	Parms.NotificationTime = NotificationTime;
	Parms.CallFunc_GetHUD_ReturnValue = CallFunc_GetHUD_ReturnValue;
	Parms.K2Node_MakeStruct_DHCenterNotification = K2Node_MakeStruct_DHCenterNotification;
	Parms.K2Node_DynamicCast_AsYour_HUD = K2Node_DynamicCast_AsYour_HUD;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.ChangeCameraTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ActorToTarget                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              BlendTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGamePlayGameState_C*        K2Node_DynamicCast_AsGame_Play_Game_State                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::ChangeCameraTarget(class AActor* ActorToTarget, float BlendTime, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AGamePlayGameState_C* K2Node_DynamicCast_AsGame_Play_Game_State, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "ChangeCameraTarget");

	Params::AGameplayPC_C_ChangeCameraTarget_Params Parms{};

	Parms.ActorToTarget = ActorToTarget;
	Parms.BlendTime = BlendTime;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Play_Game_State = K2Node_DynamicCast_AsGame_Play_Game_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.UpdateCamera
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::UpdateCamera()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "UpdateCamera");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.RestartGame
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         K2Node_DynamicCast_AsGame_Info_Instance                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::RestartGame(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGameInfoInstance_C* K2Node_DynamicCast_AsGame_Info_Instance, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, class APlayerController* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "RestartGame");

	Params::AGameplayPC_C_RestartGame_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Info_Instance = K2Node_DynamicCast_AsGame_Info_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.StoreGameplayPC
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         K2Node_DynamicCast_AsGame_Info_Instance                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::StoreGameplayPC(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGameInfoInstance_C* K2Node_DynamicCast_AsGame_Info_Instance, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_AddUnique_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "StoreGameplayPC");

	Params::AGameplayPC_C_StoreGameplayPC_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Info_Instance = K2Node_DynamicCast_AsGame_Info_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.ShowGameOverWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGamePlayGameState_C*        K2Node_DynamicCast_AsGame_Play_Game_State                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameOver_C*                 CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         K2Node_DynamicCast_AsGame_Info_Instance                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         K2Node_DynamicCast_AsGame_Info_Instance_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::ShowGameOverWidget(bool CallFunc_HasAuthority_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AGamePlayGameState_C* K2Node_DynamicCast_AsGame_Play_Game_State, bool K2Node_DynamicCast_bSuccess, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGameOver_C* CallFunc_Create_ReturnValue, class UGameInfoInstance_C* K2Node_DynamicCast_AsGame_Info_Instance, bool K2Node_DynamicCast_bSuccess_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class UGameInfoInstance_C* K2Node_DynamicCast_AsGame_Info_Instance_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "ShowGameOverWidget");

	Params::AGameplayPC_C_ShowGameOverWidget_Params Parms{};

	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Play_Game_State = K2Node_DynamicCast_AsGame_Play_Game_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Info_Instance = K2Node_DynamicCast_AsGame_Info_Instance;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsGame_Info_Instance_1 = K2Node_DynamicCast_AsGame_Info_Instance_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.ClientMakeSlotBlinky
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsBlinky_                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              InventorySlot                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventory_Slot_C*           CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::ClientMakeSlotBlinky(bool IsBlinky_, int32 InventorySlot, class UInventory_Slot_C* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "ClientMakeSlotBlinky");

	Params::AGameplayPC_C_ClientMakeSlotBlinky_Params Parms{};

	Parms.IsBlinky_ = IsBlinky_;
	Parms.InventorySlot = InventorySlot;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.IdentifyItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        LogText                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FInventoryItem              InventoryItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class FName                        Local_ID                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FToolTipInfo                K2Node_MakeStruct_ToolTipInfo                                    (HasGetValueTypeHash)
// int32                              CallFunc_GetItemMaxFamiliarity_MaxFamiliarity                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::IdentifyItem(class FName ItemId, class FText LogText, const struct FInventoryItem& InventoryItem, class FName Local_ID, const struct FToolTipInfo& K2Node_MakeStruct_ToolTipInfo, int32 CallFunc_GetItemMaxFamiliarity_MaxFamiliarity, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "IdentifyItem");

	Params::AGameplayPC_C_IdentifyItem_Params Parms{};

	Parms.ItemId = ItemId;
	Parms.LogText = LogText;
	Parms.InventoryItem = InventoryItem;
	Parms.Local_ID = Local_ID;
	Parms.K2Node_MakeStruct_ToolTipInfo = K2Node_MakeStruct_ToolTipInfo;
	Parms.CallFunc_GetItemMaxFamiliarity_MaxFamiliarity = CallFunc_GetItemMaxFamiliarity_MaxFamiliarity;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.ClientNotification
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FToolTipInfo                ToolTipInfo                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class FName                        ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               UseNotify                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ManualNotify                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_ManualNotify                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_UseNotify                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABarbarous_C*                Local_Barbarous                                                  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Local_ItemID                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FToolTipInfo                Local_ToolTipInfo                                                (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              NewFamiliarity                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              PreviousFamiliarity                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetItemMaxFamiliarity_MaxFamiliarity                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABarbarous_C*                K2Node_DynamicCast_AsBarbarous                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class ABarbarous_C*                CallFunc_GetCharacterAsBarbarous_AsBarbarous                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlayerAtMaxFamiliarity__ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPlayerAtMaxFamiliarity__ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPlayerAtMaxFamiliarity__ReturnValue_2                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::ClientNotification(const struct FToolTipInfo& ToolTipInfo, class FName ItemId, bool UseNotify, bool ManualNotify, bool Local_ManualNotify, bool Local_UseNotify, class ABarbarous_C* Local_Barbarous, class FName Local_ItemID, const struct FToolTipInfo& Local_ToolTipInfo, int32 NewFamiliarity, int32 PreviousFamiliarity, bool K2Node_SwitchName_CmpSuccess, int32 CallFunc_GetItemMaxFamiliarity_MaxFamiliarity, class ABarbarous_C* K2Node_DynamicCast_AsBarbarous, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Variable, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, int32 Temp_int_Variable_1, bool Temp_bool_Variable, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 K2Node_Select_Default, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsPlayerAtMaxFamiliarity__ReturnValue, bool CallFunc_IsPlayerAtMaxFamiliarity__ReturnValue_1, bool CallFunc_IsPlayerAtMaxFamiliarity__ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "ClientNotification");

	Params::AGameplayPC_C_ClientNotification_Params Parms{};

	Parms.ToolTipInfo = ToolTipInfo;
	Parms.ItemId = ItemId;
	Parms.UseNotify = UseNotify;
	Parms.ManualNotify = ManualNotify;
	Parms.Local_ManualNotify = Local_ManualNotify;
	Parms.Local_UseNotify = Local_UseNotify;
	Parms.Local_Barbarous = Local_Barbarous;
	Parms.Local_ItemID = Local_ItemID;
	Parms.Local_ToolTipInfo = Local_ToolTipInfo;
	Parms.NewFamiliarity = NewFamiliarity;
	Parms.PreviousFamiliarity = PreviousFamiliarity;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.CallFunc_GetItemMaxFamiliarity_MaxFamiliarity = CallFunc_GetItemMaxFamiliarity_MaxFamiliarity;
	Parms.K2Node_DynamicCast_AsBarbarous = K2Node_DynamicCast_AsBarbarous;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_GetCharacterAsBarbarous_AsBarbarous = CallFunc_GetCharacterAsBarbarous_AsBarbarous;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsPlayerAtMaxFamiliarity__ReturnValue = CallFunc_IsPlayerAtMaxFamiliarity__ReturnValue;
	Parms.CallFunc_IsPlayerAtMaxFamiliarity__ReturnValue_1 = CallFunc_IsPlayerAtMaxFamiliarity__ReturnValue_1;
	Parms.CallFunc_IsPlayerAtMaxFamiliarity__ReturnValue_2 = CallFunc_IsPlayerAtMaxFamiliarity__ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.ServerEndScrollIdentify
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              InventorySlot                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryItem>      CallFunc_GetInventoryItems_InventoryItems                        (ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryItem              CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void AGameplayPC_C::ServerEndScrollIdentify(int32 InventorySlot, int32 Temp_int_Array_Index_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, TArray<struct FInventoryItem>& CallFunc_GetInventoryItems_InventoryItems, int32 CallFunc_Add_IntInt_ReturnValue, const struct FInventoryItem& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_Less_IntInt_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "ServerEndScrollIdentify");

	Params::AGameplayPC_C_ServerEndScrollIdentify_Params Parms{};

	Parms.InventorySlot = InventorySlot;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetInventoryItems_InventoryItems = CallFunc_GetInventoryItems_InventoryItems;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.IdentifyItemUIBlink
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::IdentifyItemUIBlink()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "IdentifyItemUIBlink");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.ServerScrollIdentify
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ScrollSlot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryItem>      CallFunc_GetInventoryItems_InventoryItems                        (ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryItem              CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::ServerScrollIdentify(int32 ScrollSlot, int32 Temp_int_Array_Index_Variable, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FInventoryItem>& CallFunc_GetInventoryItems_InventoryItems, int32 CallFunc_Array_Length_ReturnValue, const struct FInventoryItem& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_Array_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "ServerScrollIdentify");

	Params::AGameplayPC_C_ServerScrollIdentify_Params Parms{};

	Parms.ScrollSlot = ScrollSlot;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetInventoryItems_InventoryItems = CallFunc_GetInventoryItems_InventoryItems;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.IdentifyPotion
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        PotionToIdentify                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::IdentifyPotion(class FName PotionToIdentify, int32 CallFunc_Array_AddUnique_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "IdentifyPotion");

	Params::AGameplayPC_C_IdentifyPotion_Params Parms{};

	Parms.PotionToIdentify = PotionToIdentify;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.LoadPotionArray
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryItem              CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::LoadPotionArray(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FInventoryItem& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "LoadPotionArray");

	Params::AGameplayPC_C_LoadPotionArray_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.ServerLoadGame
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      SaveSlotName                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               Local_SaveExist                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Local_SaveSlot                                                   (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// class UDHGameInstance*             CallFunc_GetInstance_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPrimaryUserIndex_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDHGameInstance*             CallFunc_GetInstance_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPrimaryUserIndex_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_2(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesSaveGameExist_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_3(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_BoolToText_ReturnValue                             (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// class FString                      CallFunc_GetSaveSlot_ReturnValue                                 (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_4                           (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_2                         (None)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_5                           (HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class USaveGame*                   CallFunc_DHLoadGameFromSlot_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UServerSaveGame_C*           K2Node_DynamicCast_AsServer_Save_Game                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<class FName, float>           CallFunc_GetSerializedFloats_Floats                              (None)
// class FName                        Temp_name_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_1                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_2                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UServerSaveGame_C*           CallFunc_CreateSaveGameObject_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryItem>      CallFunc_GetInventoryItems_InventoryItems                        (ReferenceParm, HasGetValueTypeHash)
// struct FServerSaveFile             K2Node_MakeStruct_ServerSaveFile                                 (HasGetValueTypeHash)
// struct FServerSaveFile             K2Node_Select_Default                                            (HasGetValueTypeHash)
// class FName                        CallFunc_Map_Find_Value_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Map_Find_Value_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadInventoryItems_Success                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::ServerLoadGame(const class FString& SaveSlotName, bool Local_SaveExist, const class FString& Local_SaveSlot, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, bool CallFunc_HasAuthority_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, class UDHGameInstance* CallFunc_GetInstance_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_GetPrimaryUserIndex_ReturnValue, class UDHGameInstance* CallFunc_GetInstance_ReturnValue_1, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_1, int32 CallFunc_GetPrimaryUserIndex_ReturnValue_1, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_2, bool CallFunc_DoesSaveGameExist_ReturnValue, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_3, class FText CallFunc_Conv_BoolToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, const class FString& CallFunc_GetSaveSlot_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, class FText CallFunc_Conv_StringToText_ReturnValue_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_5, class FText CallFunc_Format_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FText CallFunc_Format_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, class USaveGame* CallFunc_DHLoadGameFromSlot_ReturnValue, bool Temp_bool_Variable, class UServerSaveGame_C* K2Node_DynamicCast_AsServer_Save_Game, bool K2Node_DynamicCast_bSuccess, TMap<class FName, float> CallFunc_GetSerializedFloats_Floats, class FName Temp_name_Variable, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UServerSaveGame_C* CallFunc_CreateSaveGameObject_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, TArray<struct FInventoryItem>& CallFunc_GetInventoryItems_InventoryItems, const struct FServerSaveFile& K2Node_MakeStruct_ServerSaveFile, const struct FServerSaveFile& K2Node_Select_Default, class FName CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, class FName CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, bool CallFunc_LoadInventoryItems_Success, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "ServerLoadGame");

	Params::AGameplayPC_C_ServerLoadGame_Params Parms{};

	Parms.SaveSlotName = SaveSlotName;
	Parms.Local_SaveExist = Local_SaveExist;
	Parms.Local_SaveSlot = Local_SaveSlot;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.CallFunc_GetInstance_ReturnValue = CallFunc_GetInstance_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_GetPrimaryUserIndex_ReturnValue = CallFunc_GetPrimaryUserIndex_ReturnValue;
	Parms.CallFunc_GetInstance_ReturnValue_1 = CallFunc_GetInstance_ReturnValue_1;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_1 = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_1;
	Parms.CallFunc_GetPrimaryUserIndex_ReturnValue_1 = CallFunc_GetPrimaryUserIndex_ReturnValue_1;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_2 = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_2;
	Parms.CallFunc_DoesSaveGameExist_ReturnValue = CallFunc_DoesSaveGameExist_ReturnValue;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_3 = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_3;
	Parms.CallFunc_Conv_BoolToText_ReturnValue = CallFunc_Conv_BoolToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.CallFunc_GetSaveSlot_ReturnValue = CallFunc_GetSaveSlot_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_4 = K2Node_MakeStruct_FormatArgumentData_4;
	Parms.CallFunc_Conv_StringToText_ReturnValue_2 = CallFunc_Conv_StringToText_ReturnValue_2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeStruct_FormatArgumentData_5 = K2Node_MakeStruct_FormatArgumentData_5;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_DHLoadGameFromSlot_ReturnValue = CallFunc_DHLoadGameFromSlot_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_DynamicCast_AsServer_Save_Game = K2Node_DynamicCast_AsServer_Save_Game;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetSerializedFloats_Floats = CallFunc_GetSerializedFloats_Floats;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.Temp_name_Variable_2 = Temp_name_Variable_2;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_CreateSaveGameObject_ReturnValue = CallFunc_CreateSaveGameObject_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_GetInventoryItems_InventoryItems = CallFunc_GetInventoryItems_InventoryItems;
	Parms.K2Node_MakeStruct_ServerSaveFile = K2Node_MakeStruct_ServerSaveFile;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_Map_Find_Value_2 = CallFunc_Map_Find_Value_2;
	Parms.CallFunc_Map_Find_ReturnValue_2 = CallFunc_Map_Find_ReturnValue_2;
	Parms.CallFunc_LoadInventoryItems_Success = CallFunc_LoadInventoryItems_Success;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.ServerSaveGame
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bShouldRestorePlayerTransformOnLoad_                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDHGameInstance*             CallFunc_GetInstance_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPrimaryUserIndex_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// TMap<class FName, float>           CallFunc_GetSerializedFloats_Floats                              (None)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDateTime                   CallFunc_Now_ReturnValue                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   CallFunc_MakeTimespan_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FDateTime                   CallFunc_Add_DateTimeTimespan_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TransformToString_ReturnValue                      (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_2                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_7                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_8                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_9                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_10                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_DHSaveGameToSlot_Asynch_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FInventoryItem>      CallFunc_GetInventoryItems_InventoryItems                        (ReferenceParm, HasGetValueTypeHash)
// class UServerSaveGame_C*           CallFunc_CreateSaveGameObject_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::ServerSaveGame(bool bShouldRestorePlayerTransformOnLoad_, class UDHGameInstance* CallFunc_GetInstance_ReturnValue, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, int32 CallFunc_GetPrimaryUserIndex_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, TMap<class FName, float> CallFunc_GetSerializedFloats_Floats, float CallFunc_GetGameTimeInSeconds_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, const struct FDateTime& CallFunc_Now_ReturnValue, const struct FTimespan& CallFunc_MakeTimespan_ReturnValue, const struct FDateTime& CallFunc_Add_DateTimeTimespan_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Conv_TransformToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, const class FString& CallFunc_Conv_NameToString_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, const class FString& CallFunc_Concat_StrStr_ReturnValue_9, const class FString& CallFunc_Concat_StrStr_ReturnValue_10, bool CallFunc_DHSaveGameToSlot_Asynch_ReturnValue, TArray<struct FInventoryItem>& CallFunc_GetInventoryItems_InventoryItems, class UServerSaveGame_C* CallFunc_CreateSaveGameObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "ServerSaveGame");

	Params::AGameplayPC_C_ServerSaveGame_Params Parms{};

	Parms.bShouldRestorePlayerTransformOnLoad_ = bShouldRestorePlayerTransformOnLoad_;
	Parms.CallFunc_GetInstance_ReturnValue = CallFunc_GetInstance_ReturnValue;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;
	Parms.CallFunc_GetPrimaryUserIndex_ReturnValue = CallFunc_GetPrimaryUserIndex_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetSerializedFloats_Floats = CallFunc_GetSerializedFloats_Floats;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_Now_ReturnValue = CallFunc_Now_ReturnValue;
	Parms.CallFunc_MakeTimespan_ReturnValue = CallFunc_MakeTimespan_ReturnValue;
	Parms.CallFunc_Add_DateTimeTimespan_ReturnValue = CallFunc_Add_DateTimeTimespan_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Conv_TransformToString_ReturnValue = CallFunc_Conv_TransformToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Conv_NameToString_ReturnValue_1 = CallFunc_Conv_NameToString_ReturnValue_1;
	Parms.CallFunc_Conv_NameToString_ReturnValue_2 = CallFunc_Conv_NameToString_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.CallFunc_Concat_StrStr_ReturnValue_7 = CallFunc_Concat_StrStr_ReturnValue_7;
	Parms.CallFunc_Concat_StrStr_ReturnValue_8 = CallFunc_Concat_StrStr_ReturnValue_8;
	Parms.CallFunc_Concat_StrStr_ReturnValue_9 = CallFunc_Concat_StrStr_ReturnValue_9;
	Parms.CallFunc_Concat_StrStr_ReturnValue_10 = CallFunc_Concat_StrStr_ReturnValue_10;
	Parms.CallFunc_DHSaveGameToSlot_Asynch_ReturnValue = CallFunc_DHSaveGameToSlot_Asynch_ReturnValue;
	Parms.CallFunc_GetInventoryItems_InventoryItems = CallFunc_GetInventoryItems_InventoryItems;
	Parms.CallFunc_CreateSaveGameObject_ReturnValue = CallFunc_CreateSaveGameObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.ShowRespawnWidget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URespawnTimer_C*             CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         K2Node_DynamicCast_AsGame_Info_Instance                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::ShowRespawnWidget(class URespawnTimer_C* CallFunc_Create_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGameInfoInstance_C* K2Node_DynamicCast_AsGame_Info_Instance, bool K2Node_DynamicCast_bSuccess, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_EqualEqual_IntInt_ReturnValue, class FText CallFunc_Format_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "ShowRespawnWidget");

	Params::AGameplayPC_C_ShowRespawnWidget_Params Parms{};

	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Info_Instance = K2Node_DynamicCast_AsGame_Info_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.PlayerDeath
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::PlayerDeath(float CallFunc_Conv_IntToFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "PlayerDeath");

	Params::AGameplayPC_C_PlayerDeath_Params Parms{};

	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.ServerSetHealth
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Duration                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              LocalDuration                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LocalAmount                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_FTrunc_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::ServerSetHealth(int32 Amount, float Duration, bool* Success, float LocalDuration, int32 LocalAmount, bool CallFunc_Greater_IntInt_ReturnValue, bool Temp_bool_Variable, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, int32 K2Node_Select_Default, bool CallFunc_Greater_IntInt_ReturnValue_1, int32 CallFunc_Round_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue_1, int32 CallFunc_FTrunc_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "ServerSetHealth");

	Params::AGameplayPC_C_ServerSetHealth_Params Parms{};

	Parms.Amount = Amount;
	Parms.Duration = Duration;
	Parms.LocalDuration = LocalDuration;
	Parms.LocalAmount = LocalAmount;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue_1 = CallFunc_Multiply_IntFloat_ReturnValue_1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_1 = CallFunc_Greater_FloatFloat_ReturnValue_1;
	Parms.CallFunc_FTrunc_ReturnValue_1 = CallFunc_FTrunc_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue_2 = CallFunc_FTrunc_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_2 = CallFunc_Conv_IntToFloat_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function GameplayPC.GameplayPC_C.SetUIMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UIMode                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bWithVirtualCursor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bForceMouse                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::SetUIMode(bool UIMode, bool bWithVirtualCursor, bool bForceMouse, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "SetUIMode");

	Params::AGameplayPC_C_SetUIMode_Params Parms{};

	Parms.UIMode = UIMode;
	Parms.bWithVirtualCursor = bWithVirtualCursor;
	Parms.bForceMouse = bForceMouse;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.ClientInitInventoryNoHUD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::ClientInitInventoryNoHUD()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "ClientInitInventoryNoHUD");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.HideInteractText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::HideInteractText(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "HideInteractText");

	Params::AGameplayPC_C_HideInteractText_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.ShowInteractText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      UsableActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInteractText_C*             CallFunc_GetInteractTextWidget_InteractTextWidget                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::ShowInteractText(class AActor* UsableActor, class UInteractText_C* CallFunc_GetInteractTextWidget_InteractTextWidget, bool CallFunc_TextIsEmpty_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "ShowInteractText");

	Params::AGameplayPC_C_ShowInteractText_Params Parms{};

	Parms.UsableActor = UsableActor;
	Parms.CallFunc_GetInteractTextWidget_InteractTextWidget = CallFunc_GetInteractTextWidget_InteractTextWidget;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.GetActorActionText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AUsable_Actor_C*             UsableActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Text                                                             (Parm, OutParm)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void AGameplayPC_C::GetActorActionText(class AUsable_Actor_C* UsableActor, class FText* Text, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "GetActorActionText");

	Params::AGameplayPC_C_GetActorActionText_Params Parms{};

	Parms.UsableActor = UsableActor;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

}


// Function GameplayPC.GameplayPC_C.SetInteractText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class UInteractText_C*             CallFunc_GetInteractTextWidget_InteractTextWidget                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::SetInteractText(class FText Text, class UInteractText_C* CallFunc_GetInteractTextWidget_InteractTextWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "SetInteractText");

	Params::AGameplayPC_C_SetInteractText_Params Parms{};

	Parms.Text = Text;
	Parms.CallFunc_GetInteractTextWidget_InteractTextWidget = CallFunc_GetInteractTextWidget_InteractTextWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.ClientInitializeInventory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::ClientInitializeInventory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "ClientInitializeInventory");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.GetPossessedPlayerCharacter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AZero_Base_C*                PlayerCharacter                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                K2Node_DynamicCast_As0_Base                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::GetPossessedPlayerCharacter(class AZero_Base_C** PlayerCharacter, class APawn* CallFunc_K2_GetPawn_ReturnValue, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "GetPossessedPlayerCharacter");

	Params::AGameplayPC_C_GetPossessedPlayerCharacter_Params Parms{};

	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_As0_Base = K2Node_DynamicCast_As0_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (PlayerCharacter != nullptr)
		*PlayerCharacter = Parms.PlayerCharacter;

}


// Function GameplayPC.GameplayPC_C.OnRep_IsThirdPersonView
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::OnRep_IsThirdPersonView()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "OnRep_IsThirdPersonView");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.SetPlayerViewMode
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               SetThirdPerson                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AZero_Base_C*                CallFunc_GetPossessedPlayerCharacter_PlayerCharacter             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_AddLocalOffset_SweepHitResult                        (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_AddLocalOffset_SweepHitResult_1                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AGameplayPC_C::SetPlayerViewMode(bool SetThirdPerson, class AZero_Base_C* CallFunc_GetPossessedPlayerCharacter_PlayerCharacter, const struct FHitResult& CallFunc_K2_AddLocalOffset_SweepHitResult, const struct FHitResult& CallFunc_K2_AddLocalOffset_SweepHitResult_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "SetPlayerViewMode");

	Params::AGameplayPC_C_SetPlayerViewMode_Params Parms{};

	Parms.SetThirdPerson = SetThirdPerson;
	Parms.CallFunc_GetPossessedPlayerCharacter_PlayerCharacter = CallFunc_GetPossessedPlayerCharacter_PlayerCharacter;
	Parms.CallFunc_K2_AddLocalOffset_SweepHitResult = CallFunc_K2_AddLocalOffset_SweepHitResult;
	Parms.CallFunc_K2_AddLocalOffset_SweepHitResult_1 = CallFunc_K2_AddLocalOffset_SweepHitResult_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.GetUsableActorFocus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetUseInteractibleConditions_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetUsableActor_Actor                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IUsableActorInterface_C>K2Node_DynamicCast_AsUsable_Actor_Interface                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IUsableActorInterface_C>K2Node_DynamicCast_AsUsable_Actor_Interface_1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EndOutlineFocus_Success                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsActorUsable_IsUsable                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IUsableActorInterface_C>K2Node_DynamicCast_AsUsable_Actor_Interface_2                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IUsableActorInterface_C>K2Node_DynamicCast_AsUsable_Actor_Interface_3                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetUnidentifiedText_UnidentifiedText                    (None)
// bool                               CallFunc_EndOutlineFocus_Success_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IUsableActorInterface_C>K2Node_DynamicCast_AsUsable_Actor_Interface_4                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetID_ID                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IUsableActorInterface_C>K2Node_DynamicCast_AsUsable_Actor_Interface_5                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetUseActionText_ActionText                             (None)
// bool                               CallFunc_IsItemIdentifiedByID_IsIdentified                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IUsableActorInterface_C>K2Node_DynamicCast_AsUsable_Actor_Interface_6                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BeginOutlineFocus_Success                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AUsable_Actor_C*             K2Node_DynamicCast_AsUsable_Actor                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ClassIsChildOf_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::GetUsableActorFocus(class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, bool CallFunc_GetUseInteractibleConditions_ReturnValue, class AActor* CallFunc_GetUsableActor_Actor, TScriptInterface<class IUsableActorInterface_C> K2Node_DynamicCast_AsUsable_Actor_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IUsableActorInterface_C> K2Node_DynamicCast_AsUsable_Actor_Interface_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_EndOutlineFocus_Success, bool CallFunc_GetIsActorUsable_IsUsable, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class IUsableActorInterface_C> K2Node_DynamicCast_AsUsable_Actor_Interface_2, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IUsableActorInterface_C> K2Node_DynamicCast_AsUsable_Actor_Interface_3, bool K2Node_DynamicCast_bSuccess_3, class FText CallFunc_GetUnidentifiedText_UnidentifiedText, bool CallFunc_EndOutlineFocus_Success_1, bool CallFunc_IsValid_ReturnValue_2, TScriptInterface<class IUsableActorInterface_C> K2Node_DynamicCast_AsUsable_Actor_Interface_4, bool K2Node_DynamicCast_bSuccess_4, class FName CallFunc_GetID_ID, TScriptInterface<class IUsableActorInterface_C> K2Node_DynamicCast_AsUsable_Actor_Interface_5, bool K2Node_DynamicCast_bSuccess_5, class FText CallFunc_GetUseActionText_ActionText, bool CallFunc_IsItemIdentifiedByID_IsIdentified, bool CallFunc_Array_Contains_ReturnValue, TScriptInterface<class IUsableActorInterface_C> K2Node_DynamicCast_AsUsable_Actor_Interface_6, bool K2Node_DynamicCast_bSuccess_6, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BeginOutlineFocus_Success, class AUsable_Actor_C* K2Node_DynamicCast_AsUsable_Actor, bool K2Node_DynamicCast_bSuccess_7, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "GetUsableActorFocus");

	Params::AGameplayPC_C_GetUsableActorFocus_Params Parms{};

	Parms.CallFunc_GetCharacterAs0_Base_As0_Base = CallFunc_GetCharacterAs0_Base_As0_Base;
	Parms.CallFunc_GetUseInteractibleConditions_ReturnValue = CallFunc_GetUseInteractibleConditions_ReturnValue;
	Parms.CallFunc_GetUsableActor_Actor = CallFunc_GetUsableActor_Actor;
	Parms.K2Node_DynamicCast_AsUsable_Actor_Interface = K2Node_DynamicCast_AsUsable_Actor_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsUsable_Actor_Interface_1 = K2Node_DynamicCast_AsUsable_Actor_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_EndOutlineFocus_Success = CallFunc_EndOutlineFocus_Success;
	Parms.CallFunc_GetIsActorUsable_IsUsable = CallFunc_GetIsActorUsable_IsUsable;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsUsable_Actor_Interface_2 = K2Node_DynamicCast_AsUsable_Actor_Interface_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsUsable_Actor_Interface_3 = K2Node_DynamicCast_AsUsable_Actor_Interface_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetUnidentifiedText_UnidentifiedText = CallFunc_GetUnidentifiedText_UnidentifiedText;
	Parms.CallFunc_EndOutlineFocus_Success_1 = CallFunc_EndOutlineFocus_Success_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsUsable_Actor_Interface_4 = K2Node_DynamicCast_AsUsable_Actor_Interface_4;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_GetID_ID = CallFunc_GetID_ID;
	Parms.K2Node_DynamicCast_AsUsable_Actor_Interface_5 = K2Node_DynamicCast_AsUsable_Actor_Interface_5;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_GetUseActionText_ActionText = CallFunc_GetUseActionText_ActionText;
	Parms.CallFunc_IsItemIdentifiedByID_IsIdentified = CallFunc_IsItemIdentifiedByID_IsIdentified;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.K2Node_DynamicCast_AsUsable_Actor_Interface_6 = K2Node_DynamicCast_AsUsable_Actor_Interface_6;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BeginOutlineFocus_Success = CallFunc_BeginOutlineFocus_Success;
	Parms.K2Node_DynamicCast_AsUsable_Actor = K2Node_DynamicCast_AsUsable_Actor;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_ClassIsChildOf_ReturnValue = CallFunc_ClassIsChildOf_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.GetUsableActor
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EObjectTypeQuery>K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetUseInteractibleConditions_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AZero_Base_C*                CallFunc_GetPossessedPlayerCharacter_PlayerCharacter             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              K2Node_MakeArray_Array_1                                         (ConstParm, ReferenceParm, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_CapsuleTraceSingleForObjects_OutHit                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_CapsuleTraceSingleForObjects_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesImplementInterface_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AEnemyCharacter_C*           K2Node_DynamicCast_AsEnemy_Character                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::GetUsableActor(class AActor** Actor, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetUseInteractibleConditions_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class AZero_Base_C* CallFunc_GetPossessedPlayerCharacter_PlayerCharacter, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TArray<class AActor*>& K2Node_MakeArray_Array_1, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FHitResult& CallFunc_CapsuleTraceSingleForObjects_OutHit, bool CallFunc_CapsuleTraceSingleForObjects_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_DoesImplementInterface_ReturnValue, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "GetUsableActor");

	Params::AGameplayPC_C_GetUsableActor_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetUseInteractibleConditions_ReturnValue = CallFunc_GetUseInteractibleConditions_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetPossessedPlayerCharacter_PlayerCharacter = CallFunc_GetPossessedPlayerCharacter_PlayerCharacter;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.CallFunc_CapsuleTraceSingleForObjects_OutHit = CallFunc_CapsuleTraceSingleForObjects_OutHit;
	Parms.CallFunc_CapsuleTraceSingleForObjects_ReturnValue = CallFunc_CapsuleTraceSingleForObjects_ReturnValue;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = CallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.CallFunc_DoesImplementInterface_ReturnValue = CallFunc_DoesImplementInterface_ReturnValue;
	Parms.K2Node_DynamicCast_AsEnemy_Character = K2Node_DynamicCast_AsEnemy_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Actor != nullptr)
		*Actor = Parms.Actor;

}


// Function GameplayPC.GameplayPC_C.OnActorUsed
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

void AGameplayPC_C::OnActorUsed(bool CallFunc_HasAuthority_ReturnValue, class AActor* CallFunc_GetUsableActor_Actor, TScriptInterface<class IUsableActorInterface_C> K2Node_DynamicCast_AsUsable_Actor_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IUsableActorInterface_C> K2Node_DynamicCast_AsUsable_Actor_Interface_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_GetIsActorUsable_IsUsable, bool CallFunc_OnActorUsed_Success, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "OnActorUsed");

	Params::AGameplayPC_C_OnActorUsed_Params Parms{};

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


// Function GameplayPC.GameplayPC_C.InitializePlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                K2Node_DynamicCast_As0_Base                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::InitializePlayer(class APawn* CallFunc_K2_GetPawn_ReturnValue, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "InitializePlayer");

	Params::AGameplayPC_C_InitializePlayer_Params Parms{};

	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_As0_Base = K2Node_DynamicCast_As0_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.LoadGame
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDHGameInstance*             CallFunc_GetInstance_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPrimaryUserIndex_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDHGameInstance*             CallFunc_GetInstance_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDHGameInstance*             CallFunc_GetInstance_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPrimaryUserIndex_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPrimaryUserIndex_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPlayerInfo                 K2Node_MakeStruct_PlayerInfo                                     (HasGetValueTypeHash)
// class UPlayerSaveGame_C*           CallFunc_CreateSaveGameObject_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DHSaveGameToSlot_Asynch_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USaveGame*                   CallFunc_DHLoadGameFromSlot_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerSaveGame_C*           K2Node_DynamicCast_AsPlayer_Save_Game                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DoesSaveGameExist_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::LoadGame(class UDHGameInstance* CallFunc_GetInstance_ReturnValue, int32 CallFunc_GetPrimaryUserIndex_ReturnValue, class UDHGameInstance* CallFunc_GetInstance_ReturnValue_1, class UDHGameInstance* CallFunc_GetInstance_ReturnValue_2, int32 CallFunc_GetPrimaryUserIndex_ReturnValue_1, int32 CallFunc_GetPrimaryUserIndex_ReturnValue_2, const struct FPlayerInfo& K2Node_MakeStruct_PlayerInfo, class UPlayerSaveGame_C* CallFunc_CreateSaveGameObject_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_DHSaveGameToSlot_Asynch_ReturnValue, class USaveGame* CallFunc_DHLoadGameFromSlot_ReturnValue, class UPlayerSaveGame_C* K2Node_DynamicCast_AsPlayer_Save_Game, bool K2Node_DynamicCast_bSuccess, bool CallFunc_DoesSaveGameExist_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "LoadGame");

	Params::AGameplayPC_C_LoadGame_Params Parms{};

	Parms.CallFunc_GetInstance_ReturnValue = CallFunc_GetInstance_ReturnValue;
	Parms.CallFunc_GetPrimaryUserIndex_ReturnValue = CallFunc_GetPrimaryUserIndex_ReturnValue;
	Parms.CallFunc_GetInstance_ReturnValue_1 = CallFunc_GetInstance_ReturnValue_1;
	Parms.CallFunc_GetInstance_ReturnValue_2 = CallFunc_GetInstance_ReturnValue_2;
	Parms.CallFunc_GetPrimaryUserIndex_ReturnValue_1 = CallFunc_GetPrimaryUserIndex_ReturnValue_1;
	Parms.CallFunc_GetPrimaryUserIndex_ReturnValue_2 = CallFunc_GetPrimaryUserIndex_ReturnValue_2;
	Parms.K2Node_MakeStruct_PlayerInfo = K2Node_MakeStruct_PlayerInfo;
	Parms.CallFunc_CreateSaveGameObject_ReturnValue = CallFunc_CreateSaveGameObject_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_DHSaveGameToSlot_Asynch_ReturnValue = CallFunc_DHSaveGameToSlot_Asynch_ReturnValue;
	Parms.CallFunc_DHLoadGameFromSlot_ReturnValue = CallFunc_DHLoadGameFromSlot_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlayer_Save_Game = K2Node_DynamicCast_AsPlayer_Save_Game;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_DoesSaveGameExist_ReturnValue = CallFunc_DoesSaveGameExist_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.InpActEvt_NextLuteMusic_K2Node_InputActionEvent_8
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AGameplayPC_C::InpActEvt_NextLuteMusic_K2Node_InputActionEvent_8(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "InpActEvt_NextLuteMusic_K2Node_InputActionEvent_8");

	Params::AGameplayPC_C_InpActEvt_NextLuteMusic_K2Node_InputActionEvent_8_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.InpActEvt_PrevLuteMusic_K2Node_InputActionEvent_7
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AGameplayPC_C::InpActEvt_PrevLuteMusic_K2Node_InputActionEvent_7(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "InpActEvt_PrevLuteMusic_K2Node_InputActionEvent_7");

	Params::AGameplayPC_C_InpActEvt_PrevLuteMusic_K2Node_InputActionEvent_7_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.InpActEvt_Loot_K2Node_InputActionEvent_6
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AGameplayPC_C::InpActEvt_Loot_K2Node_InputActionEvent_6(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "InpActEvt_Loot_K2Node_InputActionEvent_6");

	Params::AGameplayPC_C_InpActEvt_Loot_K2Node_InputActionEvent_6_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.InpActEvt_ToggleInventoryUI_K2Node_InputActionEvent_5
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AGameplayPC_C::InpActEvt_ToggleInventoryUI_K2Node_InputActionEvent_5(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "InpActEvt_ToggleInventoryUI_K2Node_InputActionEvent_5");

	Params::AGameplayPC_C_InpActEvt_ToggleInventoryUI_K2Node_InputActionEvent_5_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.InpActEvt_UseActiveItem_K2Node_InputActionEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AGameplayPC_C::InpActEvt_UseActiveItem_K2Node_InputActionEvent_4(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "InpActEvt_UseActiveItem_K2Node_InputActionEvent_4");

	Params::AGameplayPC_C_InpActEvt_UseActiveItem_K2Node_InputActionEvent_4_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.InpActEvt_PrevActiveItem_K2Node_InputActionEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AGameplayPC_C::InpActEvt_PrevActiveItem_K2Node_InputActionEvent_3(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "InpActEvt_PrevActiveItem_K2Node_InputActionEvent_3");

	Params::AGameplayPC_C_InpActEvt_PrevActiveItem_K2Node_InputActionEvent_3_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.InpActEvt_NextActiveItem_K2Node_InputActionEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AGameplayPC_C::InpActEvt_NextActiveItem_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "InpActEvt_NextActiveItem_K2Node_InputActionEvent_2");

	Params::AGameplayPC_C_InpActEvt_NextActiveItem_K2Node_InputActionEvent_2_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.InpActEvt_GameMenu_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AGameplayPC_C::InpActEvt_GameMenu_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "InpActEvt_GameMenu_K2Node_InputActionEvent_1");

	Params::AGameplayPC_C_InpActEvt_GameMenu_K2Node_InputActionEvent_1_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.InpActEvt_GameMenu_K2Node_InputActionEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AGameplayPC_C::InpActEvt_GameMenu_K2Node_InputActionEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "InpActEvt_GameMenu_K2Node_InputActionEvent_0");

	Params::AGameplayPC_C_InpActEvt_GameMenu_K2Node_InputActionEvent_0_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.OnStartTalkingToNPC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bDampenAudio                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::OnStartTalkingToNPC(bool bDampenAudio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "OnStartTalkingToNPC");

	Params::AGameplayPC_C_OnStartTalkingToNPC_Params Parms{};

	Parms.bDampenAudio = bDampenAudio;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.OnFinishTalkingToNPC
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::OnFinishTalkingToNPC()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "OnFinishTalkingToNPC");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.UpdateDeathStatueLocation_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::UpdateDeathStatueLocation_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "UpdateDeathStatueLocation_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.UpdateDeathStatueLocation_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::UpdateDeathStatueLocation_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "UpdateDeathStatueLocation_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.OnLevelShown_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::OnLevelShown_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "OnLevelShown_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.SkipCutscene
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_Cutscene_SkipType  StopType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::SkipCutscene(enum class Enum_Cutscene_SkipType StopType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "SkipCutscene");

	Params::AGameplayPC_C_SkipCutscene_Params Parms{};

	Parms.StopType = StopType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.ForceCloseEquipmentMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CloseSound                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::ForceCloseEquipmentMenu(bool CloseSound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "ForceCloseEquipmentMenu");

	Params::AGameplayPC_C_ForceCloseEquipmentMenu_Params Parms{};

	Parms.CloseSound = CloseSound;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.SetActiveCheckpoint
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CurrentCheckpoint                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CurrentCheckpointTransform                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// class FName                        CurrentMainLevel                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CurrentSubLevel                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::SetActiveCheckpoint(class FName CurrentCheckpoint, const struct FTransform& CurrentCheckpointTransform, class FName CurrentMainLevel, class FName CurrentSubLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "SetActiveCheckpoint");

	Params::AGameplayPC_C_SetActiveCheckpoint_Params Parms{};

	Parms.CurrentCheckpoint = CurrentCheckpoint;
	Parms.CurrentCheckpointTransform = CurrentCheckpointTransform;
	Parms.CurrentMainLevel = CurrentMainLevel;
	Parms.CurrentSubLevel = CurrentSubLevel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.OnWormfishSummoned_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::OnWormfishSummoned_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "OnWormfishSummoned_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.OnWormFishSummoned_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::OnWormFishSummoned_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "OnWormFishSummoned_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.SetSkylightVisibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visibility                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::SetSkylightVisibility(bool Visibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "SetSkylightVisibility");

	Params::AGameplayPC_C_SetSkylightVisibility_Params Parms{};

	Parms.Visibility = Visibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.UI_PauseMenuResume
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::UI_PauseMenuResume()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "UI_PauseMenuResume");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.CameraModifier_UpdateFilmGrain
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::CameraModifier_UpdateFilmGrain()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "CameraModifier_UpdateFilmGrain");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.CameraModifier_UpdateBrightness
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::CameraModifier_UpdateBrightness()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "CameraModifier_UpdateBrightness");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.CameraModifier_UpdatePixelMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::CameraModifier_UpdatePixelMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "CameraModifier_UpdatePixelMode");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.CameraModifier_UpdateMotionBlur
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::CameraModifier_UpdateMotionBlur()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "CameraModifier_UpdateMotionBlur");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.EscapeMenu_OnClose
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::EscapeMenu_OnClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "EscapeMenu_OnClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.EscapeMenu_OnOpen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::EscapeMenu_OnOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "EscapeMenu_OnOpen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.SetLevelHeightFogHidden
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewHidden                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::SetLevelHeightFogHidden(bool NewHidden)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "SetLevelHeightFogHidden");

	Params::AGameplayPC_C_SetLevelHeightFogHidden_Params Parms{};

	Parms.NewHidden = NewHidden;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.OnWeaponChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsChangingWeaponMode                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::OnWeaponChange(int32 Index, bool IsChangingWeaponMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "OnWeaponChange");

	Params::AGameplayPC_C_OnWeaponChange_Params Parms{};

	Parms.Index = Index;
	Parms.IsChangingWeaponMode = IsChangingWeaponMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.OnDamage_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::OnDamage_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "OnDamage_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.OnDamage_Unbind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::OnDamage_Unbind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "OnDamage_Unbind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.OnDamageTakenWithDamageType
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      DamageType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::OnDamageTakenWithDamageType(class UClass* DamageType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "OnDamageTakenWithDamageType");

	Params::AGameplayPC_C_OnDamageTakenWithDamageType_Params Parms{};

	Parms.DamageType = DamageType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.OnDeath_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::OnDeath_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "OnDeath_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.OnDeath_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::OnDeath_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "OnDeath_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.OnDeath_Unbind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::OnDeath_Unbind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "OnDeath_Unbind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.SetCameraShake
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Scale                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::SetCameraShake(float Scale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "SetCameraShake");

	Params::AGameplayPC_C_SetCameraShake_Params Parms{};

	Parms.Scale = Scale;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.SetForceFeedback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Scale                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::SetForceFeedback(float Scale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "SetForceFeedback");

	Params::AGameplayPC_C_SetForceFeedback_Params Parms{};

	Parms.Scale = Scale;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.UI_DebugLineEntry
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      DebugLine                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void AGameplayPC_C::UI_DebugLineEntry(class AActor* Actor, const class FString& DebugLine)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "UI_DebugLineEntry");

	Params::AGameplayPC_C_UI_DebugLineEntry_Params Parms{};

	Parms.Actor = Actor;
	Parms.DebugLine = DebugLine;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.UpdateAspectRationConstraint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::UpdateAspectRationConstraint(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "UpdateAspectRationConstraint");

	Params::AGameplayPC_C_UpdateAspectRationConstraint_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.CameraModifier_UpdateFOV
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::CameraModifier_UpdateFOV()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "CameraModifier_UpdateFOV");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.UpdateBallistazookaOpacity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Opacity                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::UpdateBallistazookaOpacity(float Opacity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "UpdateBallistazookaOpacity");

	Params::AGameplayPC_C_UpdateBallistazookaOpacity_Params Parms{};

	Parms.Opacity = Opacity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.SetShellDyes
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_ShellDyes           Dyes                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::SetShellDyes(const struct FStruct_ShellDyes& Dyes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "SetShellDyes");

	Params::AGameplayPC_C_SetShellDyes_Params Parms{};

	Parms.Dyes = Dyes;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.SetShellDyesLockState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_ShellsDyes_LockStateLockState                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::SetShellDyesLockState(const struct FStruct_ShellsDyes_LockState& LockState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "SetShellDyesLockState");

	Params::AGameplayPC_C_SetShellDyesLockState_Params Parms{};

	Parms.LockState = LockState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.AddInputHelperWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::AddInputHelperWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "AddInputHelperWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.ClearLevelSequenceActor
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::ClearLevelSequenceActor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "ClearLevelSequenceActor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.ResetPhotoModeCamera
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::ResetPhotoModeCamera()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "ResetPhotoModeCamera");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.ResetCheckpointsSave
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::ResetCheckpointsSave()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "ResetCheckpointsSave");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "ReceiveEndPlay");

	Params::AGameplayPC_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.SetNewGamePlusLevel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Level                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::SetNewGamePlusLevel(int32 Level)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "SetNewGamePlusLevel");

	Params::AGameplayPC_C_SetNewGamePlusLevel_Params Parms{};

	Parms.Level = Level;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.SetInputBlocked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bLock                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::SetInputBlocked(bool bLock)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "SetInputBlocked");

	Params::AGameplayPC_C_SetInputBlocked_Params Parms{};

	Parms.bLock = bLock;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.StormMode_UnlockLoreEntry
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::StormMode_UnlockLoreEntry(class FName ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "StormMode_UnlockLoreEntry");

	Params::AGameplayPC_C_StormMode_UnlockLoreEntry_Params Parms{};

	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.PlayerControllerUtils_SetHadernDefeatCounter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewCounter                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::PlayerControllerUtils_SetHadernDefeatCounter(int32 NewCounter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "PlayerControllerUtils_SetHadernDefeatCounter");

	Params::AGameplayPC_C_PlayerControllerUtils_SetHadernDefeatCounter_Params Parms{};

	Parms.NewCounter = NewCounter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.PlayerControllerUtils_SetGhostShellDeteriorationCounter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Count                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::PlayerControllerUtils_SetGhostShellDeteriorationCounter(int32 Count)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "PlayerControllerUtils_SetGhostShellDeteriorationCounter");

	Params::AGameplayPC_C_PlayerControllerUtils_SetGhostShellDeteriorationCounter_Params Parms{};

	Parms.Count = Count;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.InventoryUtil_LockUpgrade
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ItemName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::InventoryUtil_LockUpgrade(class FName ItemName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "InventoryUtil_LockUpgrade");

	Params::AGameplayPC_C_InventoryUtil_LockUpgrade_Params Parms{};

	Parms.ItemName = ItemName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.InventoryUtil_UnlockUpgrade
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ItemName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::InventoryUtil_UnlockUpgrade(class FName ItemName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "InventoryUtil_UnlockUpgrade");

	Params::AGameplayPC_C_InventoryUtil_UnlockUpgrade_Params Parms{};

	Parms.ItemName = ItemName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.InventoryUtil_SwitchArmor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ArmorID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::InventoryUtil_SwitchArmor(int32 ArmorID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "InventoryUtil_SwitchArmor");

	Params::AGameplayPC_C_InventoryUtil_SwitchArmor_Params Parms{};

	Parms.ArmorID = ArmorID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.InventoryUtil_LockWeaponByID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::InventoryUtil_LockWeaponByID(int32 ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "InventoryUtil_LockWeaponByID");

	Params::AGameplayPC_C_InventoryUtil_LockWeaponByID_Params Parms{};

	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.InventoryUtil_UnlockWeaponByID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::InventoryUtil_UnlockWeaponByID(int32 ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "InventoryUtil_UnlockWeaponByID");

	Params::AGameplayPC_C_InventoryUtil_UnlockWeaponByID_Params Parms{};

	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.InventoryUtil_SetInventoryItemByID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              WeaponID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsChangingWeaponMode                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::InventoryUtil_SetInventoryItemByID(int32 WeaponID, int32 Slot, bool IsChangingWeaponMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "InventoryUtil_SetInventoryItemByID");

	Params::AGameplayPC_C_InventoryUtil_SetInventoryItemByID_Params Parms{};

	Parms.WeaponID = WeaponID;
	Parms.Slot = Slot;
	Parms.IsChangingWeaponMode = IsChangingWeaponMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.Server_OnActorUsed
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::Server_OnActorUsed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "Server_OnActorUsed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.CloseEquipmentMenuCalled
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::CloseEquipmentMenuCalled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "CloseEquipmentMenuCalled");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.OnLevelShown_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::OnLevelShown_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "OnLevelShown_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.UI_OnInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::UI_OnInteract()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "UI_OnInteract");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.UI_Autoloot_Container
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::UI_Autoloot_Container()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "UI_Autoloot_Container");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.EventUINotification
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FToolTipInfo                ToolTipInfo                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class FName                        ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               UseNotify                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::EventUINotification(const struct FToolTipInfo& ToolTipInfo, class FName ItemId, bool UseNotify)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "EventUINotification");

	Params::AGameplayPC_C_EventUINotification_Params Parms{};

	Parms.ToolTipInfo = ToolTipInfo;
	Parms.ItemId = ItemId;
	Parms.UseNotify = UseNotify;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.OnConsumeTransitionFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::OnConsumeTransitionFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "OnConsumeTransitionFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.UI_Use_Inventory_Item
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Inventory_Slot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::UI_Use_Inventory_Item(int32 Inventory_Slot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "UI_Use_Inventory_Item");

	Params::AGameplayPC_C_UI_Use_Inventory_Item_Params Parms{};

	Parms.Inventory_Slot = Inventory_Slot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.UI_Use_Container_Item
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Container_Slot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::UI_Use_Container_Item(int32 Container_Slot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "UI_Use_Container_Item");

	Params::AGameplayPC_C_UI_Use_Container_Item_Params Parms{};

	Parms.Container_Slot = Container_Slot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.UI_Drop_Inventory_Item
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              From_Inventory_Slot                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::UI_Drop_Inventory_Item(int32 From_Inventory_Slot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "UI_Drop_Inventory_Item");

	Params::AGameplayPC_C_UI_Drop_Inventory_Item_Params Parms{};

	Parms.From_Inventory_Slot = From_Inventory_Slot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.UI_Split_Item_From_Inventory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              From_Inventory_Slot                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              To_Slot                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::UI_Split_Item_From_Inventory(int32 From_Inventory_Slot, int32 To_Slot, int32 Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "UI_Split_Item_From_Inventory");

	Params::AGameplayPC_C_UI_Split_Item_From_Inventory_Params Parms{};

	Parms.From_Inventory_Slot = From_Inventory_Slot;
	Parms.To_Slot = To_Slot;
	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.UI_Split_Inventory_Item
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              From_Inventory_Slot                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              To_Inventory_Slot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::UI_Split_Inventory_Item(int32 From_Inventory_Slot, int32 To_Inventory_Slot, int32 Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "UI_Split_Inventory_Item");

	Params::AGameplayPC_C_UI_Split_Inventory_Item_Params Parms{};

	Parms.From_Inventory_Slot = From_Inventory_Slot;
	Parms.To_Inventory_Slot = To_Inventory_Slot;
	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.UI_Split_Item_From_Container
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              From_Container_Slot                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              To_Slot                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::UI_Split_Item_From_Container(int32 From_Container_Slot, int32 To_Slot, int32 Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "UI_Split_Item_From_Container");

	Params::AGameplayPC_C_UI_Split_Item_From_Container_Params Parms{};

	Parms.From_Container_Slot = From_Container_Slot;
	Parms.To_Slot = To_Slot;
	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.UI_Split_Container_Item
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              From_Container_Slot                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              To_Container_Slot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::UI_Split_Container_Item(int32 From_Container_Slot, int32 To_Container_Slot, int32 Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "UI_Split_Container_Item");

	Params::AGameplayPC_C_UI_Split_Container_Item_Params Parms{};

	Parms.From_Container_Slot = From_Container_Slot;
	Parms.To_Container_Slot = To_Container_Slot;
	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.UI_Deposit_Container_Item
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              From_Inventory_Slot                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              To_Container_Slot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::UI_Deposit_Container_Item(int32 From_Inventory_Slot, int32 To_Container_Slot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "UI_Deposit_Container_Item");

	Params::AGameplayPC_C_UI_Deposit_Container_Item_Params Parms{};

	Parms.From_Inventory_Slot = From_Inventory_Slot;
	Parms.To_Container_Slot = To_Container_Slot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.UI_Take_Container_Item
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              From_Container_Slot                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              To_Inventory_Slot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::UI_Take_Container_Item(int32 From_Container_Slot, int32 To_Inventory_Slot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "UI_Take_Container_Item");

	Params::AGameplayPC_C_UI_Take_Container_Item_Params Parms{};

	Parms.From_Container_Slot = From_Container_Slot;
	Parms.To_Inventory_Slot = To_Inventory_Slot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.UI_Move_Container_Item
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              From_Container_Slot                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              To_Container_Slot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::UI_Move_Container_Item(int32 From_Container_Slot, int32 To_Container_Slot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "UI_Move_Container_Item");

	Params::AGameplayPC_C_UI_Move_Container_Item_Params Parms{};

	Parms.From_Container_Slot = From_Container_Slot;
	Parms.To_Container_Slot = To_Container_Slot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.UI_Move_Inventory_Item
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              From_Inventory_Slot                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              To_Inventory_Slot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::UI_Move_Inventory_Item(int32 From_Inventory_Slot, int32 To_Inventory_Slot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "UI_Move_Inventory_Item");

	Params::AGameplayPC_C_UI_Move_Inventory_Item_Params Parms{};

	Parms.From_Inventory_Slot = From_Inventory_Slot;
	Parms.To_Inventory_Slot = To_Inventory_Slot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.UI_UnEquip_To_Container
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              From_Inventory_Slot                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              To_Container_Slot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::UI_UnEquip_To_Container(int32 From_Inventory_Slot, int32 To_Container_Slot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "UI_UnEquip_To_Container");

	Params::AGameplayPC_C_UI_UnEquip_To_Container_Params Parms{};

	Parms.From_Inventory_Slot = From_Inventory_Slot;
	Parms.To_Container_Slot = To_Container_Slot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.UI_Equip_From_Container
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              From_Container_Slot                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              To_Inventory_Slot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::UI_Equip_From_Container(int32 From_Container_Slot, int32 To_Inventory_Slot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "UI_Equip_From_Container");

	Params::AGameplayPC_C_UI_Equip_From_Container_Params Parms{};

	Parms.From_Container_Slot = From_Container_Slot;
	Parms.To_Inventory_Slot = To_Inventory_Slot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.LoadEquipmentMenuCalled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_EquipmentMenuType  Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::LoadEquipmentMenuCalled(enum class Enum_EquipmentMenuType Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "LoadEquipmentMenuCalled");

	Params::AGameplayPC_C_LoadEquipmentMenuCalled_Params Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.UI_UnEquip_Inventory_Item
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              From_Inventory_Slot                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              To_Inventory_Slot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::UI_UnEquip_Inventory_Item(int32 From_Inventory_Slot, int32 To_Inventory_Slot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "UI_UnEquip_Inventory_Item");

	Params::AGameplayPC_C_UI_UnEquip_Inventory_Item_Params Parms{};

	Parms.From_Inventory_Slot = From_Inventory_Slot;
	Parms.To_Inventory_Slot = To_Inventory_Slot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.UI_Equip_Inventory_Item
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              From_Inventory_Slot                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              To_Inventory_Slot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::UI_Equip_Inventory_Item(int32 From_Inventory_Slot, int32 To_Inventory_Slot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "UI_Equip_Inventory_Item");

	Params::AGameplayPC_C_UI_Equip_Inventory_Item_Params Parms{};

	Parms.From_Inventory_Slot = From_Inventory_Slot;
	Parms.To_Inventory_Slot = To_Inventory_Slot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.UI_Set_IsMouseOverUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsMouseOverUI                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::UI_Set_IsMouseOverUI(bool IsMouseOverUI)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "UI_Set_IsMouseOverUI");

	Params::AGameplayPC_C_UI_Set_IsMouseOverUI_Params Parms{};

	Parms.IsMouseOverUI = IsMouseOverUI;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.UI_Close_Container
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::UI_Close_Container()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "UI_Close_Container");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.UI_Close_Equipment
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::UI_Close_Equipment()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "UI_Close_Equipment");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.UI_Close_Inventory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::UI_Close_Inventory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "UI_Close_Inventory");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.UI_Get_Container_ToolTip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Container_Slot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::UI_Get_Container_ToolTip(int32 Container_Slot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "UI_Get_Container_ToolTip");

	Params::AGameplayPC_C_UI_Get_Container_ToolTip_Params Parms{};

	Parms.Container_Slot = Container_Slot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.UI_Get_Inventory_ToolTip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Inventory_Slot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::UI_Get_Inventory_ToolTip(int32 Inventory_Slot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "UI_Get_Inventory_ToolTip");

	Params::AGameplayPC_C_UI_Get_Inventory_ToolTip_Params Parms{};

	Parms.Inventory_Slot = Inventory_Slot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.UI_Clear_ToolTip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ItemName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::UI_Clear_ToolTip(class FName ItemName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "UI_Clear_ToolTip");

	Params::AGameplayPC_C_UI_Clear_ToolTip_Params Parms{};

	Parms.ItemName = ItemName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.UI_Clear_Hotbar_Item
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              From_Hotbar_Slot                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::UI_Clear_Hotbar_Item(int32 From_Hotbar_Slot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "UI_Clear_Hotbar_Item");

	Params::AGameplayPC_C_UI_Clear_Hotbar_Item_Params Parms{};

	Parms.From_Hotbar_Slot = From_Hotbar_Slot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.UI_Move_Hotbar_Item
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              From_Slot                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              To_Slot                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsDraggedFromInventory                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsDraggedFromHotbar                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::UI_Move_Hotbar_Item(int32 From_Slot, int32 To_Slot, bool IsDraggedFromInventory, bool IsDraggedFromHotbar)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "UI_Move_Hotbar_Item");

	Params::AGameplayPC_C_UI_Move_Hotbar_Item_Params Parms{};

	Parms.From_Slot = From_Slot;
	Parms.To_Slot = To_Slot;
	Parms.IsDraggedFromInventory = IsDraggedFromInventory;
	Parms.IsDraggedFromHotbar = IsDraggedFromHotbar;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.RetrySave
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::RetrySave()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "RetrySave");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.Client_GetUsableActorFocus
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::Client_GetUsableActorFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "Client_GetUsableActorFocus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "ReceiveTick");

	Params::AGameplayPC_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.FastToggleFromEquipmentMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::FastToggleFromEquipmentMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "FastToggleFromEquipmentMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.ToggleFromEquipmentMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::ToggleFromEquipmentMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "ToggleFromEquipmentMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.Util_SaveGame
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bShouldRestorePlayerTransformOnLoad                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::Util_SaveGame(bool bShouldRestorePlayerTransformOnLoad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "Util_SaveGame");

	Params::AGameplayPC_C_Util_SaveGame_Params Parms{};

	Parms.bShouldRestorePlayerTransformOnLoad = bShouldRestorePlayerTransformOnLoad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.InputQueue_TryUseActiveItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::InputQueue_TryUseActiveItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "InputQueue_TryUseActiveItem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.CustomUseActiveItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::CustomUseActiveItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "CustomUseActiveItem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.CustomPrevActiveItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::CustomPrevActiveItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "CustomPrevActiveItem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.CustomNextActiveItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::CustomNextActiveItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "CustomNextActiveItem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.SelectNextQuickSlot
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::SelectNextQuickSlot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "SelectNextQuickSlot");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.UI_EscapeMenuPressed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Closed                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::UI_EscapeMenuPressed(bool Closed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "UI_EscapeMenuPressed");

	Params::AGameplayPC_C_UI_EscapeMenuPressed_Params Parms{};

	Parms.Closed = Closed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.MainMenu_OnBrightnessConfirmed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::MainMenu_OnBrightnessConfirmed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "MainMenu_OnBrightnessConfirmed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.OnThrowSuperExpired
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::OnThrowSuperExpired()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "OnThrowSuperExpired");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.OnConsumeTransitionEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::OnConsumeTransitionEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "OnConsumeTransitionEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.EndThrowQuickItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::EndThrowQuickItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "EndThrowQuickItem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.StartThrowQuickItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::StartThrowQuickItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "StartThrowQuickItem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.MainMenu_SetMenuState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_MainMenu_State     Menu_State                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::MainMenu_SetMenuState(enum class Enum_MainMenu_State Menu_State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "MainMenu_SetMenuState");

	Params::AGameplayPC_C_MainMenu_SetMenuState_Params Parms{};

	Parms.Menu_State = Menu_State;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.ResetAfterThrow
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::ResetAfterThrow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "ResetAfterThrow");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.MainMenu_CloseCredits
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::MainMenu_CloseCredits()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "MainMenu_CloseCredits");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.SetThrowSlotToLastInvItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::SetThrowSlotToLastInvItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "SetThrowSlotToLastInvItem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.UseActiveItem
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::UseActiveItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "UseActiveItem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.ParryTutorial
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::ParryTutorial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "ParryTutorial");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.BallistazookaTutorial
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::BallistazookaTutorial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "BallistazookaTutorial");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.HardenTutorial2
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::HardenTutorial2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "HardenTutorial2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.HardenTutorial1
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::HardenTutorial1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "HardenTutorial1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AGameplayPC_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.BndEvt__InventoryManagerComponent_K2Node_ComponentBoundEvent_0_ItemAddedToInventory__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FToolTipInfo                InventoryItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int32                              Familiarity                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MaxFamiliarity                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::BndEvt__InventoryManagerComponent_K2Node_ComponentBoundEvent_0_ItemAddedToInventory__DelegateSignature(const struct FToolTipInfo& InventoryItem, int32 Familiarity, int32 MaxFamiliarity, class FName ID, int32 Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "BndEvt__InventoryManagerComponent_K2Node_ComponentBoundEvent_0_ItemAddedToInventory__DelegateSignature");

	Params::AGameplayPC_C_BndEvt__InventoryManagerComponent_K2Node_ComponentBoundEvent_0_ItemAddedToInventory__DelegateSignature_Params Parms{};

	Parms.InventoryItem = InventoryItem;
	Parms.Familiarity = Familiarity;
	Parms.MaxFamiliarity = MaxFamiliarity;
	Parms.ID = ID;
	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.EventStartingTutorial
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::EventStartingTutorial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "EventStartingTutorial");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.EventQuickItemTutorial
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::EventQuickItemTutorial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "EventQuickItemTutorial");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.BottomNotifyCallback
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::BottomNotifyCallback()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "BottomNotifyCallback");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.EventQueueBottomNotify
// (Net, HasOutParams, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBottomRightNotificationStruct>NotificationsToQueue                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void AGameplayPC_C::EventQueueBottomNotify(TArray<struct FBottomRightNotificationStruct>& NotificationsToQueue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "EventQueueBottomNotify");

	Params::AGameplayPC_C_EventQueueBottomNotify_Params Parms{};

	Parms.NotificationsToQueue = NotificationsToQueue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.EventCombatTutorial
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::EventCombatTutorial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "EventCombatTutorial");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.EventBottomRightNotification
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Stop                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        KeyboardText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class UTexture*                    Icon                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Duration                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               TriggerCallBack                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::EventBottomRightNotification(bool Stop, class FName Name, class FText Text, class FText KeyboardText, class UTexture* Icon, float Duration, bool TriggerCallBack)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "EventBottomRightNotification");

	Params::AGameplayPC_C_EventBottomRightNotification_Params Parms{};

	Parms.Stop = Stop;
	Parms.Name = Name;
	Parms.Text = Text;
	Parms.KeyboardText = KeyboardText;
	Parms.Icon = Icon;
	Parms.Duration = Duration;
	Parms.TriggerCallBack = TriggerCallBack;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.EventClientCenterNotification
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        NotificationType                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        NotificationDetails                                              (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        NotificationFlavor                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// float                              NotificationTimeout                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::EventClientCenterNotification(class FText NotificationType, class FText NotificationDetails, class FText NotificationFlavor, float NotificationTimeout)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "EventClientCenterNotification");

	Params::AGameplayPC_C_EventClientCenterNotification_Params Parms{};

	Parms.NotificationType = NotificationType;
	Parms.NotificationDetails = NotificationDetails;
	Parms.NotificationFlavor = NotificationFlavor;
	Parms.NotificationTimeout = NotificationTimeout;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.UpdateRespawnWidget
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::UpdateRespawnWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "UpdateRespawnWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.GameMenuRelease
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::GameMenuRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "GameMenuRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.GameMenuPress
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::GameMenuPress()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "GameMenuPress");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.GameMenu_OpenPhotoMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::GameMenu_OpenPhotoMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "GameMenu_OpenPhotoMode");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.ForcePauseMenuClose
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Sound                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::ForcePauseMenuClose(bool Sound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "ForcePauseMenuClose");

	Params::AGameplayPC_C_ForcePauseMenuClose_Params Parms{};

	Parms.Sound = Sound;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.ShowSkipCutscene
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_Cutscene_SkipType  SkipType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::ShowSkipCutscene(enum class Enum_Cutscene_SkipType SkipType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "ShowSkipCutscene");

	Params::AGameplayPC_C_ShowSkipCutscene_Params Parms{};

	Parms.SkipType = SkipType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.HideSkipCutscene
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::HideSkipCutscene()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "HideSkipCutscene");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.PauseMenu_Resume
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::PauseMenu_Resume()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "PauseMenu_Resume");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.OnCloseWithBackButton_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::OnCloseWithBackButton_Event_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "OnCloseWithBackButton_Event_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.OnEquipmentMenuPawnPossessed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_EquipmentMenuPawn_C*     Pawn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::OnEquipmentMenuPawnPossessed(class ABP_EquipmentMenuPawn_C* Pawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "OnEquipmentMenuPawnPossessed");

	Params::AGameplayPC_C_OnEquipmentMenuPawnPossessed_Params Parms{};

	Parms.Pawn = Pawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.EquippedShell
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ShellName                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        ShellTagline                                                     (BlueprintVisible, BlueprintReadOnly, Parm)

void AGameplayPC_C::EquippedShell(class FText ShellName, class FText ShellTagline)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "EquippedShell");

	Params::AGameplayPC_C_EquippedShell_Params Parms{};

	Parms.ShellName = ShellName;
	Parms.ShellTagline = ShellTagline;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.HideHUD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Instant                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               NoHideNotifies                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::HideHUD(bool Instant, bool NoHideNotifies)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "HideHUD");

	Params::AGameplayPC_C_HideHUD_Params Parms{};

	Parms.Instant = Instant;
	Parms.NoHideNotifies = NoHideNotifies;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.ShowHUD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Instant                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::ShowHUD(bool Instant)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "ShowHUD");

	Params::AGameplayPC_C_ShowHUD_Params Parms{};

	Parms.Instant = Instant;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.UI_OpenStartPortals
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::UI_OpenStartPortals()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "UI_OpenStartPortals");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.UI_SetUIMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsUIMode                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::UI_SetUIMode(bool IsUIMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "UI_SetUIMode");

	Params::AGameplayPC_C_UI_SetUIMode_Params Parms{};

	Parms.IsUIMode = IsUIMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.UI_SetDialogMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsDialogMode                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::UI_SetDialogMode(bool IsDialogMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "UI_SetDialogMode");

	Params::AGameplayPC_C_UI_SetDialogMode_Params Parms{};

	Parms.IsDialogMode = IsDialogMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.Event_SetUIMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UIMode                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::Event_SetUIMode(bool UIMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "Event_SetUIMode");

	Params::AGameplayPC_C_Event_SetUIMode_Params Parms{};

	Parms.UIMode = UIMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.EventShowCharacterDialog
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::EventShowCharacterDialog()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "EventShowCharacterDialog");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.EventChangeCharacterMaterial
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGameplayPC_C*               PlayerToChange                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::EventChangeCharacterMaterial(class AGameplayPC_C* PlayerToChange)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "EventChangeCharacterMaterial");

	Params::AGameplayPC_C_EventChangeCharacterMaterial_Params Parms{};

	Parms.PlayerToChange = PlayerToChange;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.CamFocusArtifact
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::CamFocusArtifact()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "CamFocusArtifact");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.EventServerEndScrollIdentify
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              InventorySlot                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::EventServerEndScrollIdentify(int32 InventorySlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "EventServerEndScrollIdentify");

	Params::AGameplayPC_C_EventServerEndScrollIdentify_Params Parms{};

	Parms.InventorySlot = InventorySlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.ClientEndScrollIdentify
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              InventorySlot                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::ClientEndScrollIdentify(int32 InventorySlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "ClientEndScrollIdentify");

	Params::AGameplayPC_C_ClientEndScrollIdentify_Params Parms{};

	Parms.InventorySlot = InventorySlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.ClientScrollIdentify
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ScrollSlot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::ClientScrollIdentify(int32 ScrollSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "ClientScrollIdentify");

	Params::AGameplayPC_C_ClientScrollIdentify_Params Parms{};

	Parms.ScrollSlot = ScrollSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.RemoveGameLog
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::RemoveGameLog()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "RemoveGameLog");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.UpdateGameLog
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void AGameplayPC_C::UpdateGameLog(class FText Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "UpdateGameLog");

	Params::AGameplayPC_C_UpdateGameLog_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.Server_SetThirdPerson
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               SetThirdPerson                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::Server_SetThirdPerson(bool SetThirdPerson)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "Server_SetThirdPerson");

	Params::AGameplayPC_C_Server_SetThirdPerson_Params Parms{};

	Parms.SetThirdPerson = SetThirdPerson;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.UpdateChat
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        SenderName                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        SenderText                                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void AGameplayPC_C::UpdateChat(class FText SenderName, class FText SenderText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "UpdateChat");

	Params::AGameplayPC_C_UpdateChat_Params Parms{};

	Parms.SenderName = SenderName;
	Parms.SenderText = SenderText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.GetChatMessage
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        TextToSend                                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void AGameplayPC_C::GetChatMessage(class FText TextToSend)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "GetChatMessage");

	Params::AGameplayPC_C_GetChatMessage_Params Parms{};

	Parms.TextToSend = TextToSend;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.SetupChatWindow
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::SetupChatWindow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "SetupChatWindow");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.CallPhotoModeClose
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::CallPhotoModeClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "CallPhotoModeClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.CallPhotoModeEnter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::CallPhotoModeEnter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "CallPhotoModeEnter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.PhotoModeOpen
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::PhotoModeOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "PhotoModeOpen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.PhotoModeClose
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::PhotoModeClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "PhotoModeClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.EquipBossWeapons
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::EquipBossWeapons()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "EquipBossWeapons");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.ServerSave
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::ServerSave()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "ServerSave");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.LastChanceSaveStatue
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::LastChanceSaveStatue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "LastChanceSaveStatue");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.HandleMoneyOnDeath
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::HandleMoneyOnDeath()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "HandleMoneyOnDeath");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.OnPairedAnimFinish_WhilePlayerDead
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::OnPairedAnimFinish_WhilePlayerDead()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "OnPairedAnimFinish_WhilePlayerDead");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.CheckIfPairedAnimFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::CheckIfPairedAnimFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "CheckIfPairedAnimFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.PlayDeathAnimAndCleanup
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::PlayDeathAnimAndCleanup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "PlayDeathAnimAndCleanup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.DisableInputs
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::DisableInputs()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "DisableInputs");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.DeathInDarkForm
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::DeathInDarkForm()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "DeathInDarkForm");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.StoneFormIfNotDarkForm
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::StoneFormIfNotDarkForm()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "StoneFormIfNotDarkForm");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.DeathAfterLastChance
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Killer                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::DeathAfterLastChance(class AActor* Killer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "DeathAfterLastChance");

	Params::AGameplayPC_C_DeathAfterLastChance_Params Parms{};

	Parms.Killer = Killer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.EventPlayerDeath
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     ImpactVector                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::EventPlayerDeath(class AActor* DamageCauser, const struct FVector& ImpactVector)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "EventPlayerDeath");

	Params::AGameplayPC_C_EventPlayerDeath_Params Parms{};

	Parms.DamageCauser = DamageCauser;
	Parms.ImpactVector = ImpactVector;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.ReceivePossess
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APawn*                       PossessedPawn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::ReceivePossess(class APawn* PossessedPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "ReceivePossess");

	Params::AGameplayPC_C_ReceivePossess_Params Parms{};

	Parms.PossessedPawn = PossessedPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.UpdateUsableActorFocus
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::UpdateUsableActorFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "UpdateUsableActorFocus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.ReduceDamageBoostOverTime
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::ReduceDamageBoostOverTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "ReduceDamageBoostOverTime");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.CheckForLoadScreenFade
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::CheckForLoadScreenFade()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "CheckForLoadScreenFade");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.PC_AfterLevelLoaded
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::PC_AfterLevelLoaded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "PC_AfterLevelLoaded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.RestartCharacter
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::RestartCharacter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "RestartCharacter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.EventServerLoadGame
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      SaveSlotName                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void AGameplayPC_C::EventServerLoadGame(const class FString& SaveSlotName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "EventServerLoadGame");

	Params::AGameplayPC_C_EventServerLoadGame_Params Parms{};

	Parms.SaveSlotName = SaveSlotName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.ClientLoadGame
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::ClientLoadGame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "ClientLoadGame");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.PassCharacterInfoToServer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerInfo                 PlayerSettingsInfo                                               (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AGameplayPC_C::PassCharacterInfoToServer(const struct FPlayerInfo& PlayerSettingsInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "PassCharacterInfoToServer");

	Params::AGameplayPC_C_PassCharacterInfoToServer_Params Parms{};

	Parms.PlayerSettingsInfo = PlayerSettingsInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.Server_HealthReg_Unpause
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::Server_HealthReg_Unpause()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "Server_HealthReg_Unpause");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.Server_HealthReg_Pause
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::Server_HealthReg_Pause()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "Server_HealthReg_Pause");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.PlayerControllerUtils_SetMaxHP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SetMaxHP                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::PlayerControllerUtils_SetMaxHP(int32 SetMaxHP)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "PlayerControllerUtils_SetMaxHP");

	Params::AGameplayPC_C_PlayerControllerUtils_SetMaxHP_Params Parms{};

	Parms.SetMaxHP = SetMaxHP;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.EventIdentifyAllInvItems
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::EventIdentifyAllInvItems()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "EventIdentifyAllInvItems");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.ClientPlaySoundAtLoc
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  SoundBaseRef                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::ClientPlaySoundAtLoc(const struct FVector& Location, class USoundBase* SoundBaseRef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "ClientPlaySoundAtLoc");

	Params::AGameplayPC_C_ClientPlaySoundAtLoc_Params Parms{};

	Parms.Location = Location;
	Parms.SoundBaseRef = SoundBaseRef;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.ClientPlaySound2d
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*                  SoundBaseRef                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::ClientPlaySound2d(class USoundBase* SoundBaseRef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "ClientPlaySound2d");

	Params::AGameplayPC_C_ClientPlaySound2d_Params Parms{};

	Parms.SoundBaseRef = SoundBaseRef;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.Server_StartRegenHealth
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::Server_StartRegenHealth()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "Server_StartRegenHealth");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.Server_StopRegenHealth
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::Server_StopRegenHealth()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "Server_StopRegenHealth");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.Server_Regen_Health
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::Server_Regen_Health()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "Server_Regen_Health");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.ExecuteUbergraph_GameplayPC
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// float                              K2Node_Event_Scale_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Scale                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Actor                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Event_DebugLine                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_Index                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)
// float                              K2Node_Event_Opacity                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_ShellDyes           K2Node_Event_Dyes                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_ShellsDyes_LockStateK2Node_Event_LockState                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_PhotoModeInputHelper_C*  CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLevelLoaded_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TransformToString_ReturnValue                      (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_2                         (ZeroConstructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_CustomEvent_DamageType                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_Level                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameModeUtilInterface_C>K2Node_DynamicCast_AsGame_Mode_Util_Interface                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameModeUtilInterface_C>K2Node_DynamicCast_AsGame_Mode_Util_Interface_1                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               K2Node_Event_Block                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_ID_2                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_GetAllActorsWithTag_OutActors                           (ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_NewCounter                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABarbarous_C*                CallFunc_GetCharacterAsBarbarous_AsBarbarous                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_Count                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_ItemName_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_Index_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsChangingWeaponMode_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Event_ItemName_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_NewHidden                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABarbarous_C*                K2Node_DynamicCast_AsBarbarous                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_ArmorID                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_ID_1                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetWeaponNameFromID_WeaponName                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetShellTagline_ShellTagline                            (None)
// class FText                        CallFunc_GetShellName_ShellName                                  (None)
// int32                              K2Node_Event_ID                                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetWeaponNameFromID_WeaponName_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_WeaponID                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_Slot                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsChangingWeaponMode                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetWeaponNameFromID_WeaponName_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EComboTypes             CallFunc_GetCharacterWeaponEnumFromID_Weapon                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryItem              CallFunc_GetItemFromID_Item                                      (HasGetValueTypeHash)
// bool                               CallFunc_SetInventoryItem_Success                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FToolTipInfo                K2Node_CustomEvent_ToolTipInfo                                   (HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_ItemID                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_UseNotify                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_Inventory_Slot_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_Container_Slot_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_From_Inventory_Slot_7                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_From_Inventory_Slot_6                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_To_Slot_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_Amount_3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_From_Inventory_Slot_5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_To_Inventory_Slot_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_Amount_2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_From_Container_Slot_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_To_Slot_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_Amount_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_From_Container_Slot_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_To_Container_Slot_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_Amount                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_From_Inventory_Slot_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_To_Container_Slot_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_From_Container_Slot_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_To_Inventory_Slot_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_From_Container_Slot_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_To_Container_Slot_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_From_Inventory_Slot_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_To_Inventory_Slot_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_From_Inventory_Slot_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_To_Container_Slot                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_From_Container_Slot                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_To_Inventory_Slot_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_EquipmentMenuType  K2Node_CustomEvent_Type                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_From_Inventory_Slot_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_To_Inventory_Slot_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_From_Inventory_Slot                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_To_Inventory_Slot                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsMouseOverUI                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_Container_Slot                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_Inventory_Slot                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_ItemName                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_From_Hotbar_Slot                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_From_Slot                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_To_Slot                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDraggedFromInventory                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDraggedFromHotbar                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameplayChat_C*             CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bShouldRestorePlayerTransformOnLoad                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_6                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_7                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_Closed                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        Temp_struct_Variable                                             (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key                                      (HasGetValueTypeHash)
// enum class Enum_MainMenu_State     K2Node_Event_Menu_State                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_1                                    (HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UThrowCrosshairs_C*          CallFunc_Create_ReturnValue_2                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// int32                              CallFunc_ReturnFirstEmptySlot_FirstEmptySlot                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemType               CallFunc_GetNextThrownItem_Type                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryItem              CallFunc_GetNextThrownItem_InventoryItem                         (HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                K2Node_DynamicCast_As0_Base                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// class USword_AnimBP2v3_C*          K2Node_DynamicCast_AsSword_Anim_BP2v_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AZero_Base_C*                K2Node_DynamicCast_As0_Base_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetArbNameInChangedSetPure_bIsInSet                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_8                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetArbNameInChangedSetPure_bIsInSet_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetArbNameInChangedSetPure_bIsInSet_2                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_9                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_10                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetArbNameInChangedSetPure_bIsInSet_3                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetArbNameInChangedSetPure_bIsInSet_4                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_11                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_12                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetArbNameInChangedSetPure_bIsInSet_5                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_13                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameModeUtilInterface_C>K2Node_DynamicCast_AsGame_Mode_Util_Interface_2                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameModeUtilInterface_C>K2Node_DynamicCast_AsGame_Mode_Util_Interface_3                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameModeUtilInterface_C>K2Node_DynamicCast_AsGame_Mode_Util_Interface_4                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameModeUtilInterface_C>K2Node_DynamicCast_AsGame_Mode_Util_Interface_5                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameModeUtilInterface_C>K2Node_DynamicCast_AsGame_Mode_Util_Interface_6                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_10                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameModeUtilInterface_C>K2Node_DynamicCast_AsGame_Mode_Util_Interface_7                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_11                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue_6                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameModeUtilInterface_C>K2Node_DynamicCast_AsGame_Mode_Util_Interface_8                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_12                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameModeUtilInterface_C>K2Node_DynamicCast_AsGame_Mode_Util_Interface_9                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_13                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameModeUtilInterface_C>K2Node_DynamicCast_AsGame_Mode_Util_Interface_10                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_14                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameModeUtilInterface_C>K2Node_DynamicCast_AsGame_Mode_Util_Interface_11                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_15                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue_7                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameModeUtilInterface_C>K2Node_DynamicCast_AsGame_Mode_Util_Interface_12                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_16                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameModeUtilInterface_C>K2Node_DynamicCast_AsGame_Mode_Util_Interface_13                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_17                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_7                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FToolTipInfo                K2Node_ComponentBoundEvent_InventoryItem                         (HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Familiarity                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_MaxFamiliarity                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_ComponentBoundEvent_ID                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Amount                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_8                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_9                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FBottomRightNotificationStruct>K2Node_CustomEvent_NotificationsToQueue                          (ConstParm, ReferenceParm, HasGetValueTypeHash)
// struct FBottomRightNotificationStructCallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_GetButtonIcon_Texture                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_Stop                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_Name                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_Text_1                                        (None)
// class FText                        K2Node_CustomEvent_KeyboardText                                  (None)
// class UTexture*                    K2Node_CustomEvent_Icon                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Duration                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_TriggerCallBack                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_18                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHUD*                        CallFunc_GetHUD_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_NotificationType                              (None)
// class FText                        K2Node_CustomEvent_NotificationDetails                           (None)
// class FText                        K2Node_CustomEvent_NotificationFlavor                            (None)
// float                              K2Node_CustomEvent_NotificationTimeout                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AYourHUD_C*                  K2Node_DynamicCast_AsYour_HUD                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_19                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDHCenterNotification       K2Node_MakeStruct_DHCenterNotification                           (None)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPhotoModeSpeedChangeInProgress_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_14                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_15                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_Sound                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHUD*                        CallFunc_GetHUD_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AYourHUD_C*                  K2Node_DynamicCast_AsYour_HUD_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_20                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AHUD*                        CallFunc_GetHUD_ReturnValue_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AYourHUD_C*                  K2Node_DynamicCast_AsYour_HUD_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_21                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_Cutscene_SkipType  K2Node_CustomEvent_SkipType                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_EquipmentMenuPawn_C*     K2Node_CustomEvent_Pawn                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_ShellName                                           (None)
// class FText                        K2Node_Event_ShellTagline                                        (None)
// bool                               K2Node_CustomEvent_Instant_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_NoHideNotifies                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_Instant                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputActionEvent_Key_2                                    (HasGetValueTypeHash)
// TArray<class AStartPortal_C*>      CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsUIMode                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDialogMode                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputActionEvent_Key_3                                    (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_4                                    (HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_2                       (NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_UIMode                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// struct FKey                        K2Node_InputActionEvent_Key_5                                    (HasGetValueTypeHash)
// class AGameplayPC_C*               K2Node_CustomEvent_PlayerToChange                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// class FString                      CallFunc_GetDisplayName_ReturnValue_1                            (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class AZero_Base_C*                K2Node_DynamicCast_As0_Base_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_22                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_InventorySlot_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_InventorySlot                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_ScrollSlot                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// struct FKey                        K2Node_InputActionEvent_Key_6                                    (HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_Text                                          (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor)
// bool                               K2Node_CustomEvent_SetThirdPerson                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_SenderName                                    (None)
// class FText                        K2Node_CustomEvent_SenderText                                    (None)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue_8                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayGM_C*               K2Node_DynamicCast_AsGameplay_GM                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_23                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_TextToSend                                    (None)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_7                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_7                                    (HasGetValueTypeHash)
// bool                               CallFunc_LoadLevelInstanceBySoftObjectPtr_bOutSuccess            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ULevelStreamingDynamic*      CallFunc_LoadLevelInstanceBySoftObjectPtr_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_8                                    (HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_8                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_9                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_10                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_11                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_12                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_13                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_14                            (ZeroConstructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_15                            (ZeroConstructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_24                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_16                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLoadingScreenActive_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class ASkyLight*>           CallFunc_GetAllActorsOfClass_OutActors_1                         (ReferenceParm, HasGetValueTypeHash)
// class ASkyLight*                   CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ActorHasTag_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_16                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_25                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetPhotoModeEnabled_Enabled                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Aboss_weapon_for_player_bp_C*CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_1                             (IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                K2Node_DynamicCast_As0_Base_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_26                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Aboss_weapon_for_player_bp_C*CallFunc_FinishSpawningActor_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Visibility                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AZero_Base_C*                K2Node_DynamicCast_As0_Base_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_27                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetCameraLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetCameraRotation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_2                             (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PhotoModePawn_C*         CallFunc_FinishSpawningActor_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_CurrentCheckpoint                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  K2Node_CustomEvent_CurrentCheckpointTransform                    (IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_CurrentMainLevel                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_CurrentSubLevel                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABarbarous_C*                K2Node_DynamicCast_AsBarbarous_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_28                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_CloseSound                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_Cutscene_SkipType  K2Node_CustomEvent_StopType                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base_4                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base_5                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetControlledPawnLocation_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base_6                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USword_AnimBP2v3_C*          K2Node_DynamicCast_AsSword_Anim_BP2v_3_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_29                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadLevelInstanceBySoftObjectPtr_bOutSuccess_1          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ULevelStreamingDynamic*      CallFunc_LoadLevelInstanceBySoftObjectPtr_ReturnValue_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABarbarous_C*                CallFunc_GetCharacterAsBarbarous_AsBarbarous_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                K2Node_DynamicCast_As0_Base_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_30                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABarbarous_C*                CallFunc_GetCharacterAsBarbarous_AsBarbarous_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetLostMoneyName_MoneyName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetMoneyName_MoneyName                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldLooseMoneyOnDeath_bShould                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetNamedPCInt_Value                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base_7                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetCurrentPersistentLevelName_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base_8                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABarbarous_C*                K2Node_DynamicCast_AsBarbarous_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_31                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_PlayAnimMontage_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_Killer                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base_9                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABarbarous_C*                K2Node_DynamicCast_AsBarbarous_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_32                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLastChanceAvailable_bAvailable                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         K2Node_DynamicCast_AsGame_Info_Instance                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_33                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetControlledPawnLocation_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGamePlayPlayerState_C*      K2Node_DynamicCast_AsGame_Play_Player_State                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_34                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               K2Node_DynamicCast_AsGameplay_PC                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_35                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_CustomEvent_DamageCauser                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_ImpactVector                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DidCharacterDieInTutorialLevel__ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor)
// class APawn*                       K2Node_Event_PossessedPawn                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                K2Node_DynamicCast_As0_Base_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_36                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EComboTypes             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EComboTypes             Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EComboTypes             Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue_9                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayGM_C*               K2Node_DynamicCast_AsGameplay_GM_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_37                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                K2Node_DynamicCast_As0_Base_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_38                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EComboTypes             Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AStartPortal_C*              CallFunc_Array_Get_Item_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EComboTypes             Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bDampenAudio                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         K2Node_DynamicCast_AsGame_Info_Instance_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_39                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_CustomEvent_SaveSlotName                                  (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// struct FPlayerInfo                 K2Node_CustomEvent_PlayerSettingsInfo                            (HasGetValueTypeHash)
// bool                               CallFunc_IsLocalController_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EComboTypes             Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EComboTypes             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_IsTimerActiveHandle_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_12                          (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_3                       (NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_SetMaxHP                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_13                          (ZeroConstructor, NoDestructor)
// struct FVector                     K2Node_CustomEvent_Location                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_CustomEvent_SoundBaseRef_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_CustomEvent_SoundBaseRef                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::ExecuteUbergraph_GameplayPC(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_Event_Scale_1, float K2Node_Event_Scale, class AActor* K2Node_Event_Actor, const class FString& K2Node_Event_DebugLine, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue, int32 K2Node_Event_Index, const class FString& CallFunc_Conv_FloatToString_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, uint8 CallFunc_GetValidValue_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, float K2Node_Event_Opacity, const struct FStruct_ShellDyes& K2Node_Event_Dyes, const struct FStruct_ShellsDyes_LockState& K2Node_Event_LockState, class UUI_PhotoModeInputHelper_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsLevelLoaded_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Conv_TransformToString_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, const class FString& CallFunc_Conv_NameToString_ReturnValue_2, enum class EEndPlayReason K2Node_Event_EndPlayReason, class UClass* K2Node_CustomEvent_DamageType, int32 K2Node_Event_Level, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, TScriptInterface<class IGameModeUtilInterface_C> K2Node_DynamicCast_AsGame_Mode_Util_Interface, bool K2Node_DynamicCast_bSuccess, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_1, TScriptInterface<class IGameModeUtilInterface_C> K2Node_DynamicCast_AsGame_Mode_Util_Interface_1, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_Event_Block, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class FName K2Node_Event_ID_2, TArray<class AActor*>& CallFunc_GetAllActorsWithTag_OutActors, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_1, bool CallFunc_Not_PreBool_ReturnValue_3, int32 K2Node_Event_NewCounter, class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous, int32 K2Node_Event_Count, class FName K2Node_Event_ItemName_2, int32 K2Node_Event_Index_1, bool K2Node_Event_IsChangingWeaponMode_1, bool CallFunc_Array_RemoveItem_ReturnValue, class FName K2Node_Event_ItemName_1, bool K2Node_CustomEvent_NewHidden, int32 CallFunc_Array_AddUnique_ReturnValue_1, class APawn* CallFunc_K2_GetPawn_ReturnValue, class ABarbarous_C* K2Node_DynamicCast_AsBarbarous, bool K2Node_DynamicCast_bSuccess_2, int32 K2Node_Event_ArmorID, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, int32 K2Node_Event_ID_1, uint8 CallFunc_GetValidValue_ReturnValue_1, class FName CallFunc_GetWeaponNameFromID_WeaponName, bool CallFunc_Array_RemoveItem_ReturnValue_1, class FText CallFunc_GetShellTagline_ShellTagline, class FText CallFunc_GetShellName_ShellName, int32 K2Node_Event_ID, class FName CallFunc_GetWeaponNameFromID_WeaponName_1, int32 K2Node_Event_WeaponID, int32 K2Node_Event_Slot, bool K2Node_Event_IsChangingWeaponMode, int32 CallFunc_Array_AddUnique_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_4, class FName CallFunc_GetWeaponNameFromID_WeaponName_2, enum class EComboTypes CallFunc_GetCharacterWeaponEnumFromID_Weapon, const struct FInventoryItem& CallFunc_GetItemFromID_Item, bool CallFunc_SetInventoryItem_Success, const struct FToolTipInfo& K2Node_CustomEvent_ToolTipInfo, class FName K2Node_CustomEvent_ItemID, bool K2Node_CustomEvent_UseNotify, bool CallFunc_IsValid_ReturnValue_5, int32 K2Node_Event_Inventory_Slot_1, int32 K2Node_Event_Container_Slot_1, int32 K2Node_Event_From_Inventory_Slot_7, int32 K2Node_Event_From_Inventory_Slot_6, int32 K2Node_Event_To_Slot_2, int32 K2Node_Event_Amount_3, int32 K2Node_Event_From_Inventory_Slot_5, int32 K2Node_Event_To_Inventory_Slot_5, int32 K2Node_Event_Amount_2, int32 K2Node_Event_From_Container_Slot_4, int32 K2Node_Event_To_Slot_1, int32 K2Node_Event_Amount_1, int32 K2Node_Event_From_Container_Slot_3, int32 K2Node_Event_To_Container_Slot_3, int32 K2Node_Event_Amount, int32 K2Node_Event_From_Inventory_Slot_4, int32 K2Node_Event_To_Container_Slot_2, int32 K2Node_Event_From_Container_Slot_2, int32 K2Node_Event_To_Inventory_Slot_4, int32 K2Node_Event_From_Container_Slot_1, int32 K2Node_Event_To_Container_Slot_1, int32 K2Node_Event_From_Inventory_Slot_3, int32 K2Node_Event_To_Inventory_Slot_3, int32 K2Node_Event_From_Inventory_Slot_2, int32 K2Node_Event_To_Container_Slot, int32 K2Node_Event_From_Container_Slot, int32 K2Node_Event_To_Inventory_Slot_2, enum class Enum_EquipmentMenuType K2Node_CustomEvent_Type, int32 K2Node_Event_From_Inventory_Slot_1, int32 K2Node_Event_To_Inventory_Slot_1, int32 K2Node_Event_From_Inventory_Slot, int32 K2Node_Event_To_Inventory_Slot, bool K2Node_Event_IsMouseOverUI, int32 K2Node_Event_Container_Slot, int32 K2Node_Event_Inventory_Slot, class FName K2Node_Event_ItemName, int32 K2Node_Event_From_Hotbar_Slot, int32 K2Node_Event_From_Slot, int32 K2Node_Event_To_Slot, bool K2Node_Event_IsDraggedFromInventory, bool K2Node_Event_IsDraggedFromHotbar, bool CallFunc_EqualEqual_ByteByte_ReturnValue, float K2Node_Event_DeltaSeconds, class UGameplayChat_C* CallFunc_Create_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool K2Node_Event_bShouldRestorePlayerTransformOnLoad, bool CallFunc_Not_PreBool_ReturnValue_5, bool CallFunc_Not_PreBool_ReturnValue_6, bool CallFunc_Not_PreBool_ReturnValue_7, bool CallFunc_BooleanAND_ReturnValue_2, bool K2Node_Event_Closed, bool CallFunc_BooleanAND_ReturnValue_3, const struct FKey& Temp_struct_Variable, const struct FKey& K2Node_InputActionEvent_Key, enum class Enum_MainMenu_State K2Node_Event_Menu_State, const struct FKey& K2Node_InputActionEvent_Key_1, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_BooleanOR_ReturnValue_2, class UThrowCrosshairs_C* CallFunc_Create_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, int32 CallFunc_ReturnFirstEmptySlot_FirstEmptySlot, int32 CallFunc_Clamp_ReturnValue, enum class EItemType CallFunc_GetNextThrownItem_Type, const struct FInventoryItem& CallFunc_GetNextThrownItem_InventoryItem, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class USword_AnimBP2v3_C* K2Node_DynamicCast_AsSword_Anim_BP2v_3, bool K2Node_DynamicCast_bSuccess_4, class AZero_Base_C* K2Node_DynamicCast_As0_Base_1, bool K2Node_DynamicCast_bSuccess_5, bool CallFunc_GetArbNameInChangedSetPure_bIsInSet, bool CallFunc_Not_PreBool_ReturnValue_8, bool CallFunc_GetArbNameInChangedSetPure_bIsInSet_1, bool CallFunc_GetArbNameInChangedSetPure_bIsInSet_2, bool CallFunc_Not_PreBool_ReturnValue_9, bool CallFunc_Not_PreBool_ReturnValue_10, bool CallFunc_GetArbNameInChangedSetPure_bIsInSet_3, bool CallFunc_GetArbNameInChangedSetPure_bIsInSet_4, bool CallFunc_Not_PreBool_ReturnValue_11, bool CallFunc_Not_PreBool_ReturnValue_12, bool CallFunc_GetArbNameInChangedSetPure_bIsInSet_5, bool CallFunc_Not_PreBool_ReturnValue_13, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_2, TScriptInterface<class IGameModeUtilInterface_C> K2Node_DynamicCast_AsGame_Mode_Util_Interface_2, bool K2Node_DynamicCast_bSuccess_6, bool CallFunc_BooleanAND_ReturnValue_4, TScriptInterface<class IGameModeUtilInterface_C> K2Node_DynamicCast_AsGame_Mode_Util_Interface_3, bool K2Node_DynamicCast_bSuccess_7, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_3, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_4, TScriptInterface<class IGameModeUtilInterface_C> K2Node_DynamicCast_AsGame_Mode_Util_Interface_4, bool K2Node_DynamicCast_bSuccess_8, TScriptInterface<class IGameModeUtilInterface_C> K2Node_DynamicCast_AsGame_Mode_Util_Interface_5, bool K2Node_DynamicCast_bSuccess_9, TScriptInterface<class IGameModeUtilInterface_C> K2Node_DynamicCast_AsGame_Mode_Util_Interface_6, bool K2Node_DynamicCast_bSuccess_10, TScriptInterface<class IGameModeUtilInterface_C> K2Node_DynamicCast_AsGame_Mode_Util_Interface_7, bool K2Node_DynamicCast_bSuccess_11, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_5, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_6, TScriptInterface<class IGameModeUtilInterface_C> K2Node_DynamicCast_AsGame_Mode_Util_Interface_8, bool K2Node_DynamicCast_bSuccess_12, TScriptInterface<class IGameModeUtilInterface_C> K2Node_DynamicCast_AsGame_Mode_Util_Interface_9, bool K2Node_DynamicCast_bSuccess_13, TScriptInterface<class IGameModeUtilInterface_C> K2Node_DynamicCast_AsGame_Mode_Util_Interface_10, bool K2Node_DynamicCast_bSuccess_14, TScriptInterface<class IGameModeUtilInterface_C> K2Node_DynamicCast_AsGame_Mode_Util_Interface_11, bool K2Node_DynamicCast_bSuccess_15, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_7, TScriptInterface<class IGameModeUtilInterface_C> K2Node_DynamicCast_AsGame_Mode_Util_Interface_12, bool K2Node_DynamicCast_bSuccess_16, TScriptInterface<class IGameModeUtilInterface_C> K2Node_DynamicCast_AsGame_Mode_Util_Interface_13, bool K2Node_DynamicCast_bSuccess_17, bool CallFunc_BooleanAND_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_6, bool CallFunc_BooleanAND_ReturnValue_7, const struct FToolTipInfo& K2Node_ComponentBoundEvent_InventoryItem, int32 K2Node_ComponentBoundEvent_Familiarity, int32 K2Node_ComponentBoundEvent_MaxFamiliarity, class FName K2Node_ComponentBoundEvent_ID, int32 K2Node_ComponentBoundEvent_Amount, bool CallFunc_BooleanAND_ReturnValue_8, bool CallFunc_BooleanAND_ReturnValue_9, TArray<struct FBottomRightNotificationStruct>& K2Node_CustomEvent_NotificationsToQueue, const struct FBottomRightNotificationStruct& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, class UTexture2D* CallFunc_GetButtonIcon_Texture, bool CallFunc_Greater_IntInt_ReturnValue, bool K2Node_CustomEvent_Stop, class FName K2Node_CustomEvent_Name, class FText K2Node_CustomEvent_Text_1, class FText K2Node_CustomEvent_KeyboardText, class UTexture* K2Node_CustomEvent_Icon, float K2Node_CustomEvent_Duration, bool K2Node_CustomEvent_TriggerCallBack, bool CallFunc_IsValid_ReturnValue_7, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess_18, float CallFunc_Divide_FloatFloat_ReturnValue, class AHUD* CallFunc_GetHUD_ReturnValue, class FText K2Node_CustomEvent_NotificationType, class FText K2Node_CustomEvent_NotificationDetails, class FText K2Node_CustomEvent_NotificationFlavor, float K2Node_CustomEvent_NotificationTimeout, class AYourHUD_C* K2Node_DynamicCast_AsYour_HUD, bool K2Node_DynamicCast_bSuccess_19, const struct FDHCenterNotification& K2Node_MakeStruct_DHCenterNotification, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_IsPhotoModeSpeedChangeInProgress_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_14, bool CallFunc_Not_PreBool_ReturnValue_15, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_CustomEvent_Sound, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, class AHUD* CallFunc_GetHUD_ReturnValue_1, class AYourHUD_C* K2Node_DynamicCast_AsYour_HUD_1, bool K2Node_DynamicCast_bSuccess_20, class AHUD* CallFunc_GetHUD_ReturnValue_2, class AYourHUD_C* K2Node_DynamicCast_AsYour_HUD_2, bool K2Node_DynamicCast_bSuccess_21, enum class Enum_Cutscene_SkipType K2Node_CustomEvent_SkipType, class ABP_EquipmentMenuPawn_C* K2Node_CustomEvent_Pawn, class FText K2Node_Event_ShellName, class FText K2Node_Event_ShellTagline, bool K2Node_CustomEvent_Instant_1, bool K2Node_CustomEvent_NoHideNotifies, bool K2Node_CustomEvent_Instant, const struct FKey& K2Node_InputActionEvent_Key_2, TArray<class AStartPortal_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue_2, bool K2Node_Event_IsUIMode, bool K2Node_Event_IsDialogMode, const struct FKey& K2Node_InputActionEvent_Key_3, const struct FKey& K2Node_InputActionEvent_Key_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_2, bool K2Node_CustomEvent_UIMode, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, const struct FKey& K2Node_InputActionEvent_Key_5, class AGameplayPC_C* K2Node_CustomEvent_PlayerToChange, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, const class FString& CallFunc_GetDisplayName_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class AZero_Base_C* K2Node_DynamicCast_As0_Base_2, bool K2Node_DynamicCast_bSuccess_22, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 K2Node_CustomEvent_InventorySlot_1, int32 K2Node_CustomEvent_InventorySlot, int32 K2Node_CustomEvent_ScrollSlot, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, const struct FKey& K2Node_InputActionEvent_Key_6, class FText K2Node_CustomEvent_Text, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, bool K2Node_CustomEvent_SetThirdPerson, int32 Temp_int_Array_Index_Variable, class FText K2Node_CustomEvent_SenderName, class FText K2Node_CustomEvent_SenderText, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_8, class AGameplayGM_C* K2Node_DynamicCast_AsGameplay_GM, bool K2Node_DynamicCast_bSuccess_23, int32 CallFunc_Array_Length_ReturnValue_3, class FText K2Node_CustomEvent_TextToSend, const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FKey& K2Node_InputActionEvent_Key_7, bool CallFunc_LoadLevelInstanceBySoftObjectPtr_bOutSuccess, class ULevelStreamingDynamic* CallFunc_LoadLevelInstanceBySoftObjectPtr_ReturnValue, const struct FKey& K2Node_InputActionEvent_Key_8, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, const class FString& CallFunc_Concat_StrStr_ReturnValue_9, const class FString& CallFunc_Concat_StrStr_ReturnValue_10, bool CallFunc_BooleanOR_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_11, const class FString& CallFunc_Concat_StrStr_ReturnValue_12, const class FString& CallFunc_Concat_StrStr_ReturnValue_13, const class FString& CallFunc_Concat_StrStr_ReturnValue_14, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_15, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess_24, const class FString& CallFunc_Concat_StrStr_ReturnValue_16, bool CallFunc_IsLoadingScreenActive_ReturnValue, TArray<class ASkyLight*>& CallFunc_GetAllActorsOfClass_OutActors_1, class ASkyLight* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_16, int32 Temp_int_Array_Index_Variable_1, class AActor* CallFunc_Array_Get_Item_2, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_1, bool K2Node_DynamicCast_bSuccess_25, bool CallFunc_GetPhotoModeEnabled_Enabled, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class Aboss_weapon_for_player_bp_C* CallFunc_FinishSpawningActor_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, class APawn* CallFunc_K2_GetPawn_ReturnValue_3, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, class AZero_Base_C* K2Node_DynamicCast_As0_Base_3, bool K2Node_DynamicCast_bSuccess_26, class Aboss_weapon_for_player_bp_C* CallFunc_FinishSpawningActor_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool K2Node_CustomEvent_Visibility, class APawn* CallFunc_K2_GetPawn_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_8, class AZero_Base_C* K2Node_DynamicCast_As0_Base_4, bool K2Node_DynamicCast_bSuccess_27, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, const struct FVector& CallFunc_GetCameraLocation_ReturnValue, const struct FRotator& CallFunc_GetCameraRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue_2, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2, class ABP_PhotoModePawn_C* CallFunc_FinishSpawningActor_ReturnValue_2, class FName K2Node_CustomEvent_CurrentCheckpoint, const struct FTransform& K2Node_CustomEvent_CurrentCheckpointTransform, class FName K2Node_CustomEvent_CurrentMainLevel, class FName K2Node_CustomEvent_CurrentSubLevel, class ABarbarous_C* K2Node_DynamicCast_AsBarbarous_1, bool K2Node_DynamicCast_bSuccess_28, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_2, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_3, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool K2Node_CustomEvent_CloseSound, enum class Enum_Cutscene_SkipType K2Node_CustomEvent_StopType, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_4, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_5, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_1, const struct FVector& CallFunc_GetControlledPawnLocation_ReturnValue, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_6, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class USword_AnimBP2v3_C* K2Node_DynamicCast_AsSword_Anim_BP2v_3_1, bool K2Node_DynamicCast_bSuccess_29, bool CallFunc_LoadLevelInstanceBySoftObjectPtr_bOutSuccess_1, class ULevelStreamingDynamic* CallFunc_LoadLevelInstanceBySoftObjectPtr_ReturnValue_1, class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous_1, class APawn* CallFunc_K2_GetPawn_ReturnValue_5, class AZero_Base_C* K2Node_DynamicCast_As0_Base_5, bool K2Node_DynamicCast_bSuccess_30, class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous_2, class FName CallFunc_GetLostMoneyName_MoneyName, class FName CallFunc_GetMoneyName_MoneyName, bool CallFunc_ShouldLooseMoneyOnDeath_bShould, int32 CallFunc_GetNamedPCInt_Value, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_7, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class FName CallFunc_GetCurrentPersistentLevelName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_8, bool CallFunc_BooleanOR_ReturnValue_4, class ABarbarous_C* K2Node_DynamicCast_AsBarbarous_2, bool K2Node_DynamicCast_bSuccess_31, float CallFunc_PlayAnimMontage_ReturnValue, class AActor* K2Node_CustomEvent_Killer, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_9, class ABarbarous_C* K2Node_DynamicCast_AsBarbarous_3, bool K2Node_DynamicCast_bSuccess_32, bool CallFunc_IsLastChanceAvailable_bAvailable, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2, class UGameInfoInstance_C* K2Node_DynamicCast_AsGame_Info_Instance, bool K2Node_DynamicCast_bSuccess_33, const struct FVector& CallFunc_GetControlledPawnLocation_ReturnValue_1, class AGamePlayPlayerState_C* K2Node_DynamicCast_AsGame_Play_Player_State, bool K2Node_DynamicCast_bSuccess_34, int32 Temp_int_Array_Index_Variable_2, class APlayerController* CallFunc_Array_Get_Item_3, class AGameplayPC_C* K2Node_DynamicCast_AsGameplay_PC, bool K2Node_DynamicCast_bSuccess_35, class AActor* K2Node_CustomEvent_DamageCauser, const struct FVector& K2Node_CustomEvent_ImpactVector, bool CallFunc_DidCharacterDieInTutorialLevel__ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, class APawn* K2Node_Event_PossessedPawn, class AZero_Base_C* K2Node_DynamicCast_As0_Base_6, bool K2Node_DynamicCast_bSuccess_36, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3, enum class EComboTypes Temp_byte_Variable, enum class EComboTypes Temp_byte_Variable_1, int32 Temp_int_Loop_Counter_Variable_3, bool CallFunc_Less_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_4, enum class EComboTypes Temp_byte_Variable_2, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_9, class AGameplayGM_C* K2Node_DynamicCast_AsGameplay_GM_1, bool K2Node_DynamicCast_bSuccess_37, class APawn* CallFunc_K2_GetPawn_ReturnValue_6, class AZero_Base_C* K2Node_DynamicCast_As0_Base_7, bool K2Node_DynamicCast_bSuccess_38, enum class EComboTypes Temp_byte_Variable_3, int32 Temp_int_Array_Index_Variable_3, class AStartPortal_C* CallFunc_Array_Get_Item_4, enum class EComboTypes Temp_byte_Variable_4, bool K2Node_CustomEvent_bDampenAudio, int32 Temp_int_Variable, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_3, class UGameInfoInstance_C* K2Node_DynamicCast_AsGame_Info_Instance_1, bool K2Node_DynamicCast_bSuccess_39, const class FString& K2Node_CustomEvent_SaveSlotName, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const struct FPlayerInfo& K2Node_CustomEvent_PlayerSettingsInfo, bool CallFunc_IsLocalController_ReturnValue, enum class EComboTypes Temp_byte_Variable_5, int32 Temp_int_Variable_1, enum class EComboTypes K2Node_Select_Default, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_3, int32 K2Node_Event_SetMaxHP, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, const struct FVector& K2Node_CustomEvent_Location, class USoundBase* K2Node_CustomEvent_SoundBaseRef_1, class USoundBase* K2Node_CustomEvent_SoundBaseRef, float CallFunc_Conv_IntToFloat_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_5, bool CallFunc_GreaterEqual_IntInt_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "ExecuteUbergraph_GameplayPC");

	Params::AGameplayPC_C_ExecuteUbergraph_GameplayPC_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_Scale_1 = K2Node_Event_Scale_1;
	Parms.K2Node_Event_Scale = K2Node_Event_Scale;
	Parms.K2Node_Event_Actor = K2Node_Event_Actor;
	Parms.K2Node_Event_DebugLine = K2Node_Event_DebugLine;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.K2Node_Event_Index = K2Node_Event_Index;
	Parms.CallFunc_Conv_FloatToString_ReturnValue = CallFunc_Conv_FloatToString_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.K2Node_Event_Opacity = K2Node_Event_Opacity;
	Parms.K2Node_Event_Dyes = K2Node_Event_Dyes;
	Parms.K2Node_Event_LockState = K2Node_Event_LockState;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_IsLevelLoaded_ReturnValue = CallFunc_IsLevelLoaded_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Conv_TransformToString_ReturnValue = CallFunc_Conv_TransformToString_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue_1 = CallFunc_Conv_NameToString_ReturnValue_1;
	Parms.CallFunc_Conv_NameToString_ReturnValue_2 = CallFunc_Conv_NameToString_ReturnValue_2;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.K2Node_CustomEvent_DamageType = K2Node_CustomEvent_DamageType;
	Parms.K2Node_Event_Level = K2Node_Event_Level;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_1 = CallFunc_EqualEqual_ClassClass_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_2 = CallFunc_EqualEqual_ClassClass_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsGame_Mode_Util_Interface = K2Node_DynamicCast_AsGame_Mode_Util_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetGameMode_ReturnValue_1 = CallFunc_GetGameMode_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsGame_Mode_Util_Interface_1 = K2Node_DynamicCast_AsGame_Mode_Util_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_Event_Block = K2Node_Event_Block;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_Event_ID_2 = K2Node_Event_ID_2;
	Parms.CallFunc_GetAllActorsWithTag_OutActors = CallFunc_GetAllActorsWithTag_OutActors;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base = CallFunc_GetCharacterAs0_Base_As0_Base;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base_1 = CallFunc_GetCharacterAs0_Base_As0_Base_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.K2Node_Event_NewCounter = K2Node_Event_NewCounter;
	Parms.CallFunc_GetCharacterAsBarbarous_AsBarbarous = CallFunc_GetCharacterAsBarbarous_AsBarbarous;
	Parms.K2Node_Event_Count = K2Node_Event_Count;
	Parms.K2Node_Event_ItemName_2 = K2Node_Event_ItemName_2;
	Parms.K2Node_Event_Index_1 = K2Node_Event_Index_1;
	Parms.K2Node_Event_IsChangingWeaponMode_1 = K2Node_Event_IsChangingWeaponMode_1;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.K2Node_Event_ItemName_1 = K2Node_Event_ItemName_1;
	Parms.K2Node_CustomEvent_NewHidden = K2Node_CustomEvent_NewHidden;
	Parms.CallFunc_Array_AddUnique_ReturnValue_1 = CallFunc_Array_AddUnique_ReturnValue_1;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsBarbarous = K2Node_DynamicCast_AsBarbarous;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_Event_ArmorID = K2Node_Event_ArmorID;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_1 = CallFunc_Conv_IntToByte_ReturnValue_1;
	Parms.K2Node_Event_ID_1 = K2Node_Event_ID_1;
	Parms.CallFunc_GetValidValue_ReturnValue_1 = CallFunc_GetValidValue_ReturnValue_1;
	Parms.CallFunc_GetWeaponNameFromID_WeaponName = CallFunc_GetWeaponNameFromID_WeaponName;
	Parms.CallFunc_Array_RemoveItem_ReturnValue_1 = CallFunc_Array_RemoveItem_ReturnValue_1;
	Parms.CallFunc_GetShellTagline_ShellTagline = CallFunc_GetShellTagline_ShellTagline;
	Parms.CallFunc_GetShellName_ShellName = CallFunc_GetShellName_ShellName;
	Parms.K2Node_Event_ID = K2Node_Event_ID;
	Parms.CallFunc_GetWeaponNameFromID_WeaponName_1 = CallFunc_GetWeaponNameFromID_WeaponName_1;
	Parms.K2Node_Event_WeaponID = K2Node_Event_WeaponID;
	Parms.K2Node_Event_Slot = K2Node_Event_Slot;
	Parms.K2Node_Event_IsChangingWeaponMode = K2Node_Event_IsChangingWeaponMode;
	Parms.CallFunc_Array_AddUnique_ReturnValue_2 = CallFunc_Array_AddUnique_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_4 = CallFunc_Not_PreBool_ReturnValue_4;
	Parms.CallFunc_GetWeaponNameFromID_WeaponName_2 = CallFunc_GetWeaponNameFromID_WeaponName_2;
	Parms.CallFunc_GetCharacterWeaponEnumFromID_Weapon = CallFunc_GetCharacterWeaponEnumFromID_Weapon;
	Parms.CallFunc_GetItemFromID_Item = CallFunc_GetItemFromID_Item;
	Parms.CallFunc_SetInventoryItem_Success = CallFunc_SetInventoryItem_Success;
	Parms.K2Node_CustomEvent_ToolTipInfo = K2Node_CustomEvent_ToolTipInfo;
	Parms.K2Node_CustomEvent_ItemID = K2Node_CustomEvent_ItemID;
	Parms.K2Node_CustomEvent_UseNotify = K2Node_CustomEvent_UseNotify;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.K2Node_Event_Inventory_Slot_1 = K2Node_Event_Inventory_Slot_1;
	Parms.K2Node_Event_Container_Slot_1 = K2Node_Event_Container_Slot_1;
	Parms.K2Node_Event_From_Inventory_Slot_7 = K2Node_Event_From_Inventory_Slot_7;
	Parms.K2Node_Event_From_Inventory_Slot_6 = K2Node_Event_From_Inventory_Slot_6;
	Parms.K2Node_Event_To_Slot_2 = K2Node_Event_To_Slot_2;
	Parms.K2Node_Event_Amount_3 = K2Node_Event_Amount_3;
	Parms.K2Node_Event_From_Inventory_Slot_5 = K2Node_Event_From_Inventory_Slot_5;
	Parms.K2Node_Event_To_Inventory_Slot_5 = K2Node_Event_To_Inventory_Slot_5;
	Parms.K2Node_Event_Amount_2 = K2Node_Event_Amount_2;
	Parms.K2Node_Event_From_Container_Slot_4 = K2Node_Event_From_Container_Slot_4;
	Parms.K2Node_Event_To_Slot_1 = K2Node_Event_To_Slot_1;
	Parms.K2Node_Event_Amount_1 = K2Node_Event_Amount_1;
	Parms.K2Node_Event_From_Container_Slot_3 = K2Node_Event_From_Container_Slot_3;
	Parms.K2Node_Event_To_Container_Slot_3 = K2Node_Event_To_Container_Slot_3;
	Parms.K2Node_Event_Amount = K2Node_Event_Amount;
	Parms.K2Node_Event_From_Inventory_Slot_4 = K2Node_Event_From_Inventory_Slot_4;
	Parms.K2Node_Event_To_Container_Slot_2 = K2Node_Event_To_Container_Slot_2;
	Parms.K2Node_Event_From_Container_Slot_2 = K2Node_Event_From_Container_Slot_2;
	Parms.K2Node_Event_To_Inventory_Slot_4 = K2Node_Event_To_Inventory_Slot_4;
	Parms.K2Node_Event_From_Container_Slot_1 = K2Node_Event_From_Container_Slot_1;
	Parms.K2Node_Event_To_Container_Slot_1 = K2Node_Event_To_Container_Slot_1;
	Parms.K2Node_Event_From_Inventory_Slot_3 = K2Node_Event_From_Inventory_Slot_3;
	Parms.K2Node_Event_To_Inventory_Slot_3 = K2Node_Event_To_Inventory_Slot_3;
	Parms.K2Node_Event_From_Inventory_Slot_2 = K2Node_Event_From_Inventory_Slot_2;
	Parms.K2Node_Event_To_Container_Slot = K2Node_Event_To_Container_Slot;
	Parms.K2Node_Event_From_Container_Slot = K2Node_Event_From_Container_Slot;
	Parms.K2Node_Event_To_Inventory_Slot_2 = K2Node_Event_To_Inventory_Slot_2;
	Parms.K2Node_CustomEvent_Type = K2Node_CustomEvent_Type;
	Parms.K2Node_Event_From_Inventory_Slot_1 = K2Node_Event_From_Inventory_Slot_1;
	Parms.K2Node_Event_To_Inventory_Slot_1 = K2Node_Event_To_Inventory_Slot_1;
	Parms.K2Node_Event_From_Inventory_Slot = K2Node_Event_From_Inventory_Slot;
	Parms.K2Node_Event_To_Inventory_Slot = K2Node_Event_To_Inventory_Slot;
	Parms.K2Node_Event_IsMouseOverUI = K2Node_Event_IsMouseOverUI;
	Parms.K2Node_Event_Container_Slot = K2Node_Event_Container_Slot;
	Parms.K2Node_Event_Inventory_Slot = K2Node_Event_Inventory_Slot;
	Parms.K2Node_Event_ItemName = K2Node_Event_ItemName;
	Parms.K2Node_Event_From_Hotbar_Slot = K2Node_Event_From_Hotbar_Slot;
	Parms.K2Node_Event_From_Slot = K2Node_Event_From_Slot;
	Parms.K2Node_Event_To_Slot = K2Node_Event_To_Slot;
	Parms.K2Node_Event_IsDraggedFromInventory = K2Node_Event_IsDraggedFromInventory;
	Parms.K2Node_Event_IsDraggedFromHotbar = K2Node_Event_IsDraggedFromHotbar;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_Event_bShouldRestorePlayerTransformOnLoad = K2Node_Event_bShouldRestorePlayerTransformOnLoad;
	Parms.CallFunc_Not_PreBool_ReturnValue_5 = CallFunc_Not_PreBool_ReturnValue_5;
	Parms.CallFunc_Not_PreBool_ReturnValue_6 = CallFunc_Not_PreBool_ReturnValue_6;
	Parms.CallFunc_Not_PreBool_ReturnValue_7 = CallFunc_Not_PreBool_ReturnValue_7;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.K2Node_Event_Closed = K2Node_Event_Closed;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_InputActionEvent_Key = K2Node_InputActionEvent_Key;
	Parms.K2Node_Event_Menu_State = K2Node_Event_Menu_State;
	Parms.K2Node_InputActionEvent_Key_1 = K2Node_InputActionEvent_Key_1;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_Create_ReturnValue_2 = CallFunc_Create_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_ReturnFirstEmptySlot_FirstEmptySlot = CallFunc_ReturnFirstEmptySlot_FirstEmptySlot;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_GetNextThrownItem_Type = CallFunc_GetNextThrownItem_Type;
	Parms.CallFunc_GetNextThrownItem_InventoryItem = CallFunc_GetNextThrownItem_InventoryItem;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	Parms.CallFunc_K2_GetPawn_ReturnValue_1 = CallFunc_K2_GetPawn_ReturnValue_1;
	Parms.K2Node_DynamicCast_As0_Base = K2Node_DynamicCast_As0_Base;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_DynamicCast_AsSword_Anim_BP2v_3 = K2Node_DynamicCast_AsSword_Anim_BP2v_3;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.K2Node_DynamicCast_As0_Base_1 = K2Node_DynamicCast_As0_Base_1;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_GetArbNameInChangedSetPure_bIsInSet = CallFunc_GetArbNameInChangedSetPure_bIsInSet;
	Parms.CallFunc_Not_PreBool_ReturnValue_8 = CallFunc_Not_PreBool_ReturnValue_8;
	Parms.CallFunc_GetArbNameInChangedSetPure_bIsInSet_1 = CallFunc_GetArbNameInChangedSetPure_bIsInSet_1;
	Parms.CallFunc_GetArbNameInChangedSetPure_bIsInSet_2 = CallFunc_GetArbNameInChangedSetPure_bIsInSet_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_9 = CallFunc_Not_PreBool_ReturnValue_9;
	Parms.CallFunc_Not_PreBool_ReturnValue_10 = CallFunc_Not_PreBool_ReturnValue_10;
	Parms.CallFunc_GetArbNameInChangedSetPure_bIsInSet_3 = CallFunc_GetArbNameInChangedSetPure_bIsInSet_3;
	Parms.CallFunc_GetArbNameInChangedSetPure_bIsInSet_4 = CallFunc_GetArbNameInChangedSetPure_bIsInSet_4;
	Parms.CallFunc_Not_PreBool_ReturnValue_11 = CallFunc_Not_PreBool_ReturnValue_11;
	Parms.CallFunc_Not_PreBool_ReturnValue_12 = CallFunc_Not_PreBool_ReturnValue_12;
	Parms.CallFunc_GetArbNameInChangedSetPure_bIsInSet_5 = CallFunc_GetArbNameInChangedSetPure_bIsInSet_5;
	Parms.CallFunc_Not_PreBool_ReturnValue_13 = CallFunc_Not_PreBool_ReturnValue_13;
	Parms.CallFunc_GetGameMode_ReturnValue_2 = CallFunc_GetGameMode_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsGame_Mode_Util_Interface_2 = K2Node_DynamicCast_AsGame_Mode_Util_Interface_2;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_BooleanAND_ReturnValue_4 = CallFunc_BooleanAND_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsGame_Mode_Util_Interface_3 = K2Node_DynamicCast_AsGame_Mode_Util_Interface_3;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.CallFunc_GetGameMode_ReturnValue_3 = CallFunc_GetGameMode_ReturnValue_3;
	Parms.CallFunc_GetGameMode_ReturnValue_4 = CallFunc_GetGameMode_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsGame_Mode_Util_Interface_4 = K2Node_DynamicCast_AsGame_Mode_Util_Interface_4;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;
	Parms.K2Node_DynamicCast_AsGame_Mode_Util_Interface_5 = K2Node_DynamicCast_AsGame_Mode_Util_Interface_5;
	Parms.K2Node_DynamicCast_bSuccess_9 = K2Node_DynamicCast_bSuccess_9;
	Parms.K2Node_DynamicCast_AsGame_Mode_Util_Interface_6 = K2Node_DynamicCast_AsGame_Mode_Util_Interface_6;
	Parms.K2Node_DynamicCast_bSuccess_10 = K2Node_DynamicCast_bSuccess_10;
	Parms.K2Node_DynamicCast_AsGame_Mode_Util_Interface_7 = K2Node_DynamicCast_AsGame_Mode_Util_Interface_7;
	Parms.K2Node_DynamicCast_bSuccess_11 = K2Node_DynamicCast_bSuccess_11;
	Parms.CallFunc_GetGameMode_ReturnValue_5 = CallFunc_GetGameMode_ReturnValue_5;
	Parms.CallFunc_GetGameMode_ReturnValue_6 = CallFunc_GetGameMode_ReturnValue_6;
	Parms.K2Node_DynamicCast_AsGame_Mode_Util_Interface_8 = K2Node_DynamicCast_AsGame_Mode_Util_Interface_8;
	Parms.K2Node_DynamicCast_bSuccess_12 = K2Node_DynamicCast_bSuccess_12;
	Parms.K2Node_DynamicCast_AsGame_Mode_Util_Interface_9 = K2Node_DynamicCast_AsGame_Mode_Util_Interface_9;
	Parms.K2Node_DynamicCast_bSuccess_13 = K2Node_DynamicCast_bSuccess_13;
	Parms.K2Node_DynamicCast_AsGame_Mode_Util_Interface_10 = K2Node_DynamicCast_AsGame_Mode_Util_Interface_10;
	Parms.K2Node_DynamicCast_bSuccess_14 = K2Node_DynamicCast_bSuccess_14;
	Parms.K2Node_DynamicCast_AsGame_Mode_Util_Interface_11 = K2Node_DynamicCast_AsGame_Mode_Util_Interface_11;
	Parms.K2Node_DynamicCast_bSuccess_15 = K2Node_DynamicCast_bSuccess_15;
	Parms.CallFunc_GetGameMode_ReturnValue_7 = CallFunc_GetGameMode_ReturnValue_7;
	Parms.K2Node_DynamicCast_AsGame_Mode_Util_Interface_12 = K2Node_DynamicCast_AsGame_Mode_Util_Interface_12;
	Parms.K2Node_DynamicCast_bSuccess_16 = K2Node_DynamicCast_bSuccess_16;
	Parms.K2Node_DynamicCast_AsGame_Mode_Util_Interface_13 = K2Node_DynamicCast_AsGame_Mode_Util_Interface_13;
	Parms.K2Node_DynamicCast_bSuccess_17 = K2Node_DynamicCast_bSuccess_17;
	Parms.CallFunc_BooleanAND_ReturnValue_5 = CallFunc_BooleanAND_ReturnValue_5;
	Parms.CallFunc_BooleanAND_ReturnValue_6 = CallFunc_BooleanAND_ReturnValue_6;
	Parms.CallFunc_BooleanAND_ReturnValue_7 = CallFunc_BooleanAND_ReturnValue_7;
	Parms.K2Node_ComponentBoundEvent_InventoryItem = K2Node_ComponentBoundEvent_InventoryItem;
	Parms.K2Node_ComponentBoundEvent_Familiarity = K2Node_ComponentBoundEvent_Familiarity;
	Parms.K2Node_ComponentBoundEvent_MaxFamiliarity = K2Node_ComponentBoundEvent_MaxFamiliarity;
	Parms.K2Node_ComponentBoundEvent_ID = K2Node_ComponentBoundEvent_ID;
	Parms.K2Node_ComponentBoundEvent_Amount = K2Node_ComponentBoundEvent_Amount;
	Parms.CallFunc_BooleanAND_ReturnValue_8 = CallFunc_BooleanAND_ReturnValue_8;
	Parms.CallFunc_BooleanAND_ReturnValue_9 = CallFunc_BooleanAND_ReturnValue_9;
	Parms.K2Node_CustomEvent_NotificationsToQueue = K2Node_CustomEvent_NotificationsToQueue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_GetButtonIcon_Texture = CallFunc_GetButtonIcon_Texture;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_CustomEvent_Stop = K2Node_CustomEvent_Stop;
	Parms.K2Node_CustomEvent_Name = K2Node_CustomEvent_Name;
	Parms.K2Node_CustomEvent_Text_1 = K2Node_CustomEvent_Text_1;
	Parms.K2Node_CustomEvent_KeyboardText = K2Node_CustomEvent_KeyboardText;
	Parms.K2Node_CustomEvent_Icon = K2Node_CustomEvent_Icon;
	Parms.K2Node_CustomEvent_Duration = K2Node_CustomEvent_Duration;
	Parms.K2Node_CustomEvent_TriggerCallBack = K2Node_CustomEvent_TriggerCallBack;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess_18 = K2Node_DynamicCast_bSuccess_18;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_GetHUD_ReturnValue = CallFunc_GetHUD_ReturnValue;
	Parms.K2Node_CustomEvent_NotificationType = K2Node_CustomEvent_NotificationType;
	Parms.K2Node_CustomEvent_NotificationDetails = K2Node_CustomEvent_NotificationDetails;
	Parms.K2Node_CustomEvent_NotificationFlavor = K2Node_CustomEvent_NotificationFlavor;
	Parms.K2Node_CustomEvent_NotificationTimeout = K2Node_CustomEvent_NotificationTimeout;
	Parms.K2Node_DynamicCast_AsYour_HUD = K2Node_DynamicCast_AsYour_HUD;
	Parms.K2Node_DynamicCast_bSuccess_19 = K2Node_DynamicCast_bSuccess_19;
	Parms.K2Node_MakeStruct_DHCenterNotification = K2Node_MakeStruct_DHCenterNotification;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_IsPhotoModeSpeedChangeInProgress_ReturnValue = CallFunc_IsPhotoModeSpeedChangeInProgress_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_14 = CallFunc_Not_PreBool_ReturnValue_14;
	Parms.CallFunc_Not_PreBool_ReturnValue_15 = CallFunc_Not_PreBool_ReturnValue_15;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_CustomEvent_Sound = K2Node_CustomEvent_Sound;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;
	Parms.CallFunc_GetHUD_ReturnValue_1 = CallFunc_GetHUD_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsYour_HUD_1 = K2Node_DynamicCast_AsYour_HUD_1;
	Parms.K2Node_DynamicCast_bSuccess_20 = K2Node_DynamicCast_bSuccess_20;
	Parms.CallFunc_GetHUD_ReturnValue_2 = CallFunc_GetHUD_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsYour_HUD_2 = K2Node_DynamicCast_AsYour_HUD_2;
	Parms.K2Node_DynamicCast_bSuccess_21 = K2Node_DynamicCast_bSuccess_21;
	Parms.K2Node_CustomEvent_SkipType = K2Node_CustomEvent_SkipType;
	Parms.K2Node_CustomEvent_Pawn = K2Node_CustomEvent_Pawn;
	Parms.K2Node_Event_ShellName = K2Node_Event_ShellName;
	Parms.K2Node_Event_ShellTagline = K2Node_Event_ShellTagline;
	Parms.K2Node_CustomEvent_Instant_1 = K2Node_CustomEvent_Instant_1;
	Parms.K2Node_CustomEvent_NoHideNotifies = K2Node_CustomEvent_NoHideNotifies;
	Parms.K2Node_CustomEvent_Instant = K2Node_CustomEvent_Instant;
	Parms.K2Node_InputActionEvent_Key_2 = K2Node_InputActionEvent_Key_2;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.K2Node_Event_IsUIMode = K2Node_Event_IsUIMode;
	Parms.K2Node_Event_IsDialogMode = K2Node_Event_IsDialogMode;
	Parms.K2Node_InputActionEvent_Key_3 = K2Node_InputActionEvent_Key_3;
	Parms.K2Node_InputActionEvent_Key_4 = K2Node_InputActionEvent_Key_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_2 = CallFunc_K2_SetTimerDelegate_ReturnValue_2;
	Parms.K2Node_CustomEvent_UIMode = K2Node_CustomEvent_UIMode;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_InputActionEvent_Key_5 = K2Node_InputActionEvent_Key_5;
	Parms.K2Node_CustomEvent_PlayerToChange = K2Node_CustomEvent_PlayerToChange;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.CallFunc_GetDisplayName_ReturnValue_1 = CallFunc_GetDisplayName_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue_2 = CallFunc_K2_GetPawn_ReturnValue_2;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_DynamicCast_As0_Base_2 = K2Node_DynamicCast_As0_Base_2;
	Parms.K2Node_DynamicCast_bSuccess_22 = K2Node_DynamicCast_bSuccess_22;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.K2Node_CustomEvent_InventorySlot_1 = K2Node_CustomEvent_InventorySlot_1;
	Parms.K2Node_CustomEvent_InventorySlot = K2Node_CustomEvent_InventorySlot;
	Parms.K2Node_CustomEvent_ScrollSlot = K2Node_CustomEvent_ScrollSlot;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.K2Node_InputActionEvent_Key_6 = K2Node_InputActionEvent_Key_6;
	Parms.K2Node_CustomEvent_Text = K2Node_CustomEvent_Text;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.K2Node_CustomEvent_SetThirdPerson = K2Node_CustomEvent_SetThirdPerson;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_CustomEvent_SenderName = K2Node_CustomEvent_SenderName;
	Parms.K2Node_CustomEvent_SenderText = K2Node_CustomEvent_SenderText;
	Parms.CallFunc_GetGameMode_ReturnValue_8 = CallFunc_GetGameMode_ReturnValue_8;
	Parms.K2Node_DynamicCast_AsGameplay_GM = K2Node_DynamicCast_AsGameplay_GM;
	Parms.K2Node_DynamicCast_bSuccess_23 = K2Node_DynamicCast_bSuccess_23;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.K2Node_CustomEvent_TextToSend = K2Node_CustomEvent_TextToSend;
	Parms.CallFunc_Conv_BoolToString_ReturnValue = CallFunc_Conv_BoolToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_7 = CallFunc_Concat_StrStr_ReturnValue_7;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_InputActionEvent_Key_7 = K2Node_InputActionEvent_Key_7;
	Parms.CallFunc_LoadLevelInstanceBySoftObjectPtr_bOutSuccess = CallFunc_LoadLevelInstanceBySoftObjectPtr_bOutSuccess;
	Parms.CallFunc_LoadLevelInstanceBySoftObjectPtr_ReturnValue = CallFunc_LoadLevelInstanceBySoftObjectPtr_ReturnValue;
	Parms.K2Node_InputActionEvent_Key_8 = K2Node_InputActionEvent_Key_8;
	Parms.CallFunc_Concat_StrStr_ReturnValue_8 = CallFunc_Concat_StrStr_ReturnValue_8;
	Parms.CallFunc_Concat_StrStr_ReturnValue_9 = CallFunc_Concat_StrStr_ReturnValue_9;
	Parms.CallFunc_Concat_StrStr_ReturnValue_10 = CallFunc_Concat_StrStr_ReturnValue_10;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_11 = CallFunc_Concat_StrStr_ReturnValue_11;
	Parms.CallFunc_Concat_StrStr_ReturnValue_12 = CallFunc_Concat_StrStr_ReturnValue_12;
	Parms.CallFunc_Concat_StrStr_ReturnValue_13 = CallFunc_Concat_StrStr_ReturnValue_13;
	Parms.CallFunc_Concat_StrStr_ReturnValue_14 = CallFunc_Concat_StrStr_ReturnValue_14;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_15 = CallFunc_Concat_StrStr_ReturnValue_15;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess_24 = K2Node_DynamicCast_bSuccess_24;
	Parms.CallFunc_Concat_StrStr_ReturnValue_16 = CallFunc_Concat_StrStr_ReturnValue_16;
	Parms.CallFunc_IsLoadingScreenActive_ReturnValue = CallFunc_IsLoadingScreenActive_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_1 = CallFunc_GetAllActorsOfClass_OutActors_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_4 = CallFunc_Array_Length_ReturnValue_4;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_ActorHasTag_ReturnValue = CallFunc_ActorHasTag_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_16 = CallFunc_Not_PreBool_ReturnValue_16;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_1 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_25 = K2Node_DynamicCast_bSuccess_25;
	Parms.CallFunc_GetPhotoModeEnabled_Enabled = CallFunc_GetPhotoModeEnabled_Enabled;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue_1 = CallFunc_MakeTransform_ReturnValue_1;
	Parms.CallFunc_K2_GetPawn_ReturnValue_3 = CallFunc_K2_GetPawn_ReturnValue_3;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1;
	Parms.K2Node_DynamicCast_As0_Base_3 = K2Node_DynamicCast_As0_Base_3;
	Parms.K2Node_DynamicCast_bSuccess_26 = K2Node_DynamicCast_bSuccess_26;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_1 = CallFunc_FinishSpawningActor_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.K2Node_CustomEvent_Visibility = K2Node_CustomEvent_Visibility;
	Parms.CallFunc_K2_GetPawn_ReturnValue_4 = CallFunc_K2_GetPawn_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.K2Node_DynamicCast_As0_Base_4 = K2Node_DynamicCast_As0_Base_4;
	Parms.K2Node_DynamicCast_bSuccess_27 = K2Node_DynamicCast_bSuccess_27;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue = CallFunc_GetPlayerCameraManager_ReturnValue;
	Parms.CallFunc_GetCameraLocation_ReturnValue = CallFunc_GetCameraLocation_ReturnValue;
	Parms.CallFunc_GetCameraRotation_ReturnValue = CallFunc_GetCameraRotation_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue_2 = CallFunc_MakeTransform_ReturnValue_2;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_2 = CallFunc_FinishSpawningActor_ReturnValue_2;
	Parms.K2Node_CustomEvent_CurrentCheckpoint = K2Node_CustomEvent_CurrentCheckpoint;
	Parms.K2Node_CustomEvent_CurrentCheckpointTransform = K2Node_CustomEvent_CurrentCheckpointTransform;
	Parms.K2Node_CustomEvent_CurrentMainLevel = K2Node_CustomEvent_CurrentMainLevel;
	Parms.K2Node_CustomEvent_CurrentSubLevel = K2Node_CustomEvent_CurrentSubLevel;
	Parms.K2Node_DynamicCast_AsBarbarous_1 = K2Node_DynamicCast_AsBarbarous_1;
	Parms.K2Node_DynamicCast_bSuccess_28 = K2Node_DynamicCast_bSuccess_28;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base_2 = CallFunc_GetCharacterAs0_Base_As0_Base_2;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base_3 = CallFunc_GetCharacterAs0_Base_As0_Base_3;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.K2Node_CustomEvent_CloseSound = K2Node_CustomEvent_CloseSound;
	Parms.K2Node_CustomEvent_StopType = K2Node_CustomEvent_StopType;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base_4 = CallFunc_GetCharacterAs0_Base_As0_Base_4;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base_5 = CallFunc_GetCharacterAs0_Base_As0_Base_5;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_1 = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_1;
	Parms.CallFunc_GetControlledPawnLocation_ReturnValue = CallFunc_GetControlledPawnLocation_ReturnValue;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base_6 = CallFunc_GetCharacterAs0_Base_As0_Base_6;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsSword_Anim_BP2v_3_1 = K2Node_DynamicCast_AsSword_Anim_BP2v_3_1;
	Parms.K2Node_DynamicCast_bSuccess_29 = K2Node_DynamicCast_bSuccess_29;
	Parms.CallFunc_LoadLevelInstanceBySoftObjectPtr_bOutSuccess_1 = CallFunc_LoadLevelInstanceBySoftObjectPtr_bOutSuccess_1;
	Parms.CallFunc_LoadLevelInstanceBySoftObjectPtr_ReturnValue_1 = CallFunc_LoadLevelInstanceBySoftObjectPtr_ReturnValue_1;
	Parms.CallFunc_GetCharacterAsBarbarous_AsBarbarous_1 = CallFunc_GetCharacterAsBarbarous_AsBarbarous_1;
	Parms.CallFunc_K2_GetPawn_ReturnValue_5 = CallFunc_K2_GetPawn_ReturnValue_5;
	Parms.K2Node_DynamicCast_As0_Base_5 = K2Node_DynamicCast_As0_Base_5;
	Parms.K2Node_DynamicCast_bSuccess_30 = K2Node_DynamicCast_bSuccess_30;
	Parms.CallFunc_GetCharacterAsBarbarous_AsBarbarous_2 = CallFunc_GetCharacterAsBarbarous_AsBarbarous_2;
	Parms.CallFunc_GetLostMoneyName_MoneyName = CallFunc_GetLostMoneyName_MoneyName;
	Parms.CallFunc_GetMoneyName_MoneyName = CallFunc_GetMoneyName_MoneyName;
	Parms.CallFunc_ShouldLooseMoneyOnDeath_bShould = CallFunc_ShouldLooseMoneyOnDeath_bShould;
	Parms.CallFunc_GetNamedPCInt_Value = CallFunc_GetNamedPCInt_Value;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_Multiply_IntInt_ReturnValue = CallFunc_Multiply_IntInt_ReturnValue;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base_7 = CallFunc_GetCharacterAs0_Base_As0_Base_7;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_GetCurrentPersistentLevelName_ReturnValue = CallFunc_GetCurrentPersistentLevelName_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base_8 = CallFunc_GetCharacterAs0_Base_As0_Base_8;
	Parms.CallFunc_BooleanOR_ReturnValue_4 = CallFunc_BooleanOR_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsBarbarous_2 = K2Node_DynamicCast_AsBarbarous_2;
	Parms.K2Node_DynamicCast_bSuccess_31 = K2Node_DynamicCast_bSuccess_31;
	Parms.CallFunc_PlayAnimMontage_ReturnValue = CallFunc_PlayAnimMontage_ReturnValue;
	Parms.K2Node_CustomEvent_Killer = K2Node_CustomEvent_Killer;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base_9 = CallFunc_GetCharacterAs0_Base_As0_Base_9;
	Parms.K2Node_DynamicCast_AsBarbarous_3 = K2Node_DynamicCast_AsBarbarous_3;
	Parms.K2Node_DynamicCast_bSuccess_32 = K2Node_DynamicCast_bSuccess_32;
	Parms.CallFunc_IsLastChanceAvailable_bAvailable = CallFunc_IsLastChanceAvailable_bAvailable;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_GetGameInstance_ReturnValue_2 = CallFunc_GetGameInstance_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsGame_Info_Instance = K2Node_DynamicCast_AsGame_Info_Instance;
	Parms.K2Node_DynamicCast_bSuccess_33 = K2Node_DynamicCast_bSuccess_33;
	Parms.CallFunc_GetControlledPawnLocation_ReturnValue_1 = CallFunc_GetControlledPawnLocation_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsGame_Play_Player_State = K2Node_DynamicCast_AsGame_Play_Player_State;
	Parms.K2Node_DynamicCast_bSuccess_34 = K2Node_DynamicCast_bSuccess_34;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.K2Node_DynamicCast_AsGameplay_PC = K2Node_DynamicCast_AsGameplay_PC;
	Parms.K2Node_DynamicCast_bSuccess_35 = K2Node_DynamicCast_bSuccess_35;
	Parms.K2Node_CustomEvent_DamageCauser = K2Node_CustomEvent_DamageCauser;
	Parms.K2Node_CustomEvent_ImpactVector = K2Node_CustomEvent_ImpactVector;
	Parms.CallFunc_DidCharacterDieInTutorialLevel__ReturnValue = CallFunc_DidCharacterDieInTutorialLevel__ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = K2Node_CreateDelegate_OutputDelegate_11;
	Parms.K2Node_Event_PossessedPawn = K2Node_Event_PossessedPawn;
	Parms.K2Node_DynamicCast_As0_Base_6 = K2Node_DynamicCast_As0_Base_6;
	Parms.K2Node_DynamicCast_bSuccess_36 = K2Node_DynamicCast_bSuccess_36;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_GetGameMode_ReturnValue_9 = CallFunc_GetGameMode_ReturnValue_9;
	Parms.K2Node_DynamicCast_AsGameplay_GM_1 = K2Node_DynamicCast_AsGameplay_GM_1;
	Parms.K2Node_DynamicCast_bSuccess_37 = K2Node_DynamicCast_bSuccess_37;
	Parms.CallFunc_K2_GetPawn_ReturnValue_6 = CallFunc_K2_GetPawn_ReturnValue_6;
	Parms.K2Node_DynamicCast_As0_Base_7 = K2Node_DynamicCast_As0_Base_7;
	Parms.K2Node_DynamicCast_bSuccess_38 = K2Node_DynamicCast_bSuccess_38;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.K2Node_CustomEvent_bDampenAudio = K2Node_CustomEvent_bDampenAudio;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetGameInstance_ReturnValue_3 = CallFunc_GetGameInstance_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsGame_Info_Instance_1 = K2Node_DynamicCast_AsGame_Info_Instance_1;
	Parms.K2Node_DynamicCast_bSuccess_39 = K2Node_DynamicCast_bSuccess_39;
	Parms.K2Node_CustomEvent_SaveSlotName = K2Node_CustomEvent_SaveSlotName;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.K2Node_CustomEvent_PlayerSettingsInfo = K2Node_CustomEvent_PlayerSettingsInfo;
	Parms.CallFunc_IsLocalController_ReturnValue = CallFunc_IsLocalController_ReturnValue;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_K2_IsTimerActiveHandle_ReturnValue = CallFunc_K2_IsTimerActiveHandle_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_12 = K2Node_CreateDelegate_OutputDelegate_12;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_3 = CallFunc_K2_SetTimerDelegate_ReturnValue_3;
	Parms.K2Node_Event_SetMaxHP = K2Node_Event_SetMaxHP;
	Parms.K2Node_CreateDelegate_OutputDelegate_13 = K2Node_CreateDelegate_OutputDelegate_13;
	Parms.K2Node_CustomEvent_Location = K2Node_CustomEvent_Location;
	Parms.K2Node_CustomEvent_SoundBaseRef_1 = K2Node_CustomEvent_SoundBaseRef_1;
	Parms.K2Node_CustomEvent_SoundBaseRef = K2Node_CustomEvent_SoundBaseRef;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_5 = CallFunc_Add_IntInt_ReturnValue_5;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue_1 = CallFunc_FClamp_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.OnSkinApplyStateChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_Skins              SkinChanged                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::OnSkinApplyStateChanged__DelegateSignature(enum class Enum_Skins SkinChanged)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "OnSkinApplyStateChanged__DelegateSignature");

	Params::AGameplayPC_C_OnSkinApplyStateChanged__DelegateSignature_Params Parms{};

	Parms.SkinChanged = SkinChanged;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.OnPhotoModeChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bEnterred                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::OnPhotoModeChanged__DelegateSignature(bool bEnterred)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "OnPhotoModeChanged__DelegateSignature");

	Params::AGameplayPC_C_OnPhotoModeChanged__DelegateSignature_Params Parms{};

	Parms.bEnterred = bEnterred;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.PreLevelSequenceActorCleared__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::PreLevelSequenceActorCleared__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "PreLevelSequenceActorCleared__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.OnBallistazookaOpacityChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Opacity                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::OnBallistazookaOpacityChanged__DelegateSignature(float Opacity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "OnBallistazookaOpacityChanged__DelegateSignature");

	Params::AGameplayPC_C_OnBallistazookaOpacityChanged__DelegateSignature_Params Parms{};

	Parms.Opacity = Opacity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.OnFadeOutAggroedEnemies__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AEnemyCharacter_C*           EnemyToIgnore                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Reason                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void AGameplayPC_C::OnFadeOutAggroedEnemies__DelegateSignature(class AEnemyCharacter_C* EnemyToIgnore, const class FString& Reason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "OnFadeOutAggroedEnemies__DelegateSignature");

	Params::AGameplayPC_C_OnFadeOutAggroedEnemies__DelegateSignature_Params Parms{};

	Parms.EnemyToIgnore = EnemyToIgnore;
	Parms.Reason = Reason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.OnForceReturnToSpawner__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AEnemyCharacter_C*           IgnoreSelf                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Reason                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void AGameplayPC_C::OnForceReturnToSpawner__DelegateSignature(class AEnemyCharacter_C* IgnoreSelf, const class FString& Reason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "OnForceReturnToSpawner__DelegateSignature");

	Params::AGameplayPC_C_OnForceReturnToSpawner__DelegateSignature_Params Parms{};

	Parms.IgnoreSelf = IgnoreSelf;
	Parms.Reason = Reason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.OnItemUnavailable__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::OnItemUnavailable__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "OnItemUnavailable__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.OnHideEnemyAI__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hidden                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::OnHideEnemyAI__DelegateSignature(bool Hidden)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "OnHideEnemyAI__DelegateSignature");

	Params::AGameplayPC_C_OnHideEnemyAI__DelegateSignature_Params Parms{};

	Parms.Hidden = Hidden;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.OnEquipmentMenuPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Close                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_EquipmentMenuType  Menu                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::OnEquipmentMenuPressed__DelegateSignature(bool Close, enum class Enum_EquipmentMenuType Menu)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "OnEquipmentMenuPressed__DelegateSignature");

	Params::AGameplayPC_C_OnEquipmentMenuPressed__DelegateSignature_Params Parms{};

	Parms.Close = Close;
	Parms.Menu = Menu;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.OnWeaponChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EComboTypes             Weapon                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsChangingWeaponMode                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::OnWeaponChanged__DelegateSignature(enum class EComboTypes Weapon, bool IsChangingWeaponMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "OnWeaponChanged__DelegateSignature");

	Params::AGameplayPC_C_OnWeaponChanged__DelegateSignature_Params Parms{};

	Parms.Weapon = Weapon;
	Parms.IsChangingWeaponMode = IsChangingWeaponMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.OnGlimpsesGained__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::OnGlimpsesGained__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "OnGlimpsesGained__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.OnEscapeMenuPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Close                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayPC_C::OnEscapeMenuPressed__DelegateSignature(bool Close)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "OnEscapeMenuPressed__DelegateSignature");

	Params::AGameplayPC_C_OnEscapeMenuPressed__DelegateSignature_Params Parms{};

	Parms.Close = Close;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.OnShellRetrieved__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ShellName                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        ShellTagline                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// enum class EArmorTypes             ShellRetrieved                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::OnShellRetrieved__DelegateSignature(class FText ShellName, class FText ShellTagline, enum class EArmorTypes ShellRetrieved)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "OnShellRetrieved__DelegateSignature");

	Params::AGameplayPC_C_OnShellRetrieved__DelegateSignature_Params Parms{};

	Parms.ShellName = ShellName;
	Parms.ShellTagline = ShellTagline;
	Parms.ShellRetrieved = ShellRetrieved;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.OnCutsceneEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::OnCutsceneEnd__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "OnCutsceneEnd__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.OnCutsceneStart__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::OnCutsceneStart__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "OnCutsceneStart__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.OnTrueDeath__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::OnTrueDeath__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "OnTrueDeath__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.OnPlayerDeadLastChance__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::OnPlayerDeadLastChance__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "OnPlayerDeadLastChance__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.OnPauseEnemyAI__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              TimeDilation                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::OnPauseEnemyAI__DelegateSignature(float TimeDilation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "OnPauseEnemyAI__DelegateSignature");

	Params::AGameplayPC_C_OnPauseEnemyAI__DelegateSignature_Params Parms{};

	Parms.TimeDilation = TimeDilation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.OnWormfishSummoned__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::OnWormfishSummoned__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "OnWormfishSummoned__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.OnJustUnlockedName__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::OnJustUnlockedName__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "OnJustUnlockedName__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.OnCantUseQuickItem__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::OnCantUseQuickItem__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "OnCantUseQuickItem__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.OnActiveCheckpointChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::OnActiveCheckpointChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "OnActiveCheckpointChanged__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.OnPlayerDead__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::OnPlayerDead__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "OnPlayerDead__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.OnPlayerHealthChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              PreviousHealth                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewHealth                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::OnPlayerHealthChanged__DelegateSignature(float PreviousHealth, float NewHealth)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "OnPlayerHealthChanged__DelegateSignature");

	Params::AGameplayPC_C_OnPlayerHealthChanged__DelegateSignature_Params Parms{};

	Parms.PreviousHealth = PreviousHealth;
	Parms.NewHealth = NewHealth;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.OnHPRegApplied__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::OnHPRegApplied__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "OnHPRegApplied__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.DiedInTutorialLevelToHadern__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::DiedInTutorialLevelToHadern__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "DiedInTutorialLevelToHadern__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.CharacterPossessed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::CharacterPossessed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "CharacterPossessed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.QueueNotification__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FToolTipInfo                Tooltip                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class FText                        NotificationText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               ShowFamiliarity                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               AnimateLastDiamond                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              PreviousFamiliarity                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentFamiliarity                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MaxFamiliarity                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::QueueNotification__DelegateSignature(const struct FToolTipInfo& Tooltip, class FText NotificationText, bool ShowFamiliarity, bool AnimateLastDiamond, int32 PreviousFamiliarity, int32 CurrentFamiliarity, int32 MaxFamiliarity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "QueueNotification__DelegateSignature");

	Params::AGameplayPC_C_QueueNotification__DelegateSignature_Params Parms{};

	Parms.Tooltip = Tooltip;
	Parms.NotificationText = NotificationText;
	Parms.ShowFamiliarity = ShowFamiliarity;
	Parms.AnimateLastDiamond = AnimateLastDiamond;
	Parms.PreviousFamiliarity = PreviousFamiliarity;
	Parms.CurrentFamiliarity = CurrentFamiliarity;
	Parms.MaxFamiliarity = MaxFamiliarity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.OnShellEquipped__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ShellName                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        ShellTagline                                                     (BlueprintVisible, BlueprintReadOnly, Parm)

void AGameplayPC_C::OnShellEquipped__DelegateSignature(class FText ShellName, class FText ShellTagline)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "OnShellEquipped__DelegateSignature");

	Params::AGameplayPC_C_OnShellEquipped__DelegateSignature_Params Parms{};

	Parms.ShellName = ShellName;
	Parms.ShellTagline = ShellTagline;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.OnItemFamiliarityChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FToolTipInfo                Tooltip                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int32                              PreviousFamiliarity                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentFamiliarity                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MaxFamiliarity                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::OnItemFamiliarityChanged__DelegateSignature(const struct FToolTipInfo& Tooltip, int32 PreviousFamiliarity, int32 CurrentFamiliarity, int32 MaxFamiliarity, class FName ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "OnItemFamiliarityChanged__DelegateSignature");

	Params::AGameplayPC_C_OnItemFamiliarityChanged__DelegateSignature_Params Parms{};

	Parms.Tooltip = Tooltip;
	Parms.PreviousFamiliarity = PreviousFamiliarity;
	Parms.CurrentFamiliarity = CurrentFamiliarity;
	Parms.MaxFamiliarity = MaxFamiliarity;
	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.OnShellBondingPointsChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::OnShellBondingPointsChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "OnShellBondingPointsChanged__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.FinishedTalkingToNPC__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::FinishedTalkingToNPC__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "FinishedTalkingToNPC__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.StartedTalkingToNPC__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      NPC                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayPC_C::StartedTalkingToNPC__DelegateSignature(class AActor* NPC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "StartedTalkingToNPC__DelegateSignature");

	Params::AGameplayPC_C_StartedTalkingToNPC__DelegateSignature_Params Parms{};

	Parms.NPC = NPC;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayPC.GameplayPC_C.SaveGameLoaded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::SaveGameLoaded__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "SaveGameLoaded__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayPC.GameplayPC_C.CheckpointsLoaded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayPC_C::CheckpointsLoaded__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayPC_C", "CheckpointsLoaded__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}



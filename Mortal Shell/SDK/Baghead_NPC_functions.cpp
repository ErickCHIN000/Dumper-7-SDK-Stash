#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Baghead_NPC.Baghead_NPC_C
// (Actor)

class UClass* ABaghead_NPC_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Baghead_NPC_C");

	return Clss;
}


// Baghead_NPC_C Baghead_NPC.Default__Baghead_NPC_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABaghead_NPC_C* ABaghead_NPC_C::GetDefaultObj()
{
	static class ABaghead_NPC_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABaghead_NPC_C*>(ABaghead_NPC_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Baghead_NPC.Baghead_NPC_C.SwapMusic
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaghead_NPC_C::SwapMusic()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Baghead_NPC_C", "SwapMusic");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Baghead_NPC.Baghead_NPC_C.ContinueDialog
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaghead_NPC_C::ContinueDialog()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Baghead_NPC_C", "ContinueDialog");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Baghead_NPC.Baghead_NPC_C.OnOptionSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bYes                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABaghead_NPC_C::OnOptionSelected(bool bYes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Baghead_NPC_C", "OnOptionSelected");

	Params::ABaghead_NPC_C_OnOptionSelected_Params Parms{};

	Parms.bYes = bYes;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Baghead_NPC.Baghead_NPC_C.Rollcredits
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaghead_NPC_C::Rollcredits()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Baghead_NPC_C", "Rollcredits");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Baghead_NPC.Baghead_NPC_C.DH_TestBagheadEnding
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaghead_NPC_C::DH_TestBagheadEnding()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Baghead_NPC_C", "DH_TestBagheadEnding");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Baghead_NPC.Baghead_NPC_C.OnFadeToBlackCompleted
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaghead_NPC_C::OnFadeToBlackCompleted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Baghead_NPC_C", "OnFadeToBlackCompleted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Baghead_NPC.Baghead_NPC_C.Baghead_Ending_Start
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaghead_NPC_C::Baghead_Ending_Start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Baghead_NPC_C", "Baghead_Ending_Start");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Baghead_NPC.Baghead_NPC_C.FadeOutGameMusic
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaghead_NPC_C::FadeOutGameMusic()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Baghead_NPC_C", "FadeOutGameMusic");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Baghead_NPC.Baghead_NPC_C.ExecuteUbergraph_Baghead_NPC
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EArmorTypes             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBriefFadeToBlack_C*         CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBriefReturnFromBlackFade_C* CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FDHDialogueLine>     Temp_struct_Variable                                             (ReferenceParm, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// TArray<struct FDHDialogueLine>     Temp_struct_Variable_1                                           (ReferenceParm, HasGetValueTypeHash)
// bool                               K2Node_Event_bYes                                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckPlayerInventoryForItem_Success                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_CheckPlayerInventoryForItem_InventorySlot               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckPlayerInventoryForItem_Success_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_CheckPlayerInventoryForItem_InventorySlot_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckPlayerInventoryForItem_Success_2                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_CheckPlayerInventoryForItem_InventorySlot_2             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FDHDialogueLine>     Temp_struct_Variable_2                                           (ReferenceParm, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FDHDialogueLine>     K2Node_Select_Default                                            (ReferenceParm, HasGetValueTypeHash)
// enum class EArmorTypes             Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGamePlayGameState_C*        CallFunc_GetGameStateAsGameplayGameState_AsGamePlayGameState     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ALevelSequenceActor*         K2Node_DynamicCast_AsLevel_Sequence_Actor                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ULevelSequencePlayer*        CallFunc_GetSequencePlayer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABPUsable_DarkFather_C*      K2Node_DynamicCast_AsBPUsable_Dark_Father                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AEnemyCharacter_C*>   CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm, HasGetValueTypeHash)
// TArray<struct FDHDialogueLine>     K2Node_Select_Default_1                                          (ReferenceParm, HasGetValueTypeHash)
// class AEnemyCharacter_C*           CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EArmorTypes             CallFunc_GetShell_CurrentArmor                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FDHDialogueLine>     K2Node_Select_Default_2                                          (ReferenceParm, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayGM_C*               CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetArbNameInChangedSetPure_bIsInSet                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFog_chest_consumable_container_C*K2Node_DynamicCast_AsFog_Chest_Consumable_Container              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RemoveInventoryItem_Success                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveInventoryItem_Success_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RemoveInventoryItem_Success_2                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_3               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FDHDialogueLine>     K2Node_Select_Default_4                                          (ReferenceParm, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABarbarous_C*                CallFunc_GetCharacterAsBarbarous_AsBarbarous                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaghead_NPC_C::ExecuteUbergraph_Baghead_NPC(int32 EntryPoint, bool Temp_bool_Variable, enum class EArmorTypes Temp_byte_Variable, class FName Temp_name_Variable, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, class FName Temp_name_Variable_3, class FName Temp_name_Variable_4, class FName Temp_name_Variable_5, class UBriefFadeToBlack_C* CallFunc_Create_ReturnValue, class UBriefReturnFromBlackFade_C* CallFunc_Create_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Has_Been_Initd_Variable, TArray<struct FDHDialogueLine>& Temp_struct_Variable, bool Temp_bool_IsClosed_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, TArray<struct FDHDialogueLine>& Temp_struct_Variable_1, bool K2Node_Event_bYes, bool CallFunc_CheckPlayerInventoryForItem_Success, int32 CallFunc_CheckPlayerInventoryForItem_InventorySlot, bool CallFunc_CheckPlayerInventoryForItem_Success_1, int32 CallFunc_CheckPlayerInventoryForItem_InventorySlot_1, bool CallFunc_CheckPlayerInventoryForItem_Success_2, int32 CallFunc_CheckPlayerInventoryForItem_InventorySlot_2, TArray<struct FDHDialogueLine>& Temp_struct_Variable_2, int32 Temp_int_Array_Index_Variable, bool K2Node_SwitchInteger_CmpSuccess, bool K2Node_SwitchInteger_CmpSuccess_1, TArray<struct FDHDialogueLine>& K2Node_Select_Default, enum class EArmorTypes Temp_byte_Variable_1, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class AGamePlayGameState_C* CallFunc_GetGameStateAsGameplayGameState_AsGamePlayGameState, class ALevelSequenceActor* K2Node_DynamicCast_AsLevel_Sequence_Actor, bool K2Node_DynamicCast_bSuccess, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1, class ABPUsable_DarkFather_C* K2Node_DynamicCast_AsBPUsable_Dark_Father, bool K2Node_DynamicCast_bSuccess_1, bool Temp_bool_Variable_1, TArray<class AEnemyCharacter_C*>& CallFunc_GetAllActorsOfClass_OutActors, TArray<struct FDHDialogueLine>& K2Node_Select_Default_1, class AEnemyCharacter_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, enum class EArmorTypes CallFunc_GetShell_CurrentArmor, int32 Temp_int_Loop_Counter_Variable, TArray<struct FDHDialogueLine>& K2Node_Select_Default_2, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM, class FName K2Node_Select_Default_3, bool CallFunc_GetArbNameInChangedSetPure_bIsInSet, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class AFog_chest_consumable_container_C* K2Node_DynamicCast_AsFog_Chest_Consumable_Container, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_RemoveInventoryItem_Success, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2, bool CallFunc_RemoveInventoryItem_Success_1, bool CallFunc_RemoveInventoryItem_Success_2, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_3, bool Temp_bool_Variable_2, TArray<struct FDHDialogueLine>& K2Node_Select_Default_4, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_1, class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Baghead_NPC_C", "ExecuteUbergraph_Baghead_NPC");

	Params::ABaghead_NPC_C_ExecuteUbergraph_Baghead_NPC_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.Temp_name_Variable_2 = Temp_name_Variable_2;
	Parms.Temp_name_Variable_3 = Temp_name_Variable_3;
	Parms.Temp_name_Variable_4 = Temp_name_Variable_4;
	Parms.Temp_name_Variable_5 = Temp_name_Variable_5;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.K2Node_Event_bYes = K2Node_Event_bYes;
	Parms.CallFunc_CheckPlayerInventoryForItem_Success = CallFunc_CheckPlayerInventoryForItem_Success;
	Parms.CallFunc_CheckPlayerInventoryForItem_InventorySlot = CallFunc_CheckPlayerInventoryForItem_InventorySlot;
	Parms.CallFunc_CheckPlayerInventoryForItem_Success_1 = CallFunc_CheckPlayerInventoryForItem_Success_1;
	Parms.CallFunc_CheckPlayerInventoryForItem_InventorySlot_1 = CallFunc_CheckPlayerInventoryForItem_InventorySlot_1;
	Parms.CallFunc_CheckPlayerInventoryForItem_Success_2 = CallFunc_CheckPlayerInventoryForItem_Success_2;
	Parms.CallFunc_CheckPlayerInventoryForItem_InventorySlot_2 = CallFunc_CheckPlayerInventoryForItem_InventorySlot_2;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.K2Node_SwitchInteger_CmpSuccess_1 = K2Node_SwitchInteger_CmpSuccess_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.CallFunc_GetGameStateAsGameplayGameState_AsGamePlayGameState = CallFunc_GetGameStateAsGameplayGameState_AsGamePlayGameState;
	Parms.K2Node_DynamicCast_AsLevel_Sequence_Actor = K2Node_DynamicCast_AsLevel_Sequence_Actor;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetSequencePlayer_ReturnValue = CallFunc_GetSequencePlayer_ReturnValue;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1 = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBPUsable_Dark_Father = K2Node_DynamicCast_AsBPUsable_Dark_Father;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetShell_CurrentArmor = CallFunc_GetShell_CurrentArmor;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM = CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_GetArbNameInChangedSetPure_bIsInSet = CallFunc_GetArbNameInChangedSetPure_bIsInSet;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2 = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.K2Node_DynamicCast_AsFog_Chest_Consumable_Container = K2Node_DynamicCast_AsFog_Chest_Consumable_Container;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_RemoveInventoryItem_Success = CallFunc_RemoveInventoryItem_Success;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2;
	Parms.CallFunc_RemoveInventoryItem_Success_1 = CallFunc_RemoveInventoryItem_Success_1;
	Parms.CallFunc_RemoveInventoryItem_Success_2 = CallFunc_RemoveInventoryItem_Success_2;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base = CallFunc_GetCharacterAs0_Base_As0_Base;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_3 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_3;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base_1 = CallFunc_GetCharacterAs0_Base_As0_Base_1;
	Parms.CallFunc_GetCharacterAsBarbarous_AsBarbarous = CallFunc_GetCharacterAsBarbarous_AsBarbarous;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;

	UObject::ProcessEvent(Func, &Parms);

}

}



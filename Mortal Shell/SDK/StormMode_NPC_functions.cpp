#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass StormMode_NPC.StormMode_NPC_C
// (Actor)

class UClass* AStormMode_NPC_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StormMode_NPC_C");

	return Clss;
}


// StormMode_NPC_C StormMode_NPC.Default__StormMode_NPC_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AStormMode_NPC_C* AStormMode_NPC_C::GetDefaultObj()
{
	static class AStormMode_NPC_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AStormMode_NPC_C*>(AStormMode_NPC_C::StaticClass()->DefaultObject);

	return Default;
}


// Function StormMode_NPC.StormMode_NPC_C.EnableStaticMesh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AStormMode_NPC_C::EnableStaticMesh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StormMode_NPC_C", "EnableStaticMesh");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StormMode_NPC.StormMode_NPC_C.DH_TestSisterOutro
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AStormMode_NPC_C::DH_TestSisterOutro()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StormMode_NPC_C", "DH_TestSisterOutro");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StormMode_NPC.StormMode_NPC_C.GetSeedAnswers
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class FText>                Text                                                             (ConstParm, Parm, OutParm, HasGetValueTypeHash)
// TArray<class FName>                IDs                                                              (ConstParm, Parm, OutParm, HasGetValueTypeHash)
// class FText                        CallFunc_GetNoText_No                                            (None)
// class FText                        CallFunc_GetYesText_Yes                                          (None)
// TArray<class FName>                K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm, HasGetValueTypeHash)
// TArray<class FText>                K2Node_MakeArray_Array_1                                         (ConstParm, ReferenceParm, HasGetValueTypeHash)

void AStormMode_NPC_C::GetSeedAnswers(TArray<class FText>* Text, TArray<class FName>* IDs, class FText CallFunc_GetNoText_No, class FText CallFunc_GetYesText_Yes, TArray<class FName>& K2Node_MakeArray_Array, TArray<class FText>& K2Node_MakeArray_Array_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StormMode_NPC_C", "GetSeedAnswers");

	Params::AStormMode_NPC_C_GetSeedAnswers_Params Parms{};

	Parms.CallFunc_GetNoText_No = CallFunc_GetNoText_No;
	Parms.CallFunc_GetYesText_Yes = CallFunc_GetYesText_Yes;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = std::move(Parms.Text);

	if (IDs != nullptr)
		*IDs = std::move(Parms.IDs);

}


// Function StormMode_NPC.StormMode_NPC_C.DebugVisitorDialChance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetVisitorDialChance_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void AStormMode_NPC_C::DebugVisitorDialChance(float CallFunc_GetVisitorDialChance_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StormMode_NPC_C", "DebugVisitorDialChance");

	Params::AStormMode_NPC_C_DebugVisitorDialChance_Params Parms{};

	Parms.CallFunc_GetVisitorDialChance_ReturnValue = CallFunc_GetVisitorDialChance_ReturnValue;
	Parms.CallFunc_Conv_FloatToString_ReturnValue = CallFunc_Conv_FloatToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StormMode_NPC.StormMode_NPC_C.GetVisitorDialChance
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float AStormMode_NPC_C::GetVisitorDialChance(int32 Temp_int_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, float K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StormMode_NPC_C", "GetVisitorDialChance");

	Params::AStormMode_NPC_C_GetVisitorDialChance_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.Temp_float_Variable_2 = Temp_float_Variable_2;
	Parms.Temp_float_Variable_3 = Temp_float_Variable_3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function StormMode_NPC.StormMode_NPC_C.Achievement_ChangeOfHearth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ICharacterUtilInterface_C>K2Node_DynamicCast_AsCharacter_Util_Interface                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EArmorTypes             CallFunc_0_Base_GetCurrentArmor_CurrentArmorType                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void AStormMode_NPC_C::Achievement_ChangeOfHearth(class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, TScriptInterface<class ICharacterUtilInterface_C> K2Node_DynamicCast_AsCharacter_Util_Interface, bool K2Node_DynamicCast_bSuccess, enum class EArmorTypes CallFunc_0_Base_GetCurrentArmor_CurrentArmorType, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StormMode_NPC_C", "Achievement_ChangeOfHearth");

	Params::AStormMode_NPC_C_Achievement_ChangeOfHearth_Params Parms{};

	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsCharacter_Util_Interface = K2Node_DynamicCast_AsCharacter_Util_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_0_Base_GetCurrentArmor_CurrentArmorType = CallFunc_0_Base_GetCurrentArmor_CurrentArmorType;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StormMode_NPC.StormMode_NPC_C.BlankAnswer
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class FText>                Text                                                             (ConstParm, Parm, OutParm, HasGetValueTypeHash)
// TArray<class FName>                ID                                                               (ConstParm, Parm, OutParm, HasGetValueTypeHash)
// TArray<class FText>                K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm, HasGetValueTypeHash)
// TArray<class FName>                K2Node_MakeArray_Array_1                                         (ConstParm, ReferenceParm, HasGetValueTypeHash)

void AStormMode_NPC_C::BlankAnswer(TArray<class FText>* Text, TArray<class FName>* ID, TArray<class FText>& K2Node_MakeArray_Array, TArray<class FName>& K2Node_MakeArray_Array_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StormMode_NPC_C", "BlankAnswer");

	Params::AStormMode_NPC_C_BlankAnswer_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = std::move(Parms.Text);

	if (ID != nullptr)
		*ID = std::move(Parms.ID);

}


// Function StormMode_NPC.StormMode_NPC_C.UnlockStormMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AStormMode_NPC_C::UnlockStormMode(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StormMode_NPC_C", "UnlockStormMode");

	Params::AStormMode_NPC_C_UnlockStormMode_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StormMode_NPC.StormMode_NPC_C.PickRandomDeathDialogue_NoRepeat
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDHDialogueLine             Output                                                           (Parm, OutParm)
// int32                              Selected                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_DeathDialAndIdle_LastSelectedGeneric_PCIntName          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_DeathDial_LastSelectedGeneric_PCIntName                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_DeathDialAndIdle_LastSelectedGeneric_PCIntName_1        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_DeathDial_LastSelectedGeneric_PCIntName_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNamedPCInt_Value                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNamedPCInt_Value_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDHDialogueLine             CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void AStormMode_NPC_C::PickRandomDeathDialogue_NoRepeat(struct FDHDialogueLine* Output, int32 Selected, class FName CallFunc_DeathDialAndIdle_LastSelectedGeneric_PCIntName, int32 CallFunc_Add_IntInt_ReturnValue, class FName CallFunc_DeathDial_LastSelectedGeneric_PCIntName, class FName CallFunc_DeathDialAndIdle_LastSelectedGeneric_PCIntName_1, class FName CallFunc_DeathDial_LastSelectedGeneric_PCIntName_1, int32 CallFunc_GetNamedPCInt_Value, int32 CallFunc_GetNamedPCInt_Value_1, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_NotEqual_IntInt_ReturnValue, const struct FDHDialogueLine& CallFunc_Array_Get_Item, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StormMode_NPC_C", "PickRandomDeathDialogue_NoRepeat");

	Params::AStormMode_NPC_C_PickRandomDeathDialogue_NoRepeat_Params Parms{};

	Parms.Selected = Selected;
	Parms.CallFunc_DeathDialAndIdle_LastSelectedGeneric_PCIntName = CallFunc_DeathDialAndIdle_LastSelectedGeneric_PCIntName;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_DeathDial_LastSelectedGeneric_PCIntName = CallFunc_DeathDial_LastSelectedGeneric_PCIntName;
	Parms.CallFunc_DeathDialAndIdle_LastSelectedGeneric_PCIntName_1 = CallFunc_DeathDialAndIdle_LastSelectedGeneric_PCIntName_1;
	Parms.CallFunc_DeathDial_LastSelectedGeneric_PCIntName_1 = CallFunc_DeathDial_LastSelectedGeneric_PCIntName_1;
	Parms.CallFunc_GetNamedPCInt_Value = CallFunc_GetNamedPCInt_Value;
	Parms.CallFunc_GetNamedPCInt_Value_1 = CallFunc_GetNamedPCInt_Value_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue_1 = CallFunc_NotEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

}


// Function StormMode_NPC.StormMode_NPC_C.GetSeedDialogueIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_SeedDial_NextIndex_PCIntName                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNamedPCInt_Value                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStormMode_NPC_C::GetSeedDialogueIndex(int32* Value, class FName CallFunc_SeedDial_NextIndex_PCIntName, int32 CallFunc_GetNamedPCInt_Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StormMode_NPC_C", "GetSeedDialogueIndex");

	Params::AStormMode_NPC_C_GetSeedDialogueIndex_Params Parms{};

	Parms.CallFunc_SeedDial_NextIndex_PCIntName = CallFunc_SeedDial_NextIndex_PCIntName;
	Parms.CallFunc_GetNamedPCInt_Value = CallFunc_GetNamedPCInt_Value;

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function StormMode_NPC.StormMode_NPC_C.GenericDialogue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectedIndex                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_DeathDialAndIdle_LastSelectedGeneric_PCIntName          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_DeathDialAndIdle_LastSelectedGeneric_PCIntName_1        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNamedPCInt_Value                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomInteger_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDHDialogueLine             CallFunc_Array_Get_Item_1                                        (None)
// TArray<struct FDHDialogueLine>     K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm, HasGetValueTypeHash)

void AStormMode_NPC_C::GenericDialogue(int32 SelectedIndex, class FName CallFunc_DeathDialAndIdle_LastSelectedGeneric_PCIntName, int32 CallFunc_Add_IntInt_ReturnValue, class FName CallFunc_DeathDialAndIdle_LastSelectedGeneric_PCIntName_1, int32 CallFunc_GetNamedPCInt_Value, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue, int32 CallFunc_Array_Get_Item, bool CallFunc_NotEqual_IntInt_ReturnValue, const struct FDHDialogueLine& CallFunc_Array_Get_Item_1, TArray<struct FDHDialogueLine>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StormMode_NPC_C", "GenericDialogue");

	Params::AStormMode_NPC_C_GenericDialogue_Params Parms{};

	Parms.SelectedIndex = SelectedIndex;
	Parms.CallFunc_DeathDialAndIdle_LastSelectedGeneric_PCIntName = CallFunc_DeathDialAndIdle_LastSelectedGeneric_PCIntName;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_DeathDialAndIdle_LastSelectedGeneric_PCIntName_1 = CallFunc_DeathDialAndIdle_LastSelectedGeneric_PCIntName_1;
	Parms.CallFunc_GetNamedPCInt_Value = CallFunc_GetNamedPCInt_Value;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_RandomInteger_ReturnValue = CallFunc_RandomInteger_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StormMode_NPC.StormMode_NPC_C.GetCurrentSeedItemName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_SeedDial_NextIndex_PCIntName                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNamedPCInt_Value                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FName AStormMode_NPC_C::GetCurrentSeedItemName(class FName CallFunc_SeedDial_NextIndex_PCIntName, int32 CallFunc_GetNamedPCInt_Value, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StormMode_NPC_C", "GetCurrentSeedItemName");

	Params::AStormMode_NPC_C_GetCurrentSeedItemName_Params Parms{};

	Parms.CallFunc_SeedDial_NextIndex_PCIntName = CallFunc_SeedDial_NextIndex_PCIntName;
	Parms.CallFunc_GetNamedPCInt_Value = CallFunc_GetNamedPCInt_Value;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function StormMode_NPC.StormMode_NPC_C.InitializeDialogueWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UUI_Dialogue_C*              CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)

void AStormMode_NPC_C::InitializeDialogueWidget(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetPlayerController_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UUI_Dialogue_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StormMode_NPC_C", "InitializeDialogueWidget");

	Params::AStormMode_NPC_C_InitializeDialogueWidget_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StormMode_NPC.StormMode_NPC_C.SelectAndUpdateRespawnDialogue
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FDHDialogueLine>     Array                                                            (ConstParm, Parm, OutParm, HasGetValueTypeHash)
// int32                              Local_DeathDialInARow                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_StormModePlayerKillerLocal_Killer                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OldVisitorThreadIndex                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_DeathDial_ReactionID_PCIntName                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetNamedPCInt_Value                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_StormModePlayerKillerCallFunc_DeathDial_GetKiller_Killer                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_DeathDial_ReactionID_PCIntName_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FDHDialogueLine>     Temp_struct_Variable                                             (ConstParm, ReferenceParm, HasGetValueTypeHash)
// class FName                        CallFunc_DeathDial_First_PCIntName                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDHDialogueLine             CallFunc_PickRandomDeathDialogue_NoRepeat_Output                 (None)
// TArray<struct FDHDialogueLine>     K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm, HasGetValueTypeHash)
// class FName                        CallFunc_DeathDial_GenericTriggeredInARow_PCIntName              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNamedPCInt_Value_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_DeathDial_VisitorThreadNextIndex_PCIntName              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_DeathDial_GenericTriggeredInARow_PCIntName_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNamedPCInt_Value_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_StormModePlayerKillerTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_DeathDial_GenericTriggeredInARow_PCIntName_2            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetVisitorDialChance_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNamedPCInt_Value_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FDHDialogueLine>     K2Node_Select_Default                                            (ConstParm, ReferenceParm, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_DeathDial_VisitorThreadNextIndex_PCIntName_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_DeathDial_GenericTriggeredInARow_PCIntName_3            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNamedPCInt_Value_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_DeathDial_GenericTriggeredInARow_PCIntName_4            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_StormModePlayerKillerCallFunc_DeathDial_GetKiller_Killer_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_DeathDial_VisitorThreadNextIndex_PCIntName_2            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FDHDialogueLine>     K2Node_Select_Default_1                                          (ConstParm, ReferenceParm, HasGetValueTypeHash)
// enum class Enum_StormModePlayerKillerCallFunc_DeathDial_GetKiller_Killer_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_DeathDial_First_PCIntName_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNamedPCInt_Value_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void AStormMode_NPC_C::SelectAndUpdateRespawnDialogue(TArray<struct FDHDialogueLine>* Array, int32 Local_DeathDialInARow, enum class Enum_StormModePlayerKiller Local_Killer, int32 OldVisitorThreadIndex, class FName CallFunc_DeathDial_ReactionID_PCIntName, bool CallFunc_NotEqual_ByteByte_ReturnValue, int32 CallFunc_GetNamedPCInt_Value, enum class Enum_StormModePlayerKiller CallFunc_DeathDial_GetKiller_Killer, bool CallFunc_EqualEqual_IntInt_ReturnValue, class FName CallFunc_DeathDial_ReactionID_PCIntName_1, bool CallFunc_BooleanAND_ReturnValue, TArray<struct FDHDialogueLine>& Temp_struct_Variable, class FName CallFunc_DeathDial_First_PCIntName, const struct FDHDialogueLine& CallFunc_PickRandomDeathDialogue_NoRepeat_Output, TArray<struct FDHDialogueLine>& K2Node_MakeArray_Array, class FName CallFunc_DeathDial_GenericTriggeredInARow_PCIntName, int32 CallFunc_GetNamedPCInt_Value_1, int32 CallFunc_Add_IntInt_ReturnValue, class FName CallFunc_DeathDial_VisitorThreadNextIndex_PCIntName, class FName CallFunc_DeathDial_GenericTriggeredInARow_PCIntName_1, int32 CallFunc_GetNamedPCInt_Value_2, enum class Enum_StormModePlayerKiller Temp_byte_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class FName CallFunc_DeathDial_GenericTriggeredInARow_PCIntName_2, float CallFunc_GetVisitorDialChance_ReturnValue, int32 CallFunc_GetNamedPCInt_Value_3, int32 Temp_int_Variable, float CallFunc_RandomFloat_ReturnValue, TArray<struct FDHDialogueLine>& K2Node_Select_Default, bool CallFunc_Less_FloatFloat_ReturnValue, class FName CallFunc_DeathDial_VisitorThreadNextIndex_PCIntName_1, class FName CallFunc_DeathDial_GenericTriggeredInARow_PCIntName_3, int32 CallFunc_GetNamedPCInt_Value_4, bool CallFunc_Less_IntInt_ReturnValue_1, class FName CallFunc_DeathDial_GenericTriggeredInARow_PCIntName_4, enum class Enum_StormModePlayerKiller CallFunc_DeathDial_GetKiller_Killer_1, class FName CallFunc_DeathDial_VisitorThreadNextIndex_PCIntName_2, TArray<struct FDHDialogueLine>& K2Node_Select_Default_1, enum class Enum_StormModePlayerKiller CallFunc_DeathDial_GetKiller_Killer_2, class FName CallFunc_DeathDial_First_PCIntName_1, int32 CallFunc_GetNamedPCInt_Value_5, bool CallFunc_EqualEqual_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StormMode_NPC_C", "SelectAndUpdateRespawnDialogue");

	Params::AStormMode_NPC_C_SelectAndUpdateRespawnDialogue_Params Parms{};

	Parms.Local_DeathDialInARow = Local_DeathDialInARow;
	Parms.Local_Killer = Local_Killer;
	Parms.OldVisitorThreadIndex = OldVisitorThreadIndex;
	Parms.CallFunc_DeathDial_ReactionID_PCIntName = CallFunc_DeathDial_ReactionID_PCIntName;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetNamedPCInt_Value = CallFunc_GetNamedPCInt_Value;
	Parms.CallFunc_DeathDial_GetKiller_Killer = CallFunc_DeathDial_GetKiller_Killer;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_DeathDial_ReactionID_PCIntName_1 = CallFunc_DeathDial_ReactionID_PCIntName_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_DeathDial_First_PCIntName = CallFunc_DeathDial_First_PCIntName;
	Parms.CallFunc_PickRandomDeathDialogue_NoRepeat_Output = CallFunc_PickRandomDeathDialogue_NoRepeat_Output;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_DeathDial_GenericTriggeredInARow_PCIntName = CallFunc_DeathDial_GenericTriggeredInARow_PCIntName;
	Parms.CallFunc_GetNamedPCInt_Value_1 = CallFunc_GetNamedPCInt_Value_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_DeathDial_VisitorThreadNextIndex_PCIntName = CallFunc_DeathDial_VisitorThreadNextIndex_PCIntName;
	Parms.CallFunc_DeathDial_GenericTriggeredInARow_PCIntName_1 = CallFunc_DeathDial_GenericTriggeredInARow_PCIntName_1;
	Parms.CallFunc_GetNamedPCInt_Value_2 = CallFunc_GetNamedPCInt_Value_2;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_DeathDial_GenericTriggeredInARow_PCIntName_2 = CallFunc_DeathDial_GenericTriggeredInARow_PCIntName_2;
	Parms.CallFunc_GetVisitorDialChance_ReturnValue = CallFunc_GetVisitorDialChance_ReturnValue;
	Parms.CallFunc_GetNamedPCInt_Value_3 = CallFunc_GetNamedPCInt_Value_3;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_RandomFloat_ReturnValue = CallFunc_RandomFloat_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_DeathDial_VisitorThreadNextIndex_PCIntName_1 = CallFunc_DeathDial_VisitorThreadNextIndex_PCIntName_1;
	Parms.CallFunc_DeathDial_GenericTriggeredInARow_PCIntName_3 = CallFunc_DeathDial_GenericTriggeredInARow_PCIntName_3;
	Parms.CallFunc_GetNamedPCInt_Value_4 = CallFunc_GetNamedPCInt_Value_4;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_DeathDial_GenericTriggeredInARow_PCIntName_4 = CallFunc_DeathDial_GenericTriggeredInARow_PCIntName_4;
	Parms.CallFunc_DeathDial_GetKiller_Killer_1 = CallFunc_DeathDial_GetKiller_Killer_1;
	Parms.CallFunc_DeathDial_VisitorThreadNextIndex_PCIntName_2 = CallFunc_DeathDial_VisitorThreadNextIndex_PCIntName_2;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_DeathDial_GetKiller_Killer_2 = CallFunc_DeathDial_GetKiller_Killer_2;
	Parms.CallFunc_DeathDial_First_PCIntName_1 = CallFunc_DeathDial_First_PCIntName_1;
	Parms.CallFunc_GetNamedPCInt_Value_5 = CallFunc_GetNamedPCInt_Value_5;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Array != nullptr)
		*Array = std::move(Parms.Array);

}


// Function StormMode_NPC.StormMode_NPC_C.StartingDialogue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CallFunc_Interact_Dial_Talked_Once_This_Run_PCIntName            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNamedPCInt_Value                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetCurrentSeedItemName_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckPlayerInventoryForItem_Success                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_SeedDial_RefusedLast_PCIntName                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNamedPCInt_Value_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_SeedDial_NextIndex_PCIntName                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetNamedPCInt_Value_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_InteractDial_MiscNextIndex_PCIntName                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_InteractDial_MiscNextIndex_PCIntName_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNamedPCInt_Value_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNamedPCInt_Value_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_InteractDial_MiscNextIndex_PCIntName_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FText>                CallFunc_GetSeedAnswers_Text                                     (ReferenceParm, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetSeedAnswers_IDs                                      (ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_GetNamedPCInt_Value_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FText>                CallFunc_GetSeedAnswers_Text_1                                   (ReferenceParm, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetSeedAnswers_IDs_1                                    (ReferenceParm, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FText>                CallFunc_GetSeedAnswers_Text_2                                   (ReferenceParm, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetSeedAnswers_IDs_2                                    (ReferenceParm, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_DeathDial_First_PCIntName                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FDHDialogueLine>     K2Node_Select_Default                                            (ConstParm, ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_GetNamedPCInt_Value_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void AStormMode_NPC_C::StartingDialogue(class FName CallFunc_Interact_Dial_Talked_Once_This_Run_PCIntName, int32 CallFunc_GetNamedPCInt_Value, class FName CallFunc_GetCurrentSeedItemName_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_CheckPlayerInventoryForItem_Success, class FName CallFunc_SeedDial_RefusedLast_PCIntName, int32 CallFunc_GetNamedPCInt_Value_1, class FName CallFunc_SeedDial_NextIndex_PCIntName, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 CallFunc_GetNamedPCInt_Value_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, class FName CallFunc_InteractDial_MiscNextIndex_PCIntName, class FName CallFunc_InteractDial_MiscNextIndex_PCIntName_1, int32 CallFunc_GetNamedPCInt_Value_3, int32 CallFunc_GetNamedPCInt_Value_4, int32 CallFunc_Add_IntInt_ReturnValue, class FName CallFunc_InteractDial_MiscNextIndex_PCIntName_2, TArray<class FText>& CallFunc_GetSeedAnswers_Text, TArray<class FName>& CallFunc_GetSeedAnswers_IDs, int32 CallFunc_GetNamedPCInt_Value_5, bool CallFunc_Less_IntInt_ReturnValue, TArray<class FText>& CallFunc_GetSeedAnswers_Text_1, TArray<class FName>& CallFunc_GetSeedAnswers_IDs_1, bool CallFunc_BooleanAND_ReturnValue, TArray<class FText>& CallFunc_GetSeedAnswers_Text_2, TArray<class FName>& CallFunc_GetSeedAnswers_IDs_2, int32 Temp_int_Variable, class FName CallFunc_DeathDial_First_PCIntName, TArray<struct FDHDialogueLine>& K2Node_Select_Default, int32 CallFunc_GetNamedPCInt_Value_6, bool CallFunc_NotEqual_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StormMode_NPC_C", "StartingDialogue");

	Params::AStormMode_NPC_C_StartingDialogue_Params Parms{};

	Parms.CallFunc_Interact_Dial_Talked_Once_This_Run_PCIntName = CallFunc_Interact_Dial_Talked_Once_This_Run_PCIntName;
	Parms.CallFunc_GetNamedPCInt_Value = CallFunc_GetNamedPCInt_Value;
	Parms.CallFunc_GetCurrentSeedItemName_ReturnValue = CallFunc_GetCurrentSeedItemName_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_CheckPlayerInventoryForItem_Success = CallFunc_CheckPlayerInventoryForItem_Success;
	Parms.CallFunc_SeedDial_RefusedLast_PCIntName = CallFunc_SeedDial_RefusedLast_PCIntName;
	Parms.CallFunc_GetNamedPCInt_Value_1 = CallFunc_GetNamedPCInt_Value_1;
	Parms.CallFunc_SeedDial_NextIndex_PCIntName = CallFunc_SeedDial_NextIndex_PCIntName;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetNamedPCInt_Value_2 = CallFunc_GetNamedPCInt_Value_2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_InteractDial_MiscNextIndex_PCIntName = CallFunc_InteractDial_MiscNextIndex_PCIntName;
	Parms.CallFunc_InteractDial_MiscNextIndex_PCIntName_1 = CallFunc_InteractDial_MiscNextIndex_PCIntName_1;
	Parms.CallFunc_GetNamedPCInt_Value_3 = CallFunc_GetNamedPCInt_Value_3;
	Parms.CallFunc_GetNamedPCInt_Value_4 = CallFunc_GetNamedPCInt_Value_4;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_InteractDial_MiscNextIndex_PCIntName_2 = CallFunc_InteractDial_MiscNextIndex_PCIntName_2;
	Parms.CallFunc_GetSeedAnswers_Text = CallFunc_GetSeedAnswers_Text;
	Parms.CallFunc_GetSeedAnswers_IDs = CallFunc_GetSeedAnswers_IDs;
	Parms.CallFunc_GetNamedPCInt_Value_5 = CallFunc_GetNamedPCInt_Value_5;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetSeedAnswers_Text_1 = CallFunc_GetSeedAnswers_Text_1;
	Parms.CallFunc_GetSeedAnswers_IDs_1 = CallFunc_GetSeedAnswers_IDs_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetSeedAnswers_Text_2 = CallFunc_GetSeedAnswers_Text_2;
	Parms.CallFunc_GetSeedAnswers_IDs_2 = CallFunc_GetSeedAnswers_IDs_2;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_DeathDial_First_PCIntName = CallFunc_DeathDial_First_PCIntName;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetNamedPCInt_Value_6 = CallFunc_GetNamedPCInt_Value_6;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue_1 = CallFunc_NotEqual_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StormMode_NPC.StormMode_NPC_C.DisableShellsAndWeapons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CheckForDeathStatue                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EArmorTypes             Local_ArmorOnDeath                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_StormMode_C*     K2Node_DynamicCast_AsGameplay_PC_Storm_Mode                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AUsable_Armor_C*             CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AUsable_Armor_C*             CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AUsable_Weapon_C*>    CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm, HasGetValueTypeHash)
// class AUsable_Weapon_C*            CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AUsable_Armor_C*>     CallFunc_GetAllActorsOfClass_OutActors_1                         (ReferenceParm, HasGetValueTypeHash)

void AStormMode_NPC_C::DisableShellsAndWeapons(bool CheckForDeathStatue, enum class EArmorTypes Local_ArmorOnDeath, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AGameplayPC_StormMode_C* K2Node_DynamicCast_AsGameplay_PC_Storm_Mode, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_NotEqual_VectorVector_ReturnValue, class AUsable_Armor_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class AUsable_Armor_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, TArray<class AUsable_Weapon_C*>& CallFunc_GetAllActorsOfClass_OutActors, class AUsable_Weapon_C* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2, TArray<class AUsable_Armor_C*>& CallFunc_GetAllActorsOfClass_OutActors_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StormMode_NPC_C", "DisableShellsAndWeapons");

	Params::AStormMode_NPC_C_DisableShellsAndWeapons_Params Parms{};

	Parms.CheckForDeathStatue = CheckForDeathStatue;
	Parms.Local_ArmorOnDeath = Local_ArmorOnDeath;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsGameplay_PC_Storm_Mode = K2Node_DynamicCast_AsGameplay_PC_Storm_Mode;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_NotEqual_VectorVector_ReturnValue = CallFunc_NotEqual_VectorVector_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_1 = CallFunc_GetAllActorsOfClass_OutActors_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StormMode_NPC.StormMode_NPC_C.ApplyGhostMaterialToWalls
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AStaticMeshActor*            CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void AStormMode_NPC_C::ApplyGhostMaterialToWalls(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class AStaticMeshActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StormMode_NPC_C", "ApplyGhostMaterialToWalls");

	Params::AStormMode_NPC_C_ApplyGhostMaterialToWalls_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StormMode_NPC.StormMode_NPC_C.DialogueLeave
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AStormMode_NPC_C::DialogueLeave()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StormMode_NPC_C", "DialogueLeave");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StormMode_NPC.StormMode_NPC_C.StormModeLeave
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ILoadingScreenInterface_C>K2Node_DynamicCast_AsLoading_Screen_Interface                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ICharacterUtilInterface_C>K2Node_DynamicCast_AsCharacter_Util_Interface                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void AStormMode_NPC_C::StormModeLeave(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, TScriptInterface<class ILoadingScreenInterface_C> K2Node_DynamicCast_AsLoading_Screen_Interface, bool K2Node_DynamicCast_bSuccess_1, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, TScriptInterface<class ICharacterUtilInterface_C> K2Node_DynamicCast_AsCharacter_Util_Interface, bool K2Node_DynamicCast_bSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StormMode_NPC_C", "StormModeLeave");

	Params::AStormMode_NPC_C_StormModeLeave_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;
	Parms.K2Node_DynamicCast_AsLoading_Screen_Interface = K2Node_DynamicCast_AsLoading_Screen_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsCharacter_Util_Interface = K2Node_DynamicCast_AsCharacter_Util_Interface;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StormMode_NPC.StormMode_NPC_C.StormModeEnter_PostUnlock
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetMainLevelFromSave_StormMode_Level                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayGM_C*               CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ICharacterUtilInterface_C>K2Node_DynamicCast_AsCharacter_Util_Interface                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void AStormMode_NPC_C::StormModeEnter_PostUnlock(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess, class FName CallFunc_GetMainLevelFromSave_StormMode_Level, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class ICharacterUtilInterface_C> K2Node_DynamicCast_AsCharacter_Util_Interface, bool K2Node_DynamicCast_bSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StormMode_NPC_C", "StormModeEnter_PostUnlock");

	Params::AStormMode_NPC_C_StormModeEnter_PostUnlock_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface = K2Node_DynamicCast_AsGame_Play_PCInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetMainLevelFromSave_StormMode_Level = CallFunc_GetMainLevelFromSave_StormMode_Level;
	Parms.CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM = CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsCharacter_Util_Interface = K2Node_DynamicCast_AsCharacter_Util_Interface;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StormMode_NPC.StormMode_NPC_C.StormModeEnter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_StormMode_GetCurrentMainLevelFromSave_Level             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ICharacterUtilInterface_C>K2Node_DynamicCast_AsCharacter_Util_Interface                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ILoadingScreenInterface_C>K2Node_DynamicCast_AsLoading_Screen_Interface                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void AStormMode_NPC_C::StormModeEnter(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess_1, class FName CallFunc_StormMode_GetCurrentMainLevelFromSave_Level, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, TScriptInterface<class ICharacterUtilInterface_C> K2Node_DynamicCast_AsCharacter_Util_Interface, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class ILoadingScreenInterface_C> K2Node_DynamicCast_AsLoading_Screen_Interface, bool K2Node_DynamicCast_bSuccess_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StormMode_NPC_C", "StormModeEnter");

	Params::AStormMode_NPC_C_StormModeEnter_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface = K2Node_DynamicCast_AsGame_Play_PCInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_StormMode_GetCurrentMainLevelFromSave_Level = CallFunc_StormMode_GetCurrentMainLevelFromSave_Level;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsCharacter_Util_Interface = K2Node_DynamicCast_AsCharacter_Util_Interface;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsLoading_Screen_Interface = K2Node_DynamicCast_AsLoading_Screen_Interface;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StormMode_NPC.StormMode_NPC_C.OnActorUsed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           Local_Controller                                                 (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OnActorUsed_Success                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AStormMode_NPC_C::OnActorUsed(class APlayerController* Controller, bool* Success, class APlayerController* Local_Controller, bool CallFunc_OnActorUsed_Success, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StormMode_NPC_C", "OnActorUsed");

	Params::AStormMode_NPC_C_OnActorUsed_Params Parms{};

	Parms.Controller = Controller;
	Parms.Local_Controller = Local_Controller;
	Parms.CallFunc_OnActorUsed_Success = CallFunc_OnActorUsed_Success;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function StormMode_NPC.StormMode_NPC_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AStormMode_NPC_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StormMode_NPC_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StormMode_NPC.StormMode_NPC_C.NPC_Dialogue_Start
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStormMode_NPC_C::NPC_Dialogue_Start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StormMode_NPC_C", "NPC_Dialogue_Start");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StormMode_NPC.StormMode_NPC_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AStormMode_NPC_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StormMode_NPC_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StormMode_NPC.StormMode_NPC_C.OnBranchAnswered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Yes                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AStormMode_NPC_C::OnBranchAnswered(bool Yes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StormMode_NPC_C", "OnBranchAnswered");

	Params::AStormMode_NPC_C_OnBranchAnswered_Params Parms{};

	Parms.Yes = Yes;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StormMode_NPC.StormMode_NPC_C.OnAnswerSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStormMode_NPC_C::OnAnswerSelected(class FName ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StormMode_NPC_C", "OnAnswerSelected");

	Params::AStormMode_NPC_C_OnAnswerSelected_Params Parms{};

	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StormMode_NPC.StormMode_NPC_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStormMode_NPC_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StormMode_NPC_C", "ReceiveTick");

	Params::AStormMode_NPC_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StormMode_NPC.StormMode_NPC_C.OnAscended
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStormMode_NPC_C::OnAscended()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StormMode_NPC_C", "OnAscended");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StormMode_NPC.StormMode_NPC_C.ForceStartDialogue
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStormMode_NPC_C::ForceStartDialogue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StormMode_NPC_C", "ForceStartDialogue");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StormMode_NPC.StormMode_NPC_C.CheckForFirstRespawnDialogue
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStormMode_NPC_C::CheckForFirstRespawnDialogue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StormMode_NPC_C", "CheckForFirstRespawnDialogue");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StormMode_NPC.StormMode_NPC_C.HandleSeedRefuse
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStormMode_NPC_C::HandleSeedRefuse()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StormMode_NPC_C", "HandleSeedRefuse");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StormMode_NPC.StormMode_NPC_C.HandleSeedAccept
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStormMode_NPC_C::HandleSeedAccept()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StormMode_NPC_C", "HandleSeedAccept");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StormMode_NPC.StormMode_NPC_C.HandleLute
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStormMode_NPC_C::HandleLute()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StormMode_NPC_C", "HandleLute");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StormMode_NPC.StormMode_NPC_C.OnLutePlay
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStormMode_NPC_C::OnLutePlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StormMode_NPC_C", "OnLutePlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StormMode_NPC.StormMode_NPC_C.OnLutePlayed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStormMode_NPC_C::OnLutePlayed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StormMode_NPC_C", "OnLutePlayed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StormMode_NPC.StormMode_NPC_C.AscendYes
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStormMode_NPC_C::AscendYes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StormMode_NPC_C", "AscendYes");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StormMode_NPC.StormMode_NPC_C.AscendNo
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStormMode_NPC_C::AscendNo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StormMode_NPC_C", "AscendNo");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StormMode_NPC.StormMode_NPC_C.IntroYes
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStormMode_NPC_C::IntroYes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StormMode_NPC_C", "IntroYes");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StormMode_NPC.StormMode_NPC_C.IntroNo
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStormMode_NPC_C::IntroNo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StormMode_NPC_C", "IntroNo");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StormMode_NPC.StormMode_NPC_C.OnIntroCutsceneEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStormMode_NPC_C::OnIntroCutsceneEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StormMode_NPC_C", "OnIntroCutsceneEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StormMode_NPC.StormMode_NPC_C.OnAscendDialogue_End
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStormMode_NPC_C::OnAscendDialogue_End()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StormMode_NPC_C", "OnAscendDialogue_End");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StormMode_NPC.StormMode_NPC_C.OnAscendDialogue_Start
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStormMode_NPC_C::OnAscendDialogue_Start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StormMode_NPC_C", "OnAscendDialogue_Start");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StormMode_NPC.StormMode_NPC_C.OnTwinSister_StartTalking
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStormMode_NPC_C::OnTwinSister_StartTalking()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StormMode_NPC_C", "OnTwinSister_StartTalking");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StormMode_NPC.StormMode_NPC_C.OnTwinSister_FinishTalking
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStormMode_NPC_C::OnTwinSister_FinishTalking()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StormMode_NPC_C", "OnTwinSister_FinishTalking");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StormMode_NPC.StormMode_NPC_C.PlayEndingDialogue
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStormMode_NPC_C::PlayEndingDialogue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StormMode_NPC_C", "PlayEndingDialogue");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StormMode_NPC.StormMode_NPC_C.OnCutsceneEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStormMode_NPC_C::OnCutsceneEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StormMode_NPC_C", "OnCutsceneEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StormMode_NPC.StormMode_NPC_C.TestOutroCutscene
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStormMode_NPC_C::TestOutroCutscene()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StormMode_NPC_C", "TestOutroCutscene");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StormMode_NPC.StormMode_NPC_C.ExecuteUbergraph_StormMode_NPC
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetSeedDialogueIndex_Value                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_StormModeProgress  CallFunc_GetStormModeProgress_Progress                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_StormModeContentIsEnabled_Enabled_                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_Yes                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_ID                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetAscensionName_ID                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNamedPCInt_Value                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FDHDialogueLine>     CallFunc_SelectAndUpdateRespawnDialogue_Array                    (ReferenceParm, HasGetValueTypeHash)
// class FName                        CallFunc_DeathDial_DiedInSM_PCIntName                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNamedPCInt_Value_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_SeedDial_NextIndex_PCIntName                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNamedPCInt_Value_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_SeedDial_RefusedLast_PCIntName                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_SeedDial_RefusedLast_PCIntName_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNamedPCInt_Value_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetAscensionName_ID_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetCurrentSeedItemName_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNamedPCInt_Value_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayGM_C*               CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayGM_C*               CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_LuteDial_PCIntName                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_LuteDial_PCIntName_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNamedPCInt_Value_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm, HasGetValueTypeHash)
// class FName                        CallFunc_SM_IntroDial_PCIntName                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_SM_IntroDial_PCIntName_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNamedPCInt_Value_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                K2Node_MakeArray_Array_1                                         (ConstParm, ReferenceParm, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_StormModeProgress  CallFunc_GetStormModeProgress_Progress_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FText>                K2Node_MakeArray_Array_2                                         (ConstParm, ReferenceParm, HasGetValueTypeHash)
// TArray<class FName>                K2Node_MakeArray_Array_3                                         (ConstParm, ReferenceParm, HasGetValueTypeHash)
// TArray<class FText>                K2Node_MakeArray_Array_4                                         (ConstParm, ReferenceParm, HasGetValueTypeHash)
// TArray<class FName>                K2Node_MakeArray_Array_5                                         (ConstParm, ReferenceParm, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Interact_Dial_Talked_Once_This_Run_PCIntName            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetYesText_Yes                                          (None)
// class FText                        CallFunc_GetNoText_No                                            (None)
// int32                              CallFunc_GetSeedDialogueIndex_Value_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FText>                K2Node_MakeArray_Array_6                                         (ConstParm, ReferenceParm, HasGetValueTypeHash)
// TArray<struct FDHDialogueLine>     K2Node_Select_Default                                            (ConstParm, ReferenceParm, HasGetValueTypeHash)
// class FName                        CallFunc_SeedDial_NextIndex_PCIntName_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetSeedDialogueIndex_Value_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetSeedDialogueIndex_Value_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetYesText_Yes_1                                        (None)
// class FText                        CallFunc_GetNoText_No_1                                          (None)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FText>                K2Node_MakeArray_Array_7                                         (ConstParm, ReferenceParm, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_StormMode_IsUnlockedForSlot_Unlocked_                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ULevelSequencePlayer*        CallFunc_GetSequencePlayer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFogCultistNPC_C*            K2Node_DynamicCast_AsFog_Cultist_NPC                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetActorLocationAndRotation_SweepHitResult           (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocationAndRotation_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ULevelSequencePlayer*        CallFunc_GetSequencePlayer_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FText>                CallFunc_BlankAnswer_Text                                        (ReferenceParm, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_BlankAnswer_ID                                          (ReferenceParm, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// TArray<class FText>                CallFunc_BlankAnswer_Text_1                                      (ReferenceParm, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_BlankAnswer_ID_1                                        (ReferenceParm, HasGetValueTypeHash)
// TArray<class FText>                CallFunc_BlankAnswer_Text_2                                      (ReferenceParm, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_BlankAnswer_ID_2                                        (ReferenceParm, HasGetValueTypeHash)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_2(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_3(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class AGameplayGM_C*               CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsInCutscene_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsInCutscene_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetAscensionName_ID_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_2                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_4(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetCurrentSeedItemName_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_7                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_8                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_3                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_10                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_4                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_11                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_SeedDial_NextIndex_PCIntName_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStormMode_NPC_C::ExecuteUbergraph_StormMode_NPC(int32 EntryPoint, int32 CallFunc_GetSeedDialogueIndex_Value, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC, bool K2Node_DynamicCast_bSuccess, enum class Enum_StormModeProgress CallFunc_GetStormModeProgress_Progress, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_StormModeContentIsEnabled_Enabled_, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_CustomEvent_Yes, class FName K2Node_CustomEvent_ID, float K2Node_Event_DeltaSeconds, bool K2Node_SwitchName_CmpSuccess, class FName CallFunc_GetAscensionName_ID, int32 CallFunc_GetNamedPCInt_Value, bool K2Node_SwitchInteger_CmpSuccess, TArray<struct FDHDialogueLine>& CallFunc_SelectAndUpdateRespawnDialogue_Array, class FName CallFunc_DeathDial_DiedInSM_PCIntName, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, int32 CallFunc_GetNamedPCInt_Value_1, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class FName CallFunc_SeedDial_NextIndex_PCIntName, int32 CallFunc_GetNamedPCInt_Value_2, class FName CallFunc_SeedDial_RefusedLast_PCIntName, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 Temp_int_Variable, class FName CallFunc_SeedDial_RefusedLast_PCIntName_1, int32 CallFunc_GetNamedPCInt_Value_3, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, class FName CallFunc_GetAscensionName_ID_1, class FName CallFunc_GetCurrentSeedItemName_ReturnValue, int32 CallFunc_GetNamedPCInt_Value_4, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, bool K2Node_SwitchInteger_CmpSuccess_1, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1, bool K2Node_DynamicCast_bSuccess_2, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_1, class FName CallFunc_LuteDial_PCIntName, class FName CallFunc_LuteDial_PCIntName_1, int32 CallFunc_GetNamedPCInt_Value_5, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, TArray<class FName>& K2Node_MakeArray_Array, class FName CallFunc_SM_IntroDial_PCIntName, class FName CallFunc_SM_IntroDial_PCIntName_1, int32 CallFunc_GetNamedPCInt_Value_6, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, bool CallFunc_IsValid_ReturnValue, TArray<class FName>& K2Node_MakeArray_Array_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_1, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC_2, bool K2Node_DynamicCast_bSuccess_3, enum class Enum_StormModeProgress CallFunc_GetStormModeProgress_Progress_1, bool CallFunc_IsValid_ReturnValue_1, TArray<class FText>& K2Node_MakeArray_Array_2, TArray<class FName>& K2Node_MakeArray_Array_3, TArray<class FText>& K2Node_MakeArray_Array_4, TArray<class FName>& K2Node_MakeArray_Array_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue_2, class FName CallFunc_Interact_Dial_Talked_Once_This_Run_PCIntName, class FText CallFunc_GetYesText_Yes, class FText CallFunc_GetNoText_No, int32 CallFunc_GetSeedDialogueIndex_Value_1, TArray<class FText>& K2Node_MakeArray_Array_6, TArray<struct FDHDialogueLine>& K2Node_Select_Default, class FName CallFunc_SeedDial_NextIndex_PCIntName_1, int32 CallFunc_GetSeedDialogueIndex_Value_2, int32 CallFunc_GetSeedDialogueIndex_Value_3, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_4, class FText CallFunc_GetYesText_Yes_1, class FText CallFunc_GetNoText_No_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, TArray<class FText>& K2Node_MakeArray_Array_7, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_1, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_StormMode_IsUnlockedForSlot_Unlocked_, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_NotEqual_ByteByte_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class AFogCultistNPC_C* K2Node_DynamicCast_AsFog_Cultist_NPC, bool K2Node_DynamicCast_bSuccess_5, bool CallFunc_IsValid_ReturnValue_3, const struct FHitResult& CallFunc_K2_SetActorLocationAndRotation_SweepHitResult, bool CallFunc_K2_SetActorLocationAndRotation_ReturnValue, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue_1, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_1, TArray<class FText>& CallFunc_BlankAnswer_Text, TArray<class FName>& CallFunc_BlankAnswer_ID, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, TArray<class FText>& CallFunc_BlankAnswer_Text_1, TArray<class FName>& CallFunc_BlankAnswer_ID_1, TArray<class FText>& CallFunc_BlankAnswer_Text_2, TArray<class FName>& CallFunc_BlankAnswer_ID_2, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_2, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_3, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess_6, class APlayerController* CallFunc_GetPlayerController_ReturnValue_4, bool CallFunc_GetIsInCutscene_ReturnValue, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_1, bool K2Node_DynamicCast_bSuccess_7, bool CallFunc_GetIsInCutscene_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_4, bool CallFunc_Not_PreBool_ReturnValue_5, class FName CallFunc_GetAscensionName_ID_2, int32 CallFunc_MakeLiteralInt_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_5, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_2, bool K2Node_DynamicCast_bSuccess_8, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class FName CallFunc_GetCurrentSeedItemName_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_6, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC_3, bool K2Node_DynamicCast_bSuccess_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class APlayerController* CallFunc_GetPlayerController_ReturnValue_7, class APlayerController* CallFunc_GetPlayerController_ReturnValue_8, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_3, bool K2Node_DynamicCast_bSuccess_10, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_4, bool K2Node_DynamicCast_bSuccess_11, class FName CallFunc_SeedDial_NextIndex_PCIntName_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StormMode_NPC_C", "ExecuteUbergraph_StormMode_NPC");

	Params::AStormMode_NPC_C_ExecuteUbergraph_StormMode_NPC_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetSeedDialogueIndex_Value = CallFunc_GetSeedDialogueIndex_Value;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC = K2Node_DynamicCast_AsBPI_Storm_Mode_PC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetStormModeProgress_Progress = CallFunc_GetStormModeProgress_Progress;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_StormModeContentIsEnabled_Enabled_ = CallFunc_StormModeContentIsEnabled_Enabled_;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CustomEvent_Yes = K2Node_CustomEvent_Yes;
	Parms.K2Node_CustomEvent_ID = K2Node_CustomEvent_ID;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.CallFunc_GetAscensionName_ID = CallFunc_GetAscensionName_ID;
	Parms.CallFunc_GetNamedPCInt_Value = CallFunc_GetNamedPCInt_Value;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_SelectAndUpdateRespawnDialogue_Array = CallFunc_SelectAndUpdateRespawnDialogue_Array;
	Parms.CallFunc_DeathDial_DiedInSM_PCIntName = CallFunc_DeathDial_DiedInSM_PCIntName;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;
	Parms.CallFunc_GetNamedPCInt_Value_1 = CallFunc_GetNamedPCInt_Value_1;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_SeedDial_NextIndex_PCIntName = CallFunc_SeedDial_NextIndex_PCIntName;
	Parms.CallFunc_GetNamedPCInt_Value_2 = CallFunc_GetNamedPCInt_Value_2;
	Parms.CallFunc_SeedDial_RefusedLast_PCIntName = CallFunc_SeedDial_RefusedLast_PCIntName;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_SeedDial_RefusedLast_PCIntName_1 = CallFunc_SeedDial_RefusedLast_PCIntName_1;
	Parms.CallFunc_GetNamedPCInt_Value_3 = CallFunc_GetNamedPCInt_Value_3;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_GetAscensionName_ID_1 = CallFunc_GetAscensionName_ID_1;
	Parms.CallFunc_GetCurrentSeedItemName_ReturnValue = CallFunc_GetCurrentSeedItemName_ReturnValue;
	Parms.CallFunc_GetNamedPCInt_Value_4 = CallFunc_GetNamedPCInt_Value_4;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.K2Node_SwitchInteger_CmpSuccess_1 = K2Node_SwitchInteger_CmpSuccess_1;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1 = K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM = CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM;
	Parms.CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_1 = CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_1;
	Parms.CallFunc_LuteDial_PCIntName = CallFunc_LuteDial_PCIntName;
	Parms.CallFunc_LuteDial_PCIntName_1 = CallFunc_LuteDial_PCIntName_1;
	Parms.CallFunc_GetNamedPCInt_Value_5 = CallFunc_GetNamedPCInt_Value_5;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_SM_IntroDial_PCIntName = CallFunc_SM_IntroDial_PCIntName;
	Parms.CallFunc_SM_IntroDial_PCIntName_1 = CallFunc_SM_IntroDial_PCIntName_1;
	Parms.CallFunc_GetNamedPCInt_Value_6 = CallFunc_GetNamedPCInt_Value_6;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_3 = CallFunc_EqualEqual_IntInt_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_1 = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_1;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC_2 = K2Node_DynamicCast_AsBPI_Storm_Mode_PC_2;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetStormModeProgress_Progress_1 = CallFunc_GetStormModeProgress_Progress_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;
	Parms.K2Node_MakeArray_Array_4 = K2Node_MakeArray_Array_4;
	Parms.K2Node_MakeArray_Array_5 = K2Node_MakeArray_Array_5;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Interact_Dial_Talked_Once_This_Run_PCIntName = CallFunc_Interact_Dial_Talked_Once_This_Run_PCIntName;
	Parms.CallFunc_GetYesText_Yes = CallFunc_GetYesText_Yes;
	Parms.CallFunc_GetNoText_No = CallFunc_GetNoText_No;
	Parms.CallFunc_GetSeedDialogueIndex_Value_1 = CallFunc_GetSeedDialogueIndex_Value_1;
	Parms.K2Node_MakeArray_Array_6 = K2Node_MakeArray_Array_6;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_SeedDial_NextIndex_PCIntName_1 = CallFunc_SeedDial_NextIndex_PCIntName_1;
	Parms.CallFunc_GetSeedDialogueIndex_Value_2 = CallFunc_GetSeedDialogueIndex_Value_2;
	Parms.CallFunc_GetSeedDialogueIndex_Value_3 = CallFunc_GetSeedDialogueIndex_Value_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_4 = CallFunc_EqualEqual_IntInt_ReturnValue_4;
	Parms.CallFunc_GetYesText_Yes_1 = CallFunc_GetYesText_Yes_1;
	Parms.CallFunc_GetNoText_No_1 = CallFunc_GetNoText_No_1;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.K2Node_MakeArray_Array_7 = K2Node_MakeArray_Array_7;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_1 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_StormMode_IsUnlockedForSlot_Unlocked_ = CallFunc_StormMode_IsUnlockedForSlot_Unlocked_;
	Parms.CallFunc_GetSequencePlayer_ReturnValue = CallFunc_GetSequencePlayer_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsFog_Cultist_NPC = K2Node_DynamicCast_AsFog_Cultist_NPC;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_K2_SetActorLocationAndRotation_SweepHitResult = CallFunc_K2_SetActorLocationAndRotation_SweepHitResult;
	Parms.CallFunc_K2_SetActorLocationAndRotation_ReturnValue = CallFunc_K2_SetActorLocationAndRotation_ReturnValue;
	Parms.CallFunc_GetSequencePlayer_ReturnValue_1 = CallFunc_GetSequencePlayer_ReturnValue_1;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base = CallFunc_GetCharacterAs0_Base_As0_Base;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base_1 = CallFunc_GetCharacterAs0_Base_As0_Base_1;
	Parms.CallFunc_BlankAnswer_Text = CallFunc_BlankAnswer_Text;
	Parms.CallFunc_BlankAnswer_ID = CallFunc_BlankAnswer_ID;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_BlankAnswer_Text_1 = CallFunc_BlankAnswer_Text_1;
	Parms.CallFunc_BlankAnswer_ID_1 = CallFunc_BlankAnswer_ID_1;
	Parms.CallFunc_BlankAnswer_Text_2 = CallFunc_BlankAnswer_Text_2;
	Parms.CallFunc_BlankAnswer_ID_2 = CallFunc_BlankAnswer_ID_2;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_2 = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_2;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_3 = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_3;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_2 = CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_2;
	Parms.CallFunc_GetPlayerController_ReturnValue_3 = CallFunc_GetPlayerController_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface = K2Node_DynamicCast_AsGame_Play_PCInterface;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_GetPlayerController_ReturnValue_4 = CallFunc_GetPlayerController_ReturnValue_4;
	Parms.CallFunc_GetIsInCutscene_ReturnValue = CallFunc_GetIsInCutscene_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_1 = K2Node_DynamicCast_AsGame_Play_PCInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.CallFunc_GetIsInCutscene_ReturnValue_1 = CallFunc_GetIsInCutscene_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_4 = CallFunc_Not_PreBool_ReturnValue_4;
	Parms.CallFunc_Not_PreBool_ReturnValue_5 = CallFunc_Not_PreBool_ReturnValue_5;
	Parms.CallFunc_GetAscensionName_ID_2 = CallFunc_GetAscensionName_ID_2;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_5 = CallFunc_GetPlayerController_ReturnValue_5;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_2 = K2Node_DynamicCast_AsGame_Play_PCInterface_2;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_4 = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetCurrentSeedItemName_ReturnValue_1 = CallFunc_GetCurrentSeedItemName_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_6 = CallFunc_GetPlayerController_ReturnValue_6;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC_3 = K2Node_DynamicCast_AsBPI_Storm_Mode_PC_3;
	Parms.K2Node_DynamicCast_bSuccess_9 = K2Node_DynamicCast_bSuccess_9;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_GetPlayerController_ReturnValue_7 = CallFunc_GetPlayerController_ReturnValue_7;
	Parms.CallFunc_GetPlayerController_ReturnValue_8 = CallFunc_GetPlayerController_ReturnValue_8;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_3 = K2Node_DynamicCast_AsGame_Play_PCInterface_3;
	Parms.K2Node_DynamicCast_bSuccess_10 = K2Node_DynamicCast_bSuccess_10;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_4 = K2Node_DynamicCast_AsGame_Play_PCInterface_4;
	Parms.K2Node_DynamicCast_bSuccess_11 = K2Node_DynamicCast_bSuccess_11;
	Parms.CallFunc_SeedDial_NextIndex_PCIntName_2 = CallFunc_SeedDial_NextIndex_PCIntName_2;

	UObject::ProcessEvent(Func, &Parms);

}

}



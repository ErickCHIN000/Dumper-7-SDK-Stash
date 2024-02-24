#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_EncyclopediaEntry.WBP_EncyclopediaEntry_C
// (None)

class UClass* UWBP_EncyclopediaEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_EncyclopediaEntry_C");

	return Clss;
}


// WBP_EncyclopediaEntry_C WBP_EncyclopediaEntry.Default__WBP_EncyclopediaEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_EncyclopediaEntry_C* UWBP_EncyclopediaEntry_C::GetDefaultObj()
{
	static class UWBP_EncyclopediaEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_EncyclopediaEntry_C*>(UWBP_EncyclopediaEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_EncyclopediaEntry.WBP_EncyclopediaEntry_C.SetImage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEncyclopediaEntry*          Entry                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ULore*                       K2Node_DynamicCast_AsLore                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USecretClue*                 K2Node_DynamicCast_AsSecret_Clue                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGISProgression*             CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 CallFunc_GetLoreImage_ReturnValue                                (None)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASophiaCharacter*            K2Node_DynamicCast_AsSophia_Character                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ASophiaGameState*            K2Node_DynamicCast_AsSophia_Game_State                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ASecretSignifier*            CallFunc_GetSecretForEntryId_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSecretUnlocked_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_EncyclopediaEntry_C::SetImage(class UEncyclopediaEntry* Entry, bool Temp_bool_Variable, class ULore* K2Node_DynamicCast_AsLore, bool K2Node_DynamicCast_bSuccess, class USecretClue* K2Node_DynamicCast_AsSecret_Clue, bool K2Node_DynamicCast_bSuccess_1, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UGISProgression* CallFunc_GetGameInstanceSubsystem_ReturnValue, const struct FSlateBrush& CallFunc_GetLoreImage_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ASophiaCharacter* K2Node_DynamicCast_AsSophia_Character, bool K2Node_DynamicCast_bSuccess_2, class ASophiaGameState* K2Node_DynamicCast_AsSophia_Game_State, bool K2Node_DynamicCast_bSuccess_3, class ASecretSignifier* CallFunc_GetSecretForEntryId_ReturnValue, bool CallFunc_IsSecretUnlocked_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_EncyclopediaEntry_C", "SetImage");

	Params::UWBP_EncyclopediaEntry_C_SetImage_Params Parms{};

	Parms.Entry = Entry;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_DynamicCast_AsLore = K2Node_DynamicCast_AsLore;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsSecret_Clue = K2Node_DynamicCast_AsSecret_Clue;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetLoreImage_ReturnValue = CallFunc_GetLoreImage_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsSophia_Character = K2Node_DynamicCast_AsSophia_Character;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsSophia_Game_State = K2Node_DynamicCast_AsSophia_Game_State;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetSecretForEntryId_ReturnValue = CallFunc_GetSecretForEntryId_ReturnValue;
	Parms.CallFunc_IsSecretUnlocked_ReturnValue = CallFunc_IsSecretUnlocked_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_EncyclopediaEntry.WBP_EncyclopediaEntry_C.SetEntry
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEncyclopediaEntry*          NewParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_EncyclopediaEntry_C::SetEntry(class UEncyclopediaEntry* NewParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_EncyclopediaEntry_C", "SetEntry");

	Params::UWBP_EncyclopediaEntry_C_SetEntry_Params Parms{};

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_EncyclopediaEntry.WBP_EncyclopediaEntry_C.BndEvt__WBP_EncyclopediaEntry_WBP_SophiaButton_44_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_EncyclopediaEntry_C::BndEvt__WBP_EncyclopediaEntry_WBP_SophiaButton_44_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_EncyclopediaEntry_C", "BndEvt__WBP_EncyclopediaEntry_WBP_SophiaButton_44_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_EncyclopediaEntry.WBP_EncyclopediaEntry_C.ExecuteUbergraph_WBP_EncyclopediaEntry
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_EncyclopediaLoreModalWindow_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetOwningPlayerPawn_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASophiaCharacter*            K2Node_DynamicCast_AsSophia_Character                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UEncyclopediaEntry*          K2Node_CustomEvent_NewParam                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULore*                       K2Node_DynamicCast_AsLore                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWBP_EncyclopediaModalWindow_C*CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_EncyclopediaEntry_C::ExecuteUbergraph_WBP_EncyclopediaEntry(int32 EntryPoint, class UWBP_EncyclopediaLoreModalWindow_C* CallFunc_Create_ReturnValue, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class ASophiaCharacter* K2Node_DynamicCast_AsSophia_Character, bool K2Node_DynamicCast_bSuccess, class UEncyclopediaEntry* K2Node_CustomEvent_NewParam, class ULore* K2Node_DynamicCast_AsLore, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, class UWBP_EncyclopediaModalWindow_C* CallFunc_Create_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_EncyclopediaEntry_C", "ExecuteUbergraph_WBP_EncyclopediaEntry");

	Params::UWBP_EncyclopediaEntry_C_ExecuteUbergraph_WBP_EncyclopediaEntry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue = CallFunc_GetOwningPlayerPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsSophia_Character = K2Node_DynamicCast_AsSophia_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_NewParam = K2Node_CustomEvent_NewParam;
	Parms.K2Node_DynamicCast_AsLore = K2Node_DynamicCast_AsLore;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}



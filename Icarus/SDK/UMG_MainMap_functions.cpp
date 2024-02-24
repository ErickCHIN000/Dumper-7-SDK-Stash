#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_MainMap.UMG_MainMap_C
// (None)

class UClass* UUMG_MainMap_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_MainMap_C");

	return Clss;
}


// UMG_MainMap_C UMG_MainMap.Default__UMG_MainMap_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_MainMap_C* UUMG_MainMap_C::GetDefaultObj()
{
	static class UUMG_MainMap_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_MainMap_C*>(UUMG_MainMap_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_MainMap.UMG_MainMap_C.ConnectedPlayerInitialised
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FConnectedPlayer            ConnectedPlayer                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUMG_MainMap_C::ConnectedPlayerInitialised(struct FConnectedPlayer& ConnectedPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MainMap_C", "ConnectedPlayerInitialised");

	Params::UUMG_MainMap_C_ConnectedPlayerInitialised_Params Parms{};

	Parms.ConnectedPlayer = ConnectedPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_MainMap.UMG_MainMap_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_MainMap_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MainMap_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_MainMap.UMG_MainMap_C.UpdateMapVisibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_MainMap_C::UpdateMapVisibility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MainMap_C", "UpdateMapVisibility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_MainMap.UMG_MainMap_C.OnLocalPlayerStatsChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_MainMap_C::OnLocalPlayerStatsChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MainMap_C", "OnLocalPlayerStatsChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_MainMap.UMG_MainMap_C.ExecuteUbergraph_UMG_MainMap
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (ConstParm)
// struct FKey                        Temp_struct_Variable                                             (ConstParm, HasGetValueTypeHash)
// struct FKeybindingsRowHandle       Temp_struct_Variable_1                                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_1                                             (ConstParm)
// struct FKey                        Temp_struct_Variable_2                                           (ConstParm, HasGetValueTypeHash)
// class UUMG_PhysicalKeyPrompt_C*    CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_PhysicalKeyPrompt_C*    CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_KeybindPrompt_C*        CallFunc_Create_ReturnValue_2                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_PhysicalKeyPrompt_C*    CallFunc_Create_ReturnValue_3                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        Temp_struct_Variable_3                                           (ConstParm, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue_1                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue_2                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue_3                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_2                                             (ConstParm)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UConnectedPlayers*           CallFunc_GetConnectedPlayers_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FConnectedPlayer            K2Node_CustomEvent_ConnectedPlayer                               (ConstParm)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EValid                  CallFunc_GetIcarusPlayerCharacter_IsValid                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacter*      CallFunc_GetIcarusPlayerCharacter_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetStat_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetStat_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        CallFunc_GetVisibility_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_MainMap_C::ExecuteUbergraph_UMG_MainMap(int32 EntryPoint, class FText Temp_text_Variable, const struct FKey& Temp_struct_Variable, const struct FKeybindingsRowHandle& Temp_struct_Variable_1, class FText Temp_text_Variable_1, const struct FKey& Temp_struct_Variable_2, class UUMG_PhysicalKeyPrompt_C* CallFunc_Create_ReturnValue, class UUMG_PhysicalKeyPrompt_C* CallFunc_Create_ReturnValue_1, class UUMG_KeybindPrompt_C* CallFunc_Create_ReturnValue_2, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UUMG_PhysicalKeyPrompt_C* CallFunc_Create_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, const struct FKey& Temp_struct_Variable_3, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue_1, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue_2, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue_3, class FText Temp_text_Variable_2, enum class ESlateVisibility K2Node_Select_Default, class UConnectedPlayers* CallFunc_GetConnectedPlayers_ReturnValue, const struct FConnectedPlayer& K2Node_CustomEvent_ConnectedPlayer, bool CallFunc_IsLocallyControlled_ReturnValue, enum class EValid CallFunc_GetIcarusPlayerCharacter_IsValid, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_GetStat_ReturnValue, int32 CallFunc_GetStat_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MainMap_C", "ExecuteUbergraph_UMG_MainMap");

	Params::UUMG_MainMap_C_ExecuteUbergraph_UMG_MainMap_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue_2 = CallFunc_Create_ReturnValue_2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_Create_ReturnValue_3 = CallFunc_Create_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue = CallFunc_AddChildToHorizontalBox_ReturnValue;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue_1 = CallFunc_AddChildToHorizontalBox_ReturnValue_1;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue_2 = CallFunc_AddChildToHorizontalBox_ReturnValue_2;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue_3 = CallFunc_AddChildToHorizontalBox_ReturnValue_3;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetConnectedPlayers_ReturnValue = CallFunc_GetConnectedPlayers_ReturnValue;
	Parms.K2Node_CustomEvent_ConnectedPlayer = K2Node_CustomEvent_ConnectedPlayer;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerCharacter_IsValid = CallFunc_GetIcarusPlayerCharacter_IsValid;
	Parms.CallFunc_GetIcarusPlayerCharacter_ReturnValue = CallFunc_GetIcarusPlayerCharacter_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetStat_ReturnValue = CallFunc_GetStat_ReturnValue;
	Parms.CallFunc_GetStat_ReturnValue_1 = CallFunc_GetStat_ReturnValue_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_1 = CallFunc_LessEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetVisibility_ReturnValue = CallFunc_GetVisibility_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}



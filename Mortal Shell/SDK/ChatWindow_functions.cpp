#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ChatWindow.ChatWindow_C
// (None)

class UClass* UChatWindow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChatWindow_C");

	return Clss;
}


// ChatWindow_C ChatWindow.Default__ChatWindow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChatWindow_C* UChatWindow_C::GetDefaultObj()
{
	static class UChatWindow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChatWindow_C*>(UChatWindow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ChatWindow.ChatWindow_C.BndEvt__ChatEntry_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class ETextCommit             CommitMethod                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChatWindow_C::BndEvt__ChatEntry_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(class FText& Text, enum class ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChatWindow_C", "BndEvt__ChatEntry_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature");

	Params::UChatWindow_C_BndEvt__ChatEntry_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChatWindow.ChatWindow_C.UpdateGameLogWindow
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UChatWindow_C::UpdateGameLogWindow(class FText Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChatWindow_C", "UpdateGameLogWindow");

	Params::UChatWindow_C_UpdateGameLogWindow_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChatWindow.ChatWindow_C.UpdateChatWindow
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Sender                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UChatWindow_C::UpdateChatWindow(class FText Sender, class FText Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChatWindow_C", "UpdateChatWindow");

	Params::UChatWindow_C_UpdateChatWindow_Params Parms{};

	Parms.Sender = Sender;
	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChatWindow.ChatWindow_C.RemoveGameLogWindow
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChatWindow_C::RemoveGameLogWindow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChatWindow_C", "RemoveGameLogWindow");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChatWindow.ChatWindow_C.ExecuteUbergraph_ChatWindow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UChatText_C*                 CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UChatText_C*                 CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_ComponentBoundEvent_Text                                  (ConstParm)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_C*               K2Node_DynamicCast_AsGameplay_PC                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ALobbyPC_C*                  K2Node_DynamicCast_AsLobby_PC                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_CustomEvent_Text_1                                        (None)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue_1                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_Sender                                        (None)
// class FText                        K2Node_CustomEvent_Text                                          (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UChatWindow_C::ExecuteUbergraph_ChatWindow(int32 EntryPoint, class UChatText_C* CallFunc_Create_ReturnValue, class UChatText_C* CallFunc_Create_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue, class FText K2Node_ComponentBoundEvent_Text, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class AGameplayPC_C* K2Node_DynamicCast_AsGameplay_PC, bool K2Node_DynamicCast_bSuccess, class ALobbyPC_C* K2Node_DynamicCast_AsLobby_PC, bool K2Node_DynamicCast_bSuccess_1, class FText K2Node_CustomEvent_Text_1, class UPanelSlot* CallFunc_AddChild_ReturnValue_1, class FText K2Node_CustomEvent_Sender, class FText K2Node_CustomEvent_Text, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChatWindow_C", "ExecuteUbergraph_ChatWindow");

	Params::UChatWindow_C_ExecuteUbergraph_ChatWindow_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Text = K2Node_ComponentBoundEvent_Text;
	Parms.K2Node_ComponentBoundEvent_CommitMethod = K2Node_ComponentBoundEvent_CommitMethod;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_DynamicCast_AsGameplay_PC = K2Node_DynamicCast_AsGameplay_PC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsLobby_PC = K2Node_DynamicCast_AsLobby_PC;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CustomEvent_Text_1 = K2Node_CustomEvent_Text_1;
	Parms.CallFunc_AddChild_ReturnValue_1 = CallFunc_AddChild_ReturnValue_1;
	Parms.K2Node_CustomEvent_Sender = K2Node_CustomEvent_Sender;
	Parms.K2Node_CustomEvent_Text = K2Node_CustomEvent_Text;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}



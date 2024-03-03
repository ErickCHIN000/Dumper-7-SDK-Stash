#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_AbilityTree.WB_AbilityTree_C
// (None)

class UClass* UWB_AbilityTree_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_AbilityTree_C");

	return Clss;
}


// WB_AbilityTree_C WB_AbilityTree.Default__WB_AbilityTree_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_AbilityTree_C* UWB_AbilityTree_C::GetDefaultObj()
{
	static class UWB_AbilityTree_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_AbilityTree_C*>(UWB_AbilityTree_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_AbilityTree.WB_AbilityTree_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FEventReply UWB_AbilityTree_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_AbilityTree_C", "OnFocusReceived");

	Params::UWB_AbilityTree_C_OnFocusReceived_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InFocusEvent = InFocusEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_AbilityTree.WB_AbilityTree_C.GetAbilityPoints
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

class FText UWB_AbilityTree_C::GetAbilityPoints(class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_AbilityTree_C", "GetAbilityPoints");

	Params::UWB_AbilityTree_C_GetAbilityPoints_Params Parms{};

	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_AbilityTree.WB_AbilityTree_C.Get All AbilitySlots
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UWB_AbilityTreeSlot_C*>Array                                                            (Parm, OutParm, ContainsInstancedReference)
// TArray<class UWB_AbilityTreeSlot_C*>K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)

void UWB_AbilityTree_C::Get_All_AbilitySlots(TArray<class UWB_AbilityTreeSlot_C*>* Array, TArray<class UWB_AbilityTreeSlot_C*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_AbilityTree_C", "Get All AbilitySlots");

	Params::UWB_AbilityTree_C_Get_All_AbilitySlots_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	if (Array != nullptr)
		*Array = std::move(Parms.Array);

}


// Function WB_AbilityTree.WB_AbilityTree_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWB_AbilityTree_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_AbilityTree_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_AbilityTree.WB_AbilityTree_C.Create AbilityTree
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_AbilityTree_C::Create_AbilityTree()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_AbilityTree_C", "Create AbilityTree");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_AbilityTree.WB_AbilityTree_C.ExecuteUbergraph_WB_AbilityTree
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CombatCharacter_C*       CallFunc_Get_Player_Reference_Player                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWB_AbilityTreeSlot_C*>CallFunc_Get_All_AbilitySlots_Array                              (ReferenceParm, ContainsInstancedReference)
// TArray<class UWB_AbilityTreeSlot_C*>CallFunc_Get_All_AbilitySlots_Array_1                            (ReferenceParm, ContainsInstancedReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_AbilityTreeSlot_C*       CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_AbilityTree_C::ExecuteUbergraph_WB_AbilityTree(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, int32 Temp_int_Array_Index_Variable, class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player, TArray<class UWB_AbilityTreeSlot_C*>& CallFunc_Get_All_AbilitySlots_Array, TArray<class UWB_AbilityTreeSlot_C*>& CallFunc_Get_All_AbilitySlots_Array_1, int32 Temp_int_Loop_Counter_Variable, class UWB_AbilityTreeSlot_C* CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_AbilityTree_C", "ExecuteUbergraph_WB_AbilityTree");

	Params::UWB_AbilityTree_C_ExecuteUbergraph_WB_AbilityTree_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Get_Player_Reference_Player = CallFunc_Get_Player_Reference_Player;
	Parms.CallFunc_Get_All_AbilitySlots_Array = CallFunc_Get_All_AbilitySlots_Array;
	Parms.CallFunc_Get_All_AbilitySlots_Array_1 = CallFunc_Get_All_AbilitySlots_Array_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}



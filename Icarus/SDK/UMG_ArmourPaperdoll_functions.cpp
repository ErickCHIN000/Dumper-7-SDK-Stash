#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_ArmourPaperdoll.UMG_ArmourPaperdoll_C
// (None)

class UClass* UUMG_ArmourPaperdoll_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_ArmourPaperdoll_C");

	return Clss;
}


// UMG_ArmourPaperdoll_C UMG_ArmourPaperdoll.Default__UMG_ArmourPaperdoll_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_ArmourPaperdoll_C* UUMG_ArmourPaperdoll_C::GetDefaultObj()
{
	static class UUMG_ArmourPaperdoll_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_ArmourPaperdoll_C*>(UUMG_ArmourPaperdoll_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_ArmourPaperdoll.UMG_ArmourPaperdoll_C.UpdateElement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Durability                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ArmourPaperdoll_C::UpdateElement(int32 Slot, float Durability, bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ArmourPaperdoll_C", "UpdateElement");

	Params::UUMG_ArmourPaperdoll_C_UpdateElement_Params Parms{};

	Parms.Slot = Slot;
	Parms.Durability = Durability;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ArmourPaperdoll.UMG_ArmourPaperdoll_C.SetPaperdollStyle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventory*                  EquipmentInventory                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Show                                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 Two0_                                                            (Edit, BlueprintVisible)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   CallFunc_GetItem_ReturnValue                                     (ContainsInstancedReference)
// struct FDurableData                CallFunc_GetDurableData_DurableData                              (None)
// enum class EDataValid              CallFunc_GetDurableData_Paths                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetItemPropertyValue_IntValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDataValid              CallFunc_GetItemPropertyValue_Paths                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ArmourPaperdoll_C::SetPaperdollStyle(class UInventory* EquipmentInventory, bool Show, const struct FSlateColor& Two0_, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FItemData& CallFunc_GetItem_ReturnValue, const struct FDurableData& CallFunc_GetDurableData_DurableData, enum class EDataValid CallFunc_GetDurableData_Paths, int32 CallFunc_GetItemPropertyValue_IntValue, enum class EDataValid CallFunc_GetItemPropertyValue_Paths, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ArmourPaperdoll_C", "SetPaperdollStyle");

	Params::UUMG_ArmourPaperdoll_C_SetPaperdollStyle_Params Parms{};

	Parms.EquipmentInventory = EquipmentInventory;
	Parms.Show = Show;
	Parms.Two0_ = Two0_;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetItem_ReturnValue = CallFunc_GetItem_ReturnValue;
	Parms.CallFunc_GetDurableData_DurableData = CallFunc_GetDurableData_DurableData;
	Parms.CallFunc_GetDurableData_Paths = CallFunc_GetDurableData_Paths;
	Parms.CallFunc_GetItemPropertyValue_IntValue = CallFunc_GetItemPropertyValue_IntValue;
	Parms.CallFunc_GetItemPropertyValue_Paths = CallFunc_GetItemPropertyValue_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ArmourPaperdoll.UMG_ArmourPaperdoll_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ArmourPaperdoll_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ArmourPaperdoll_C", "Tick");

	Params::UUMG_ArmourPaperdoll_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ArmourPaperdoll.UMG_ArmourPaperdoll_C.ExecuteUbergraph_UMG_ArmourPaperdoll
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetIcarusPlayerCharacter_IsValid                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacter*      CallFunc_GetIcarusPlayerCharacter_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInventory*                  CallFunc_GetInventory_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ArmourPaperdoll_C::ExecuteUbergraph_UMG_ArmourPaperdoll(int32 EntryPoint, enum class EValid CallFunc_GetIcarusPlayerCharacter_IsValid, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UInventory* CallFunc_GetInventory_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ArmourPaperdoll_C", "ExecuteUbergraph_UMG_ArmourPaperdoll");

	Params::UUMG_ArmourPaperdoll_C_ExecuteUbergraph_UMG_ArmourPaperdoll_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetIcarusPlayerCharacter_IsValid = CallFunc_GetIcarusPlayerCharacter_IsValid;
	Parms.CallFunc_GetIcarusPlayerCharacter_ReturnValue = CallFunc_GetIcarusPlayerCharacter_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetInventory_ReturnValue = CallFunc_GetInventory_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}

}



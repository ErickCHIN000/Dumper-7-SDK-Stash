#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_CompanionEquipmentBox.wid_CompanionEquipmentBox_C
// (None)

class UClass* UWid_CompanionEquipmentBox_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_CompanionEquipmentBox_C");

	return Clss;
}


// wid_CompanionEquipmentBox_C wid_CompanionEquipmentBox.Default__wid_CompanionEquipmentBox_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_CompanionEquipmentBox_C* UWid_CompanionEquipmentBox_C::GetDefaultObj()
{
	static class UWid_CompanionEquipmentBox_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_CompanionEquipmentBox_C*>(UWid_CompanionEquipmentBox_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_CompanionEquipmentBox.wid_CompanionEquipmentBox_C.GetSelected
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWid_CompanionEquipment_ItemBox_C*ItemBox                                                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_CompanionEquipment_ItemBox_C*Temp_object_Variable                                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_CompanionEquipment_ItemBox_C*K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_CompanionEquipmentBox_C::GetSelected(class UWid_CompanionEquipment_ItemBox_C** ItemBox, bool Temp_bool_Variable, class UWid_CompanionEquipment_ItemBox_C* Temp_object_Variable, class UWid_CompanionEquipment_ItemBox_C* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipmentBox_C", "GetSelected");

	Params::UWid_CompanionEquipmentBox_C_GetSelected_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemBox != nullptr)
		*ItemBox = Parms.ItemBox;

}


// Function wid_CompanionEquipmentBox.wid_CompanionEquipmentBox_C.Select Next
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              FirstIndex                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_CompanionEquipment_ItemBox_C*NewToSelect                                                      (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_CompanionEquipment_ItemBox_C*K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_CompanionEquipment_ItemBox_C*K2Node_Select_Default_1                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_CompanionEquipment_ItemBox_C*K2Node_Select_Default_2                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_CompanionEquipmentBox_C::Select_Next(int32 FirstIndex, class UWid_CompanionEquipment_ItemBox_C* NewToSelect, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue, int32 Temp_int_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable_1, class UWid_CompanionEquipment_ItemBox_C* K2Node_Select_Default, bool CallFunc_BooleanOR_ReturnValue, class UWid_CompanionEquipment_ItemBox_C* K2Node_Select_Default_1, class UWid_CompanionEquipment_ItemBox_C* K2Node_Select_Default_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipmentBox_C", "Select Next");

	Params::UWid_CompanionEquipmentBox_C_Select_Next_Params Parms{};

	Parms.FirstIndex = FirstIndex;
	Parms.NewToSelect = NewToSelect;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue = CallFunc_Conv_BoolToInt_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_CompanionEquipmentBox.wid_CompanionEquipmentBox_C.Select
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECompanionEquipmentSlotTypeType                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECompanionEquipmentSlotTypeTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_CompanionEquipment_ItemBox_C*K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_CompanionEquipmentBox_C::Select(enum class ECompanionEquipmentSlotType Type, enum class ECompanionEquipmentSlotType Temp_byte_Variable, class UWid_CompanionEquipment_ItemBox_C* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipmentBox_C", "Select");

	Params::UWid_CompanionEquipmentBox_C_Select_Params Parms{};

	Parms.Type = Type;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_CompanionEquipmentBox.wid_CompanionEquipmentBox_C.UnselectAll
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_CompanionEquipmentBox_C::UnselectAll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipmentBox_C", "UnselectAll");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_CompanionEquipmentBox.wid_CompanionEquipmentBox_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_CompanionEquipmentBox_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipmentBox_C", "PreConstruct");

	Params::UWid_CompanionEquipmentBox_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_CompanionEquipmentBox.wid_CompanionEquipmentBox_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CompanionID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_CompanionEquipmentBox_C::Init(class FName CompanionID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipmentBox_C", "Init");

	Params::UWid_CompanionEquipmentBox_C_Init_Params Parms{};

	Parms.CompanionID = CompanionID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_CompanionEquipmentBox.wid_CompanionEquipmentBox_C.ExecuteUbergraph_wid_CompanionEquipmentBox
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_CompanionID                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActorInfo                  CallFunc_K2_GetActorInfo_Info                                    (None)
// bool                               CallFunc_K2_GetActorInfo_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_CompanionEquipmentBox_C::ExecuteUbergraph_wid_CompanionEquipmentBox(int32 EntryPoint, class FName K2Node_CustomEvent_CompanionID, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, const struct FActorInfo& CallFunc_K2_GetActorInfo_Info, bool CallFunc_K2_GetActorInfo_ReturnValue, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipmentBox_C", "ExecuteUbergraph_wid_CompanionEquipmentBox");

	Params::UWid_CompanionEquipmentBox_C_ExecuteUbergraph_wid_CompanionEquipmentBox_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_CompanionID = K2Node_CustomEvent_CompanionID;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_K2_GetActorInfo_Info = CallFunc_K2_GetActorInfo_Info;
	Parms.CallFunc_K2_GetActorInfo_ReturnValue = CallFunc_K2_GetActorInfo_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}



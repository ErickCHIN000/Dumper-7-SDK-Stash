#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EM_GateBlock.EM_GateBlock_C
// (Actor)

class UClass* AEM_GateBlock_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EM_GateBlock_C");

	return Clss;
}


// EM_GateBlock_C EM_GateBlock.Default__EM_GateBlock_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AEM_GateBlock_C* AEM_GateBlock_C::GetDefaultObj()
{
	static class AEM_GateBlock_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AEM_GateBlock_C*>(AEM_GateBlock_C::StaticClass()->DefaultObject);

	return Default;
}


// Function EM_GateBlock.EM_GateBlock_C.OnTrigger
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bFromActivation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AEM_GateBlock_C::OnTrigger(bool bFromActivation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EM_GateBlock_C", "OnTrigger");

	Params::AEM_GateBlock_C_OnTrigger_Params Parms{};

	Parms.bFromActivation = bFromActivation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EM_GateBlock.EM_GateBlock_C.Reset
// (Event, Public, BlueprintEvent)
// Parameters:

void AEM_GateBlock_C::Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EM_GateBlock_C", "Reset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EM_GateBlock.EM_GateBlock_C.OnBlock
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bFromActivation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AEM_GateBlock_C::OnBlock(bool bFromActivation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EM_GateBlock_C", "OnBlock");

	Params::AEM_GateBlock_C_OnBlock_Params Parms{};

	Parms.bFromActivation = bFromActivation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EM_GateBlock.EM_GateBlock_C.ExecuteUbergraph_EM_GateBlock
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bFromActivation_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bFromActivation                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AEM_GateBlock_C::ExecuteUbergraph_EM_GateBlock(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, bool K2Node_Event_bFromActivation_1, int32 Temp_int_Loop_Counter_Variable_1, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue_1, class AActor* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool K2Node_Event_bFromActivation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EM_GateBlock_C", "ExecuteUbergraph_EM_GateBlock");

	Params::AEM_GateBlock_C_ExecuteUbergraph_EM_GateBlock_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.K2Node_Event_bFromActivation_1 = K2Node_Event_bFromActivation_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.K2Node_Event_bFromActivation = K2Node_Event_bFromActivation;

	UObject::ProcessEvent(Func, &Parms);

}

}



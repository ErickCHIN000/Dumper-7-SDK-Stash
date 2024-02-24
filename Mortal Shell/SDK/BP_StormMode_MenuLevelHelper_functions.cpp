#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_StormMode_MenuLevelHelper.BP_StormMode_MenuLevelHelper_C
// (Actor)

class UClass* ABP_StormMode_MenuLevelHelper_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_StormMode_MenuLevelHelper_C");

	return Clss;
}


// BP_StormMode_MenuLevelHelper_C BP_StormMode_MenuLevelHelper.Default__BP_StormMode_MenuLevelHelper_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_StormMode_MenuLevelHelper_C* ABP_StormMode_MenuLevelHelper_C::GetDefaultObj()
{
	static class ABP_StormMode_MenuLevelHelper_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_StormMode_MenuLevelHelper_C*>(ABP_StormMode_MenuLevelHelper_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_StormMode_MenuLevelHelper.BP_StormMode_MenuLevelHelper_C.FireLevel_Deactivate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASpotLight*                  CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_StormMode_MenuLevelHelper_C::FireLevel_Deactivate(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class ASpotLight* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StormMode_MenuLevelHelper_C", "FireLevel_Deactivate");

	Params::ABP_StormMode_MenuLevelHelper_C_FireLevel_Deactivate_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StormMode_MenuLevelHelper.BP_StormMode_MenuLevelHelper_C.CathedralLevel_Deactivate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_StormMode_MenuLevelHelper_C::CathedralLevel_Deactivate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StormMode_MenuLevelHelper_C", "CathedralLevel_Deactivate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StormMode_MenuLevelHelper.BP_StormMode_MenuLevelHelper_C.CryptLevel_Deactivate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_StormMode_MenuLevelHelper_C::CryptLevel_Deactivate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StormMode_MenuLevelHelper_C", "CryptLevel_Deactivate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StormMode_MenuLevelHelper.BP_StormMode_MenuLevelHelper_C.CryptLevel_Activate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_StormMode_MenuLevelHelper_C::CryptLevel_Activate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StormMode_MenuLevelHelper_C", "CryptLevel_Activate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StormMode_MenuLevelHelper.BP_StormMode_MenuLevelHelper_C.CathedralLevel_Activate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_StormMode_MenuLevelHelper_C::CathedralLevel_Activate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StormMode_MenuLevelHelper_C", "CathedralLevel_Activate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StormMode_MenuLevelHelper.BP_StormMode_MenuLevelHelper_C.FireLevel_Activate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASpotLight*                  CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_StormMode_MenuLevelHelper_C::FireLevel_Activate(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class ASpotLight* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StormMode_MenuLevelHelper_C", "FireLevel_Activate");

	Params::ABP_StormMode_MenuLevelHelper_C_FireLevel_Activate_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StormMode_MenuLevelHelper.BP_StormMode_MenuLevelHelper_C.Activate
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_StormMode_MenuLevelHelper_C::Activate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StormMode_MenuLevelHelper_C", "Activate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StormMode_MenuLevelHelper.BP_StormMode_MenuLevelHelper_C.Deactivate
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_StormMode_MenuLevelHelper_C::Deactivate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StormMode_MenuLevelHelper_C", "Deactivate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StormMode_MenuLevelHelper.BP_StormMode_MenuLevelHelper_C.ExecuteUbergraph_BP_StormMode_MenuLevelHelper
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_StormMode_MenuLevelHelper_C::ExecuteUbergraph_BP_StormMode_MenuLevelHelper(int32 EntryPoint, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StormMode_MenuLevelHelper_C", "ExecuteUbergraph_BP_StormMode_MenuLevelHelper");

	Params::ABP_StormMode_MenuLevelHelper_C_ExecuteUbergraph_BP_StormMode_MenuLevelHelper_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}

}



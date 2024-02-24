#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CF_HardDeleteAllFLOD.CF_HardDeleteAllFLOD_C
// (None)

class UClass* UCF_HardDeleteAllFLOD_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CF_HardDeleteAllFLOD_C");

	return Clss;
}


// CF_HardDeleteAllFLOD_C CF_HardDeleteAllFLOD.Default__CF_HardDeleteAllFLOD_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCF_HardDeleteAllFLOD_C* UCF_HardDeleteAllFLOD_C::GetDefaultObj()
{
	static class UCF_HardDeleteAllFLOD_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCF_HardDeleteAllFLOD_C*>(UCF_HardDeleteAllFLOD_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CF_HardDeleteAllFLOD.CF_HardDeleteAllFLOD_C.Execute
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCF_HardDeleteAllFLOD_C::Execute()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_HardDeleteAllFLOD_C", "Execute");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CF_HardDeleteAllFLOD.CF_HardDeleteAllFLOD_C.ExecuteUbergraph_CF_HardDeleteAllFLOD
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AInstancedFoliageActor*>CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AInstancedFoliageActor*      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCF_HardDeleteAllFLOD_C::ExecuteUbergraph_CF_HardDeleteAllFLOD(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AInstancedFoliageActor*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, class AInstancedFoliageActor* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_HardDeleteAllFLOD_C", "ExecuteUbergraph_CF_HardDeleteAllFLOD");

	Params::UCF_HardDeleteAllFLOD_C_ExecuteUbergraph_CF_HardDeleteAllFLOD_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}



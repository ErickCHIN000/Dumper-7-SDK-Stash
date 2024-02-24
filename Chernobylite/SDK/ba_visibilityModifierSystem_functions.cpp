#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ba_visibilityModifierSystem.ba_visibilityModifierSystem_C
// (Actor)

class UClass* Aba_visibilityModifierSystem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ba_visibilityModifierSystem_C");

	return Clss;
}


// ba_visibilityModifierSystem_C ba_visibilityModifierSystem.Default__ba_visibilityModifierSystem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Aba_visibilityModifierSystem_C* Aba_visibilityModifierSystem_C::GetDefaultObj()
{
	static class Aba_visibilityModifierSystem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Aba_visibilityModifierSystem_C*>(Aba_visibilityModifierSystem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ba_visibilityModifierSystem.ba_visibilityModifierSystem_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
// Parameters:

void Aba_visibilityModifierSystem_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_visibilityModifierSystem_C", "Timeline_0__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_visibilityModifierSystem.ba_visibilityModifierSystem_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
// Parameters:

void Aba_visibilityModifierSystem_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_visibilityModifierSystem_C", "Timeline_0__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_visibilityModifierSystem.ba_visibilityModifierSystem_C.VisModVolAdd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Aba_visibilityModifierVolume_00_C*Volume                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_visibilityModifierSystem_C::VisModVolAdd(class Aba_visibilityModifierVolume_00_C* Volume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_visibilityModifierSystem_C", "VisModVolAdd");

	Params::Aba_visibilityModifierSystem_C_VisModVolAdd_Params Parms{};

	Parms.Volume = Volume;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_visibilityModifierSystem.ba_visibilityModifierSystem_C.VisModVolRemove
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Aba_visibilityModifierVolume_00_C*Volume                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_visibilityModifierSystem_C::VisModVolRemove(class Aba_visibilityModifierVolume_00_C* Volume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_visibilityModifierSystem_C", "VisModVolRemove");

	Params::Aba_visibilityModifierSystem_C_VisModVolRemove_Params Parms{};

	Parms.Volume = Volume;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_visibilityModifierSystem.ba_visibilityModifierSystem_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void Aba_visibilityModifierSystem_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_visibilityModifierSystem_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_visibilityModifierSystem.ba_visibilityModifierSystem_C.ExecuteUbergraph_ba_visibilityModifierSystem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Aba_visibilityModifierVolume_00_C*K2Node_CustomEvent_Volume_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Aba_visibilityModifierVolume_00_C*K2Node_CustomEvent_Volume                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class Aba_visibilityModifierVolume_00_C*>CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// class Aba_visibilityModifierVolume_00_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void Aba_visibilityModifierSystem_C::ExecuteUbergraph_ba_visibilityModifierSystem(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class Aba_visibilityModifierVolume_00_C* K2Node_CustomEvent_Volume_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, class Aba_visibilityModifierVolume_00_C* K2Node_CustomEvent_Volume, bool CallFunc_Array_RemoveItem_ReturnValue, TArray<class Aba_visibilityModifierVolume_00_C*>& CallFunc_GetAllActorsOfClass_OutActors, class Aba_visibilityModifierVolume_00_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_visibilityModifierSystem_C", "ExecuteUbergraph_ba_visibilityModifierSystem");

	Params::Aba_visibilityModifierSystem_C_ExecuteUbergraph_ba_visibilityModifierSystem_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CustomEvent_Volume_1 = K2Node_CustomEvent_Volume_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.K2Node_CustomEvent_Volume = K2Node_CustomEvent_Volume;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}



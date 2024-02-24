#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ThroneRoom_Stretchgoal_DoorOpeningSeq.SequenceDirector_C
// (None)

class UClass* USequenceDirector_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SequenceDirector_C");

	return Clss;
}


// SequenceDirector_C ThroneRoom_Stretchgoal_DoorOpeningSeq.Default__SequenceDirector_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USequenceDirector_C* USequenceDirector_C::GetDefaultObj()
{
	static class USequenceDirector_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USequenceDirector_C*>(USequenceDirector_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ThroneRoom_Stretchgoal_DoorOpeningSeq.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "SequenceEvent__ENTRYPOINTSequenceDirector_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ThroneRoom_Stretchgoal_DoorOpeningSeq.SequenceDirector_C.SequenceEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USequenceDirector_C::SequenceEvent_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "SequenceEvent_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ThroneRoom_Stretchgoal_DoorOpeningSeq.SequenceDirector_C.ExecuteUbergraph_SequenceDirector
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue                      (NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSplitScreen_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AGGPlayerController*> CallFunc_GetAllGGPlayerControllers_ReturnValue                   (ReferenceParm)
// class AGGPlayerController*         CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGGPlayerController*         CallFunc_GetPrimaryGGPlayerController_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::ExecuteUbergraph_SequenceDirector(int32 EntryPoint, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsSplitScreen_ReturnValue, TArray<class AGGPlayerController*>& CallFunc_GetAllGGPlayerControllers_ReturnValue, class AGGPlayerController* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class AGGPlayerController* CallFunc_GetPrimaryGGPlayerController_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "ExecuteUbergraph_SequenceDirector");

	Params::USequenceDirector_C_ExecuteUbergraph_SequenceDirector_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue = CallFunc_MakeLiteralGameplayTag_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsSplitScreen_ReturnValue = CallFunc_IsSplitScreen_ReturnValue;
	Parms.CallFunc_GetAllGGPlayerControllers_ReturnValue = CallFunc_GetAllGGPlayerControllers_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetPrimaryGGPlayerController_ReturnValue = CallFunc_GetPrimaryGGPlayerController_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}



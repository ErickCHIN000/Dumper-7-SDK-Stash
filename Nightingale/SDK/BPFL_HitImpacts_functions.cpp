#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPFL_HitImpacts.BPFL_HitImpacts_C
// (None)

class UClass* UBPFL_HitImpacts_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPFL_HitImpacts_C");

	return Clss;
}


// BPFL_HitImpacts_C BPFL_HitImpacts.Default__BPFL_HitImpacts_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPFL_HitImpacts_C* UBPFL_HitImpacts_C::GetDefaultObj()
{
	static class UBPFL_HitImpacts_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPFL_HitImpacts_C*>(UBPFL_HitImpacts_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPFL_HitImpacts.BPFL_HitImpacts_C.Get All Hit Impact SFX for Source
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                SourceTag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<TSoftObjectPtr<class UObject>>OutSoftObjectsArray                                              (Parm, OutParm)
// TArray<TSoftObjectPtr<class UObject>>SoftObjectsArray                                                 (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UScriptStruct*>       K2Node_MakeArray_Array                                           (ReferenceParm)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue                      (NoDestructor, HasGetValueTypeHash)
// TArray<struct FAffinityTableCellDataWrapper>CallFunc_QueryTable_OutMemoryPtrs                                (ReferenceParm)
// bool                               CallFunc_QueryTable_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_AudioHitResponses        CallFunc_GetTableCellData_OutData                                (ContainsInstancedReference, HasGetValueTypeHash)
// TArray<struct FS_HitAudio>         CallFunc_Map_Values_Values                                       (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_HitAudio                 CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_HitImpacts_C::Get_All_Hit_Impact_SFX_for_Source(struct FGameplayTag& SourceTag, class UObject* __WorldContext, TArray<TSoftObjectPtr<class UObject>>* OutSoftObjectsArray, const TArray<TSoftObjectPtr<class UObject>>& SoftObjectsArray, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UScriptStruct*>& K2Node_MakeArray_Array, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, TArray<struct FAffinityTableCellDataWrapper>& CallFunc_QueryTable_OutMemoryPtrs, bool CallFunc_QueryTable_ReturnValue, const struct FS_AudioHitResponses& CallFunc_GetTableCellData_OutData, TArray<struct FS_HitAudio>& CallFunc_Map_Values_Values, int32 CallFunc_Array_Length_ReturnValue, const struct FS_HitAudio& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_3, int32 CallFunc_Array_Add_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_HitImpacts_C", "Get All Hit Impact SFX for Source");

	Params::UBPFL_HitImpacts_C_Get_All_Hit_Impact_SFX_for_Source_Params Parms{};

	Parms.SourceTag = SourceTag;
	Parms.__WorldContext = __WorldContext;
	Parms.SoftObjectsArray = SoftObjectsArray;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue = CallFunc_MakeLiteralGameplayTag_ReturnValue;
	Parms.CallFunc_QueryTable_OutMemoryPtrs = CallFunc_QueryTable_OutMemoryPtrs;
	Parms.CallFunc_QueryTable_ReturnValue = CallFunc_QueryTable_ReturnValue;
	Parms.CallFunc_GetTableCellData_OutData = CallFunc_GetTableCellData_OutData;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_Array_Add_ReturnValue_3 = CallFunc_Array_Add_ReturnValue_3;
	Parms.CallFunc_Array_Add_ReturnValue_4 = CallFunc_Array_Add_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

	if (OutSoftObjectsArray != nullptr)
		*OutSoftObjectsArray = std::move(Parms.OutSoftObjectsArray);

}


// Function BPFL_HitImpacts.BPFL_HitImpacts_C.Select Hit Impact SFX
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_HitAudio                 AudioEvents                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// bool                               IsInstigatorLocallyControlled                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsReceiverLocallyControlled                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsBlocked                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UAkAudioEvent>HitImpactSFX                                                     (Parm, OutParm, HasGetValueTypeHash)

void UBPFL_HitImpacts_C::Select_Hit_Impact_SFX(struct FS_HitAudio& AudioEvents, bool IsInstigatorLocallyControlled, bool IsReceiverLocallyControlled, bool IsBlocked, class UObject* __WorldContext, TSoftObjectPtr<class UAkAudioEvent>* HitImpactSFX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_HitImpacts_C", "Select Hit Impact SFX");

	Params::UBPFL_HitImpacts_C_Select_Hit_Impact_SFX_Params Parms{};

	Parms.AudioEvents = AudioEvents;
	Parms.IsInstigatorLocallyControlled = IsInstigatorLocallyControlled;
	Parms.IsReceiverLocallyControlled = IsReceiverLocallyControlled;
	Parms.IsBlocked = IsBlocked;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (HitImpactSFX != nullptr)
		*HitImpactSFX = Parms.HitImpactSFX;

}

}



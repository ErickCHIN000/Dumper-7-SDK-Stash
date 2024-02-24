#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ArsenalChangePartsComponent.ArsenalChangePartsComponent_C
// (None)

class UClass* UArsenalChangePartsComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ArsenalChangePartsComponent_C");

	return Clss;
}


// ArsenalChangePartsComponent_C ArsenalChangePartsComponent.Default__ArsenalChangePartsComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UArsenalChangePartsComponent_C* UArsenalChangePartsComponent_C::GetDefaultObj()
{
	static class UArsenalChangePartsComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UArsenalChangePartsComponent_C*>(UArsenalChangePartsComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ArsenalChangePartsComponent.ArsenalChangePartsComponent_C.OverrideArsenalPartsPaintInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ETTLPartsType           PartsType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTTLArsenalPartsPaintInfo   OverridePaintInfo                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FTTLArsenalPaintInfo        ArsenalPaintInfo                                                 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTTLArsenalPaintInfo        K2Node_MakeStruct_TTLArsenalPaintInfo                            (NoDestructor, HasGetValueTypeHash)
// struct FTTLArsenalPaintInfo        K2Node_MakeStruct_TTLArsenalPaintInfo1                           (NoDestructor, HasGetValueTypeHash)
// struct FTTLArsenalPaintInfo        K2Node_MakeStruct_TTLArsenalPaintInfo2                           (NoDestructor, HasGetValueTypeHash)
// struct FTTLArsenalPaintInfo        K2Node_MakeStruct_TTLArsenalPaintInfo3                           (NoDestructor, HasGetValueTypeHash)
// struct FTTLArsenalPaintInfo        K2Node_MakeStruct_TTLArsenalPaintInfo4                           (NoDestructor, HasGetValueTypeHash)

void UArsenalChangePartsComponent_C::OverrideArsenalPartsPaintInfo(enum class ETTLPartsType PartsType, const struct FTTLArsenalPartsPaintInfo& OverridePaintInfo, const struct FTTLArsenalPaintInfo& ArsenalPaintInfo, bool K2Node_SwitchEnum_CmpSuccess, const struct FTTLArsenalPaintInfo& K2Node_MakeStruct_TTLArsenalPaintInfo, const struct FTTLArsenalPaintInfo& K2Node_MakeStruct_TTLArsenalPaintInfo1, const struct FTTLArsenalPaintInfo& K2Node_MakeStruct_TTLArsenalPaintInfo2, const struct FTTLArsenalPaintInfo& K2Node_MakeStruct_TTLArsenalPaintInfo3, const struct FTTLArsenalPaintInfo& K2Node_MakeStruct_TTLArsenalPaintInfo4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalChangePartsComponent_C", "OverrideArsenalPartsPaintInfo");

	Params::UArsenalChangePartsComponent_C_OverrideArsenalPartsPaintInfo_Params Parms{};

	Parms.PartsType = PartsType;
	Parms.OverridePaintInfo = OverridePaintInfo;
	Parms.ArsenalPaintInfo = ArsenalPaintInfo;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_MakeStruct_TTLArsenalPaintInfo = K2Node_MakeStruct_TTLArsenalPaintInfo;
	Parms.K2Node_MakeStruct_TTLArsenalPaintInfo1 = K2Node_MakeStruct_TTLArsenalPaintInfo1;
	Parms.K2Node_MakeStruct_TTLArsenalPaintInfo2 = K2Node_MakeStruct_TTLArsenalPaintInfo2;
	Parms.K2Node_MakeStruct_TTLArsenalPaintInfo3 = K2Node_MakeStruct_TTLArsenalPaintInfo3;
	Parms.K2Node_MakeStruct_TTLArsenalPaintInfo4 = K2Node_MakeStruct_TTLArsenalPaintInfo4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalChangePartsComponent.ArsenalChangePartsComponent_C.ChangeParts
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        RowName                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETTLPartsType           PartsType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTTLArsenalPartsInfo        ChangePartsInfo                                                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               IsOverridePaintInfo                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTTLArsenalPartsPaintInfo   OverridePaintInfo                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UArsenalChangePartsComponent_C::ChangeParts(class FName RowName, enum class ETTLPartsType PartsType, const struct FTTLArsenalPartsInfo& ChangePartsInfo, bool IsOverridePaintInfo, const struct FTTLArsenalPartsPaintInfo& OverridePaintInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalChangePartsComponent_C", "ChangeParts");

	Params::UArsenalChangePartsComponent_C_ChangeParts_Params Parms{};

	Parms.RowName = RowName;
	Parms.PartsType = PartsType;
	Parms.ChangePartsInfo = ChangePartsInfo;
	Parms.IsOverridePaintInfo = IsOverridePaintInfo;
	Parms.OverridePaintInfo = OverridePaintInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalChangePartsComponent.ArsenalChangePartsComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UArsenalChangePartsComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalChangePartsComponent_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArsenalChangePartsComponent.ArsenalChangePartsComponent_C.InitPartsMeshReference
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UArsenalChangePartsComponent_C::InitPartsMeshReference()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalChangePartsComponent_C", "InitPartsMeshReference");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArsenalChangePartsComponent.ArsenalChangePartsComponent_C.ExecuteUbergraph_ArsenalChangePartsComponent
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AArsenalCharacter_C*         K2Node_DynamicCast_AsArsenal_Character                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UArsenalChangePartsComponent_C::ExecuteUbergraph_ArsenalChangePartsComponent(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class AArsenalCharacter_C* K2Node_DynamicCast_AsArsenal_Character, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalChangePartsComponent_C", "ExecuteUbergraph_ArsenalChangePartsComponent");

	Params::UArsenalChangePartsComponent_C_ExecuteUbergraph_ArsenalChangePartsComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsArsenal_Character = K2Node_DynamicCast_AsArsenal_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}



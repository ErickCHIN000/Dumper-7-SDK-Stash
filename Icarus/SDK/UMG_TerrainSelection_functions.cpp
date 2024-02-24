#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_TerrainSelection.UMG_TerrainSelection_C
// (None)

class UClass* UUMG_TerrainSelection_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_TerrainSelection_C");

	return Clss;
}


// UMG_TerrainSelection_C UMG_TerrainSelection.Default__UMG_TerrainSelection_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_TerrainSelection_C* UUMG_TerrainSelection_C::GetDefaultObj()
{
	static class UUMG_TerrainSelection_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_TerrainSelection_C*>(UUMG_TerrainSelection_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_TerrainSelection.UMG_TerrainSelection_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_TerrainSelection_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TerrainSelection_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_TerrainSelection.UMG_TerrainSelection_C.BndEvt__UMG_TerrainSelection_DevelopmentProspects_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ButtonBase_C*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_TerrainSelection_C::BndEvt__UMG_TerrainSelection_DevelopmentProspects_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TerrainSelection_C", "BndEvt__UMG_TerrainSelection_DevelopmentProspects_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature");

	Params::UUMG_TerrainSelection_C_BndEvt__UMG_TerrainSelection_DevelopmentProspects_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_TerrainSelection.UMG_TerrainSelection_C.TerrainSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTalentArchetypesRowHandle  Terrain                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UUMG_TerrainSelection_C::TerrainSelected(const struct FTalentArchetypesRowHandle& Terrain)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TerrainSelection_C", "TerrainSelected");

	Params::UUMG_TerrainSelection_C_TerrainSelected_Params Parms{};

	Parms.Terrain = Terrain;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_TerrainSelection.UMG_TerrainSelection_C.ExecuteUbergraph_UMG_TerrainSelection
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ButtonBase_C*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// struct FTalentArchetypesRowHandle  K2Node_CustomEvent_Terrain                                       (NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_TerrainButton_C*        K2Node_DynamicCast_AsUMG_Terrain_Button                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_TerrainSelection_C::ExecuteUbergraph_UMG_TerrainSelection(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, const struct FTalentArchetypesRowHandle& K2Node_CustomEvent_Terrain, class UWidget* CallFunc_Array_Get_Item, class UUMG_TerrainButton_C* K2Node_DynamicCast_AsUMG_Terrain_Button, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TerrainSelection_C", "ExecuteUbergraph_UMG_TerrainSelection");

	Params::UUMG_TerrainSelection_C_ExecuteUbergraph_UMG_TerrainSelection_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.K2Node_CustomEvent_Terrain = K2Node_CustomEvent_Terrain;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsUMG_Terrain_Button = K2Node_DynamicCast_AsUMG_Terrain_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_TerrainSelection.UMG_TerrainSelection_C.TalentArchetypeSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTalentArchetypesRowHandle  Archetype                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UUMG_TerrainSelection_C::TalentArchetypeSelected__DelegateSignature(const struct FTalentArchetypesRowHandle& Archetype)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TerrainSelection_C", "TalentArchetypeSelected__DelegateSignature");

	Params::UUMG_TerrainSelection_C_TalentArchetypeSelected__DelegateSignature_Params Parms{};

	Parms.Archetype = Archetype;

	UObject::ProcessEvent(Func, &Parms);

}

}



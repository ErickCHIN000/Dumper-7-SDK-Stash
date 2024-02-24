#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_DB_Progression_Structures.WBP_DB_Progression_Structures_C
// (None)

class UClass* UWBP_DB_Progression_Structures_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_DB_Progression_Structures_C");

	return Clss;
}


// WBP_DB_Progression_Structures_C WBP_DB_Progression_Structures.Default__WBP_DB_Progression_Structures_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_DB_Progression_Structures_C* UWBP_DB_Progression_Structures_C::GetDefaultObj()
{
	static class UWBP_DB_Progression_Structures_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_DB_Progression_Structures_C*>(UWBP_DB_Progression_Structures_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_DB_Progression_Structures.WBP_DB_Progression_Structures_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_DB_Progression_Structures_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Progression_Structures_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_Progression_Structures.WBP_DB_Progression_Structures_C.ExecuteUbergraph_WBP_DB_Progression_Structures
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FResourceDistributionList   CallFunc_Map_Find_Value                                          (ContainsInstancedReference)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_DB_Progression_List_C*  CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNWXCheatManager*            K2Node_DynamicCast_AsNWXCheat_Manager                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStructureCheats*            CallFunc_GetStructureCheatManager_ReturnValue                    (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TMap<int32, struct FResourceDistributionList>CallFunc_GetResourceDistributionForStructures_OutResourceDistribution(ContainsInstancedReference)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_Progression_Structures_C::ExecuteUbergraph_WBP_DB_Progression_Structures(int32 EntryPoint, int32 Temp_int_Variable, const struct FResourceDistributionList& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller, bool K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class UWBP_DB_Progression_List_C* CallFunc_Create_ReturnValue, class UNWXCheatManager* K2Node_DynamicCast_AsNWXCheat_Manager, bool K2Node_DynamicCast_bSuccess_1, class UStructureCheats* CallFunc_GetStructureCheatManager_ReturnValue, TMap<int32, struct FResourceDistributionList> CallFunc_GetResourceDistributionForStructures_OutResourceDistribution, class UPanelSlot* CallFunc_AddChild_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Progression_Structures_C", "ExecuteUbergraph_WBP_DB_Progression_Structures");

	Params::UWBP_DB_Progression_Structures_C_ExecuteUbergraph_WBP_DB_Progression_Structures_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller = K2Node_DynamicCast_AsNWXPlayer_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_1 = CallFunc_GetOwningPlayer_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_DynamicCast_AsNWXCheat_Manager = K2Node_DynamicCast_AsNWXCheat_Manager;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetStructureCheatManager_ReturnValue = CallFunc_GetStructureCheatManager_ReturnValue;
	Parms.CallFunc_GetResourceDistributionForStructures_OutResourceDistribution = CallFunc_GetResourceDistributionForStructures_OutResourceDistribution;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}



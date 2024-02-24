#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_FLODInfluence_TreeToppler.BP_FLODInfluence_TreeToppler_C
// (None)

class UClass* UBP_FLODInfluence_TreeToppler_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FLODInfluence_TreeToppler_C");

	return Clss;
}


// BP_FLODInfluence_TreeToppler_C BP_FLODInfluence_TreeToppler.Default__BP_FLODInfluence_TreeToppler_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_FLODInfluence_TreeToppler_C* UBP_FLODInfluence_TreeToppler_C::GetDefaultObj()
{
	static class UBP_FLODInfluence_TreeToppler_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_FLODInfluence_TreeToppler_C*>(UBP_FLODInfluence_TreeToppler_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_FLODInfluence_TreeToppler.BP_FLODInfluence_TreeToppler_C.ToppleTree
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATreeBase*                   Tree                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTreeToppleInfo             ToppleInfo                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_TreeBase_C*              K2Node_DynamicCast_AsBP_Tree_Base                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_FLODInfluence_TreeToppler_C::ToppleTree(class ATreeBase* Tree, const struct FTreeToppleInfo& ToppleInfo, class ABP_TreeBase_C* K2Node_DynamicCast_AsBP_Tree_Base, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FLODInfluence_TreeToppler_C", "ToppleTree");

	Params::UBP_FLODInfluence_TreeToppler_C_ToppleTree_Params Parms{};

	Parms.Tree = Tree;
	Parms.ToppleInfo = ToppleInfo;
	Parms.K2Node_DynamicCast_AsBP_Tree_Base = K2Node_DynamicCast_AsBP_Tree_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FLODInfluence_TreeToppler.BP_FLODInfluence_TreeToppler_C.UpdatePendingTopple
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FFLODInstanceID>     RemovePendingTopple                                              (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Remove_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFLODInstanceID>     CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTreeToppleInfo             CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_FindActorFromInstanceID_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ATreeBase*                   K2Node_DynamicCast_AsTree_Base                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FLODInfluence_TreeToppler_C::UpdatePendingTopple(const TArray<struct FFLODInstanceID>& RemovePendingTopple, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Map_Remove_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, TArray<struct FFLODInstanceID>& CallFunc_Map_Keys_Keys, bool CallFunc_Less_IntInt_ReturnValue, const struct FTreeToppleInfo& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class AActor* CallFunc_FindActorFromInstanceID_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, class ATreeBase* K2Node_DynamicCast_AsTree_Base, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FLODInfluence_TreeToppler_C", "UpdatePendingTopple");

	Params::UBP_FLODInfluence_TreeToppler_C_UpdatePendingTopple_Params Parms{};

	Parms.RemovePendingTopple = RemovePendingTopple;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Map_Remove_ReturnValue = CallFunc_Map_Remove_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_FindActorFromInstanceID_ReturnValue = CallFunc_FindActorFromInstanceID_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsTree_Base = K2Node_DynamicCast_AsTree_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FLODInfluence_TreeToppler.BP_FLODInfluence_TreeToppler_C.AddPendingTreeTopple
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFLODInstanceID             Instance                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FTreeToppleInfo             ToppleInfo                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FLODInfluence_TreeToppler_C::AddPendingTreeTopple(const struct FFLODInstanceID& Instance, const struct FTreeToppleInfo& ToppleInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FLODInfluence_TreeToppler_C", "AddPendingTreeTopple");

	Params::UBP_FLODInfluence_TreeToppler_C_AddPendingTreeTopple_Params Parms{};

	Parms.Instance = Instance;
	Parms.ToppleInfo = ToppleInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FLODInfluence_TreeToppler.BP_FLODInfluence_TreeToppler_C.UpdateActiveInfluences
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_FLODInfluence_TreeToppler_C::UpdateActiveInfluences()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FLODInfluence_TreeToppler_C", "UpdateActiveInfluences");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_FLODInfluence_TreeToppler.BP_FLODInfluence_TreeToppler_C.ExecuteUbergraph_BP_FLODInfluence_TreeToppler
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FLODInfluence_TreeToppler_C::ExecuteUbergraph_BP_FLODInfluence_TreeToppler(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FLODInfluence_TreeToppler_C", "ExecuteUbergraph_BP_FLODInfluence_TreeToppler");

	Params::UBP_FLODInfluence_TreeToppler_C_ExecuteUbergraph_BP_FLODInfluence_TreeToppler_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}



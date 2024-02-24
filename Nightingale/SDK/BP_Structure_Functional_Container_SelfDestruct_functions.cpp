#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Structure_Functional_Container_SelfDestruct.BP_Structure_Functional_Container_SelfDestruct_C
// (Actor)

class UClass* ABP_Structure_Functional_Container_SelfDestruct_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Structure_Functional_Container_SelfDestruct_C");

	return Clss;
}


// BP_Structure_Functional_Container_SelfDestruct_C BP_Structure_Functional_Container_SelfDestruct.Default__BP_Structure_Functional_Container_SelfDestruct_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Structure_Functional_Container_SelfDestruct_C* ABP_Structure_Functional_Container_SelfDestruct_C::GetDefaultObj()
{
	static class ABP_Structure_Functional_Container_SelfDestruct_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Structure_Functional_Container_SelfDestruct_C*>(ABP_Structure_Functional_Container_SelfDestruct_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Structure_Functional_Container_SelfDestruct.BP_Structure_Functional_Container_SelfDestruct_C.SelfDestructIfEmpty
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IItemContainer>Source                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FInventoryEntry             Item                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              Quantity                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumberItemEntries_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_Functional_Container_SelfDestruct_C::SelfDestructIfEmpty(TScriptInterface<class IItemContainer>& Source, struct FInventoryEntry& Item, int32 Quantity, int32 CallFunc_GetNumberItemEntries_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Functional_Container_SelfDestruct_C", "SelfDestructIfEmpty");

	Params::ABP_Structure_Functional_Container_SelfDestruct_C_SelfDestructIfEmpty_Params Parms{};

	Parms.Source = Source;
	Parms.Item = Item;
	Parms.Quantity = Quantity;
	Parms.CallFunc_GetNumberItemEntries_ReturnValue = CallFunc_GetNumberItemEntries_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_Functional_Container_SelfDestruct.BP_Structure_Functional_Container_SelfDestruct_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Structure_Functional_Container_SelfDestruct_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Functional_Container_SelfDestruct_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_Functional_Container_SelfDestruct.BP_Structure_Functional_Container_SelfDestruct_C.ExecuteUbergraph_BP_Structure_Functional_Container_SelfDestruct
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_Functional_Container_SelfDestruct_C::ExecuteUbergraph_BP_Structure_Functional_Container_SelfDestruct(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Functional_Container_SelfDestruct_C", "ExecuteUbergraph_BP_Structure_Functional_Container_SelfDestruct");

	Params::ABP_Structure_Functional_Container_SelfDestruct_C_ExecuteUbergraph_BP_Structure_Functional_Container_SelfDestruct_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}

}



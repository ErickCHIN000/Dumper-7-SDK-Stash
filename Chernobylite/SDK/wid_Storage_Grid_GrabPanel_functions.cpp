#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_Storage_Grid_GrabPanel.wid_Storage_Grid_GrabPanel_C
// (None)

class UClass* UWid_Storage_Grid_GrabPanel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_Storage_Grid_GrabPanel_C");

	return Clss;
}


// wid_Storage_Grid_GrabPanel_C wid_Storage_Grid_GrabPanel.Default__wid_Storage_Grid_GrabPanel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_Storage_Grid_GrabPanel_C* UWid_Storage_Grid_GrabPanel_C::GetDefaultObj()
{
	static class UWid_Storage_Grid_GrabPanel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_Storage_Grid_GrabPanel_C*>(UWid_Storage_Grid_GrabPanel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_Storage_Grid_GrabPanel.wid_Storage_Grid_GrabPanel_C.ForceDrop
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                K2Node_MakeArray_Array                                           (ReferenceParm)
// TArray<class FName>                K2Node_MakeArray_Array_1                                         (ReferenceParm)
// bool                               CallFunc_CheckCollision_Collision                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_CheckCollision_CollisionCount                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVector2D>           CallFunc_CheckCollision_CollisionIndicies                        (ReferenceParm)
// TArray<class FName>                CallFunc_CheckCollision_CollisionNames                           (ReferenceParm)
// struct FVector2D                   CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_AddAt_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_AddAt_ReturnValue_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_Storage_Grid_GrabPanel_C::ForceDrop(class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, TArray<class FName>& K2Node_MakeArray_Array, TArray<class FName>& K2Node_MakeArray_Array_1, bool CallFunc_CheckCollision_Collision, int32 CallFunc_CheckCollision_CollisionCount, TArray<struct FVector2D>& CallFunc_CheckCollision_CollisionIndicies, TArray<class FName>& CallFunc_CheckCollision_CollisionNames, const struct FVector2D& CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_IntInt_ReturnValue, float CallFunc_AddAt_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue, float CallFunc_AddAt_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Grid_GrabPanel_C", "ForceDrop");

	Params::UWid_Storage_Grid_GrabPanel_C_ForceDrop_Params Parms{};

	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_CheckCollision_Collision = CallFunc_CheckCollision_Collision;
	Parms.CallFunc_CheckCollision_CollisionCount = CallFunc_CheckCollision_CollisionCount;
	Parms.CallFunc_CheckCollision_CollisionIndicies = CallFunc_CheckCollision_CollisionIndicies;
	Parms.CallFunc_CheckCollision_CollisionNames = CallFunc_CheckCollision_CollisionNames;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_AddAt_ReturnValue = CallFunc_AddAt_ReturnValue;
	Parms.CallFunc_NotEqual_FloatFloat_ReturnValue = CallFunc_NotEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_AddAt_ReturnValue_1 = CallFunc_AddAt_ReturnValue_1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Storage_Grid_GrabPanel.wid_Storage_Grid_GrabPanel_C.SelectAt
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckCollision_Collision                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_CheckCollision_CollisionCount                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVector2D>           CallFunc_CheckCollision_CollisionIndicies                        (ReferenceParm)
// TArray<class FName>                CallFunc_CheckCollision_CollisionNames                           (ReferenceParm)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_Storage_Grid_GrabPanel_C::SelectAt(const struct FVector2D& Index, bool CallFunc_CheckCollision_Collision, int32 CallFunc_CheckCollision_CollisionCount, TArray<struct FVector2D>& CallFunc_CheckCollision_CollisionIndicies, TArray<class FName>& CallFunc_CheckCollision_CollisionNames, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Grid_GrabPanel_C", "SelectAt");

	Params::UWid_Storage_Grid_GrabPanel_C_SelectAt_Params Parms{};

	Parms.Index = Index;
	Parms.CallFunc_CheckCollision_Collision = CallFunc_CheckCollision_Collision;
	Parms.CallFunc_CheckCollision_CollisionCount = CallFunc_CheckCollision_CollisionCount;
	Parms.CallFunc_CheckCollision_CollisionIndicies = CallFunc_CheckCollision_CollisionIndicies;
	Parms.CallFunc_CheckCollision_CollisionNames = CallFunc_CheckCollision_CollisionNames;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Storage_Grid_GrabPanel.wid_Storage_Grid_GrabPanel_C.Move
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Subtract_Vector2DVector2D_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Add_Vector2DVector2D_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckCollision_Collision                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_CheckCollision_CollisionCount                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVector2D>           CallFunc_CheckCollision_CollisionIndicies                        (ReferenceParm)
// TArray<class FName>                CallFunc_CheckCollision_CollisionNames                           (ReferenceParm)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_Add_Vector2DVector2D_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidIndex_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidIndex_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_Storage_Grid_GrabPanel_C::Move(class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue, bool CallFunc_CheckCollision_Collision, int32 CallFunc_CheckCollision_CollisionCount, TArray<struct FVector2D>& CallFunc_CheckCollision_CollisionIndicies, TArray<class FName>& CallFunc_CheckCollision_CollisionNames, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsValidIndex_ReturnValue, bool CallFunc_IsValidIndex_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Grid_GrabPanel_C", "Move");

	Params::UWid_Storage_Grid_GrabPanel_C_Move_Params Parms{};

	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_Subtract_Vector2DVector2D_ReturnValue = CallFunc_Subtract_Vector2DVector2D_ReturnValue;
	Parms.CallFunc_Add_Vector2DVector2D_ReturnValue = CallFunc_Add_Vector2DVector2D_ReturnValue;
	Parms.CallFunc_CheckCollision_Collision = CallFunc_CheckCollision_Collision;
	Parms.CallFunc_CheckCollision_CollisionCount = CallFunc_CheckCollision_CollisionCount;
	Parms.CallFunc_CheckCollision_CollisionIndicies = CallFunc_CheckCollision_CollisionIndicies;
	Parms.CallFunc_CheckCollision_CollisionNames = CallFunc_CheckCollision_CollisionNames;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Add_Vector2DVector2D_ReturnValue_1 = CallFunc_Add_Vector2DVector2D_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_IsValidIndex_ReturnValue = CallFunc_IsValidIndex_ReturnValue;
	Parms.CallFunc_IsValidIndex_ReturnValue_1 = CallFunc_IsValidIndex_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Storage_Grid_GrabPanel.wid_Storage_Grid_GrabPanel_C.SwapItems
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   NewIndex                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CopyOfIndex                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CopyOfCopy                                                       (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                K2Node_MakeArray_Array                                           (ReferenceParm)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     CallFunc_GetItems_ReturnValue                                    (ReferenceParm)
// struct FInventoryEntry             CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_AddAt_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_Vector2DVector2D_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_Storage_Grid_GrabPanel_C::SwapItems(const struct FVector2D& NewIndex, const struct FVector2D& CopyOfIndex, const struct FInventoryEntry& CopyOfCopy, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class FName>& K2Node_MakeArray_Array, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, TArray<struct FInventoryEntry>& CallFunc_GetItems_ReturnValue, const struct FInventoryEntry& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_AddAt_ReturnValue, bool CallFunc_EqualEqual_Vector2DVector2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Grid_GrabPanel_C", "SwapItems");

	Params::UWid_Storage_Grid_GrabPanel_C_SwapItems_Params Parms{};

	Parms.NewIndex = NewIndex;
	Parms.CopyOfIndex = CopyOfIndex;
	Parms.CopyOfCopy = CopyOfCopy;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1;
	Parms.CallFunc_GetItems_ReturnValue = CallFunc_GetItems_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_AddAt_ReturnValue = CallFunc_AddAt_ReturnValue;
	Parms.CallFunc_EqualEqual_Vector2DVector2D_ReturnValue = CallFunc_EqualEqual_Vector2DVector2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Storage_Grid_GrabPanel.wid_Storage_Grid_GrabPanel_C.CheckCollision
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Collision                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CollisionCount                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVector2D>           CollisionIndicies                                                (Parm, OutParm)
// TArray<class FName>                CollisionNames                                                   (Parm, OutParm)
// TArray<class FName>                Names                                                            (Edit, BlueprintVisible)
// TArray<struct FVector2D>           Indicies                                                         (Edit, BlueprintVisible)
// int32                              Count                                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     CallFunc_GetItems_ReturnValue                                    (ReferenceParm)
// struct FInventoryEntry             CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetItemInfo_IsValid                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemEntry                  CallFunc_GetItemInfo_ReturnValue                                 (None)
// struct FVector2D                   CallFunc_Add_Vector2DVector2D_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Subtract_Vector2DVector2D_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Add_Vector2DVector2D_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Subtract_Vector2DVector2D_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AABB2D_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_Storage_Grid_GrabPanel_C::CheckCollision(bool* Collision, int32* CollisionCount, TArray<struct FVector2D>* CollisionIndicies, TArray<class FName>* CollisionNames, const TArray<class FName>& Names, const TArray<struct FVector2D>& Indicies, int32 Count, bool Result, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, TArray<struct FInventoryEntry>& CallFunc_GetItems_ReturnValue, const struct FInventoryEntry& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_GetItemInfo_IsValid, const struct FItemEntry& CallFunc_GetItemInfo_ReturnValue, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue_1, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue_1, bool CallFunc_AABB2D_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Grid_GrabPanel_C", "CheckCollision");

	Params::UWid_Storage_Grid_GrabPanel_C_CheckCollision_Params Parms{};

	Parms.Names = Names;
	Parms.Indicies = Indicies;
	Parms.Count = Count;
	Parms.Result = Result;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_GetItems_ReturnValue = CallFunc_GetItems_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_GetItemInfo_IsValid = CallFunc_GetItemInfo_IsValid;
	Parms.CallFunc_GetItemInfo_ReturnValue = CallFunc_GetItemInfo_ReturnValue;
	Parms.CallFunc_Add_Vector2DVector2D_ReturnValue = CallFunc_Add_Vector2DVector2D_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Subtract_Vector2DVector2D_ReturnValue = CallFunc_Subtract_Vector2DVector2D_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_Vector2DVector2D_ReturnValue_1 = CallFunc_Add_Vector2DVector2D_ReturnValue_1;
	Parms.CallFunc_Subtract_Vector2DVector2D_ReturnValue_1 = CallFunc_Subtract_Vector2DVector2D_ReturnValue_1;
	Parms.CallFunc_AABB2D_ReturnValue = CallFunc_AABB2D_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Collision != nullptr)
		*Collision = Parms.Collision;

	if (CollisionCount != nullptr)
		*CollisionCount = Parms.CollisionCount;

	if (CollisionIndicies != nullptr)
		*CollisionIndicies = std::move(Parms.CollisionIndicies);

	if (CollisionNames != nullptr)
		*CollisionNames = std::move(Parms.CollisionNames);

}


// Function wid_Storage_Grid_GrabPanel.wid_Storage_Grid_GrabPanel_C.RevertChanges
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                K2Node_MakeArray_Array                                           (ReferenceParm)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                K2Node_MakeArray_Array_1                                         (ReferenceParm)
// float                              CallFunc_AddAt_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_AddAt_ReturnValue_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_Storage_Grid_GrabPanel_C::RevertChanges(TArray<class FName>& K2Node_MakeArray_Array, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, TArray<class FName>& K2Node_MakeArray_Array_1, float CallFunc_AddAt_ReturnValue, float CallFunc_AddAt_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Grid_GrabPanel_C", "RevertChanges");

	Params::UWid_Storage_Grid_GrabPanel_C_RevertChanges_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_AddAt_ReturnValue = CallFunc_AddAt_ReturnValue;
	Parms.CallFunc_AddAt_ReturnValue_1 = CallFunc_AddAt_ReturnValue_1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Storage_Grid_GrabPanel.wid_Storage_Grid_GrabPanel_C.MakeCopy
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_GetItemByIndex_Entry                                    (None)
// float                              CallFunc_RemoveAt_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Storage_Grid_GrabPanel_C::MakeCopy(const struct FVector2D& Index, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, const struct FInventoryEntry& CallFunc_GetItemByIndex_Entry, float CallFunc_RemoveAt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Grid_GrabPanel_C", "MakeCopy");

	Params::UWid_Storage_Grid_GrabPanel_C_MakeCopy_Params Parms{};

	Parms.Index = Index;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_GetItemByIndex_Entry = CallFunc_GetItemByIndex_Entry;
	Parms.CallFunc_RemoveAt_ReturnValue = CallFunc_RemoveAt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Storage_Grid_GrabPanel.wid_Storage_Grid_GrabPanel_C.GetItemByIndex
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             Entry                                                            (Parm, OutParm)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     CallFunc_GetItems_ReturnValue                                    (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_Vector2DVector2D_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_Storage_Grid_GrabPanel_C::GetItemByIndex(const struct FVector2D& Index, struct FInventoryEntry* Entry, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, TArray<struct FInventoryEntry>& CallFunc_GetItems_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FInventoryEntry& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_Vector2DVector2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Grid_GrabPanel_C", "GetItemByIndex");

	Params::UWid_Storage_Grid_GrabPanel_C_GetItemByIndex_Params Parms{};

	Parms.Index = Index;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_GetItems_ReturnValue = CallFunc_GetItems_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_Vector2DVector2D_ReturnValue = CallFunc_EqualEqual_Vector2DVector2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Entry != nullptr)
		*Entry = std::move(Parms.Entry);

}


// Function wid_Storage_Grid_GrabPanel.wid_Storage_Grid_GrabPanel_C.SetPosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Multiply_Vector2DVector2D_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Add_Vector2DFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Storage_Grid_GrabPanel_C::SetPosition(const struct FVector2D& Index, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_Add_Vector2DFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Grid_GrabPanel_C", "SetPosition");

	Params::UWid_Storage_Grid_GrabPanel_C_SetPosition_Params Parms{};

	Parms.Index = Index;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;
	Parms.CallFunc_Multiply_Vector2DVector2D_ReturnValue = CallFunc_Multiply_Vector2DVector2D_ReturnValue;
	Parms.CallFunc_Add_Vector2DFloat_ReturnValue = CallFunc_Add_Vector2DFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Storage_Grid_GrabPanel.wid_Storage_Grid_GrabPanel_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   TileSize                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsStorageItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsStorageInventoryItem                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsEnemyInventoyItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Subtract_Vector2DVector2D_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Multiply_Vector2DVector2D_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Multiply_Vector2DFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetItemInfo_IsValid                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemEntry                  CallFunc_GetItemInfo_ReturnValue                                 (None)
// struct FVector2D                   CallFunc_Add_Vector2DVector2D_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Storage_Grid_GrabPanel_C::Init(class FName ItemId, const struct FVector2D& Index, const struct FVector2D& TileSize, bool IsStorageItem, bool IsStorageInventoryItem, bool IsEnemyInventoyItem, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue, bool CallFunc_GetItemInfo_IsValid, const struct FItemEntry& CallFunc_GetItemInfo_ReturnValue, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Grid_GrabPanel_C", "Init");

	Params::UWid_Storage_Grid_GrabPanel_C_Init_Params Parms{};

	Parms.ItemId = ItemId;
	Parms.Index = Index;
	Parms.TileSize = TileSize;
	Parms.IsStorageItem = IsStorageItem;
	Parms.IsStorageInventoryItem = IsStorageInventoryItem;
	Parms.IsEnemyInventoyItem = IsEnemyInventoyItem;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_Subtract_Vector2DVector2D_ReturnValue = CallFunc_Subtract_Vector2DVector2D_ReturnValue;
	Parms.CallFunc_Multiply_Vector2DVector2D_ReturnValue = CallFunc_Multiply_Vector2DVector2D_ReturnValue;
	Parms.CallFunc_Multiply_Vector2DFloat_ReturnValue = CallFunc_Multiply_Vector2DFloat_ReturnValue;
	Parms.CallFunc_GetItemInfo_IsValid = CallFunc_GetItemInfo_IsValid;
	Parms.CallFunc_GetItemInfo_ReturnValue = CallFunc_GetItemInfo_ReturnValue;
	Parms.CallFunc_Add_Vector2DVector2D_ReturnValue = CallFunc_Add_Vector2DVector2D_ReturnValue;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Storage_Grid_GrabPanel.wid_Storage_Grid_GrabPanel_C.FaceLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_Grid_GrabPanel_C::FaceLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Grid_GrabPanel_C", "FaceLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_Grid_GrabPanel.wid_Storage_Grid_GrabPanel_C.L2
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_Grid_GrabPanel_C::L2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Grid_GrabPanel_C", "L2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_Grid_GrabPanel.wid_Storage_Grid_GrabPanel_C.r2
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_Grid_GrabPanel_C::R2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Grid_GrabPanel_C", "r2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_Grid_GrabPanel.wid_Storage_Grid_GrabPanel_C.RightStick
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_Grid_GrabPanel_C::RightStick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Grid_GrabPanel_C", "RightStick");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_Grid_GrabPanel.wid_Storage_Grid_GrabPanel_C.FaceUpReleased
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_Grid_GrabPanel_C::FaceUpReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Grid_GrabPanel_C", "FaceUpReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_Grid_GrabPanel.wid_Storage_Grid_GrabPanel_C.Start
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_Grid_GrabPanel_C::Start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Grid_GrabPanel_C", "Start");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_Grid_GrabPanel.wid_Storage_Grid_GrabPanel_C.End
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_Grid_GrabPanel_C::End()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Grid_GrabPanel_C", "End");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_Grid_GrabPanel.wid_Storage_Grid_GrabPanel_C.FaceRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_Grid_GrabPanel_C::FaceRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Grid_GrabPanel_C", "FaceRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_Grid_GrabPanel.wid_Storage_Grid_GrabPanel_C.Up
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_Grid_GrabPanel_C::Up()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Grid_GrabPanel_C", "Up");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_Grid_GrabPanel.wid_Storage_Grid_GrabPanel_C.Down
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_Grid_GrabPanel_C::Down()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Grid_GrabPanel_C", "Down");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_Grid_GrabPanel.wid_Storage_Grid_GrabPanel_C.Right
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_Grid_GrabPanel_C::Right()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Grid_GrabPanel_C", "Right");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_Grid_GrabPanel.wid_Storage_Grid_GrabPanel_C.Left
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_Grid_GrabPanel_C::Left()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Grid_GrabPanel_C", "Left");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_Grid_GrabPanel.wid_Storage_Grid_GrabPanel_C.FaceDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_Grid_GrabPanel_C::FaceDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Grid_GrabPanel_C", "FaceDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_Grid_GrabPanel.wid_Storage_Grid_GrabPanel_C.FaceUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_Grid_GrabPanel_C::FaceUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Grid_GrabPanel_C", "FaceUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_Grid_GrabPanel.wid_Storage_Grid_GrabPanel_C.SelectItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Idx                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Storage_Grid_GrabPanel_C::SelectItem(const struct FVector2D& Idx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Grid_GrabPanel_C", "SelectItem");

	Params::UWid_Storage_Grid_GrabPanel_C_SelectItem_Params Parms{};

	Parms.Idx = Idx;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Storage_Grid_GrabPanel.wid_Storage_Grid_GrabPanel_C.Drop
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_Grid_GrabPanel_C::Drop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Grid_GrabPanel_C", "Drop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_Grid_GrabPanel.wid_Storage_Grid_GrabPanel_C.ReleaseButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_Grid_GrabPanel_C::ReleaseButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Grid_GrabPanel_C", "ReleaseButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_Grid_GrabPanel.wid_Storage_Grid_GrabPanel_C.ExecuteUbergraph_wid_Storage_Grid_GrabPanel
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                K2Node_MakeArray_Array                                           (ReferenceParm)
// struct FVector2D                   CallFunc_Subtract_Vector2DVector2D_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckCollision_Collision                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_CheckCollision_CollisionCount                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVector2D>           CallFunc_CheckCollision_CollisionIndicies                        (ReferenceParm)
// TArray<class FName>                CallFunc_CheckCollision_CollisionNames                           (ReferenceParm)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_Add_Vector2DVector2D_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidIndex_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Add_Vector2DVector2D_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidIndex_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_Add_Vector2DVector2D_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidIndex_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_Subtract_Vector2DVector2D_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_Add_Vector2DVector2D_ReturnValue_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidIndex_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_Subtract_Vector2DVector2D_ReturnValue_2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckCollision_Collision_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_CheckCollision_CollisionCount_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVector2D>           CallFunc_CheckCollision_CollisionIndicies_1                      (ReferenceParm)
// TArray<class FName>                CallFunc_CheckCollision_CollisionNames_1                         (ReferenceParm)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_Add_Vector2DVector2D_ReturnValue_4                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidIndex_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_Subtract_Vector2DVector2D_ReturnValue_3                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckCollision_Collision_2                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_CheckCollision_CollisionCount_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVector2D>           CallFunc_CheckCollision_CollisionIndicies_2                      (ReferenceParm)
// TArray<class FName>                CallFunc_CheckCollision_CollisionNames_2                         (ReferenceParm)
// struct FVector2D                   CallFunc_Add_Vector2DVector2D_ReturnValue_5                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidIndex_ReturnValue_5                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Add_Vector2DVector2D_ReturnValue_6                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidIndex_ReturnValue_6                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_Add_Vector2DVector2D_ReturnValue_7                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidIndex_ReturnValue_7                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckCollision_Collision_3                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_CheckCollision_CollisionCount_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVector2D>           CallFunc_CheckCollision_CollisionIndicies_3                      (ReferenceParm)
// TArray<class FName>                CallFunc_CheckCollision_CollisionNames_3                         (ReferenceParm)
// struct FVector2D                   CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckCollision_Collision_4                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_CheckCollision_CollisionCount_4                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVector2D>           CallFunc_CheckCollision_CollisionIndicies_4                      (ReferenceParm)
// TArray<class FName>                CallFunc_CheckCollision_CollisionNames_4                         (ReferenceParm)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   K2Node_Event_Idx                                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Add_Vector2DVector2D_ReturnValue_8                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidIndex_ReturnValue_8                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_Subtract_Vector2DVector2D_ReturnValue_4                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Add_Vector2DVector2D_ReturnValue_9                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidIndex_ReturnValue_9                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                K2Node_MakeArray_Array_1                                         (ReferenceParm)
// float                              CallFunc_AddAt_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_AddAt_ReturnValue_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Storage_Grid_GrabPanel_C::ExecuteUbergraph_wid_Storage_Grid_GrabPanel(int32 EntryPoint, TArray<class FName>& K2Node_MakeArray_Array, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, bool CallFunc_CheckCollision_Collision, int32 CallFunc_CheckCollision_CollisionCount, TArray<struct FVector2D>& CallFunc_CheckCollision_CollisionIndicies, TArray<class FName>& CallFunc_CheckCollision_CollisionNames, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue, bool CallFunc_IsValidIndex_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue_1, bool CallFunc_IsValidIndex_ReturnValue_1, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue_2, bool CallFunc_IsValidIndex_ReturnValue_2, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue_3, bool CallFunc_IsValidIndex_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_1, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue_2, bool CallFunc_CheckCollision_Collision_1, int32 CallFunc_CheckCollision_CollisionCount_1, TArray<struct FVector2D>& CallFunc_CheckCollision_CollisionIndicies_1, TArray<class FName>& CallFunc_CheckCollision_CollisionNames_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2, bool CallFunc_BooleanOR_ReturnValue_1, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue_4, bool CallFunc_IsValidIndex_ReturnValue_4, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue_3, bool CallFunc_CheckCollision_Collision_2, int32 CallFunc_CheckCollision_CollisionCount_2, TArray<struct FVector2D>& CallFunc_CheckCollision_CollisionIndicies_2, TArray<class FName>& CallFunc_CheckCollision_CollisionNames_2, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue_5, bool CallFunc_LessEqual_IntInt_ReturnValue_2, bool CallFunc_IsValidIndex_ReturnValue_5, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_2, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue_6, bool CallFunc_IsValidIndex_ReturnValue_6, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue_7, bool CallFunc_IsValidIndex_ReturnValue_7, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_CheckCollision_Collision_3, int32 CallFunc_CheckCollision_CollisionCount_3, TArray<struct FVector2D>& CallFunc_CheckCollision_CollisionIndicies_3, TArray<class FName>& CallFunc_CheckCollision_CollisionNames_3, const struct FVector2D& CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_CheckCollision_Collision_4, int32 CallFunc_CheckCollision_CollisionCount_4, TArray<struct FVector2D>& CallFunc_CheckCollision_CollisionIndicies_4, TArray<class FName>& CallFunc_CheckCollision_CollisionNames_4, bool CallFunc_LessEqual_IntInt_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_3, const struct FVector2D& K2Node_Event_Idx, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue_8, bool CallFunc_IsValidIndex_ReturnValue_8, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue_4, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue_9, bool CallFunc_IsValidIndex_ReturnValue_9, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6, bool CallFunc_BooleanAND_ReturnValue_4, TArray<class FName>& K2Node_MakeArray_Array_1, float CallFunc_AddAt_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_AddAt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Grid_GrabPanel_C", "ExecuteUbergraph_wid_Storage_Grid_GrabPanel");

	Params::UWid_Storage_Grid_GrabPanel_C_ExecuteUbergraph_wid_Storage_Grid_GrabPanel_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Subtract_Vector2DVector2D_ReturnValue = CallFunc_Subtract_Vector2DVector2D_ReturnValue;
	Parms.CallFunc_CheckCollision_Collision = CallFunc_CheckCollision_Collision;
	Parms.CallFunc_CheckCollision_CollisionCount = CallFunc_CheckCollision_CollisionCount;
	Parms.CallFunc_CheckCollision_CollisionIndicies = CallFunc_CheckCollision_CollisionIndicies;
	Parms.CallFunc_CheckCollision_CollisionNames = CallFunc_CheckCollision_CollisionNames;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Add_Vector2DVector2D_ReturnValue = CallFunc_Add_Vector2DVector2D_ReturnValue;
	Parms.CallFunc_IsValidIndex_ReturnValue = CallFunc_IsValidIndex_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1;
	Parms.CallFunc_Add_Vector2DVector2D_ReturnValue_1 = CallFunc_Add_Vector2DVector2D_ReturnValue_1;
	Parms.CallFunc_IsValidIndex_ReturnValue_1 = CallFunc_IsValidIndex_ReturnValue_1;
	Parms.CallFunc_Add_Vector2DVector2D_ReturnValue_2 = CallFunc_Add_Vector2DVector2D_ReturnValue_2;
	Parms.CallFunc_IsValidIndex_ReturnValue_2 = CallFunc_IsValidIndex_ReturnValue_2;
	Parms.CallFunc_Subtract_Vector2DVector2D_ReturnValue_1 = CallFunc_Subtract_Vector2DVector2D_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Add_Vector2DVector2D_ReturnValue_3 = CallFunc_Add_Vector2DVector2D_ReturnValue_3;
	Parms.CallFunc_IsValidIndex_ReturnValue_3 = CallFunc_IsValidIndex_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_Subtract_Vector2DVector2D_ReturnValue_2 = CallFunc_Subtract_Vector2DVector2D_ReturnValue_2;
	Parms.CallFunc_CheckCollision_Collision_1 = CallFunc_CheckCollision_Collision_1;
	Parms.CallFunc_CheckCollision_CollisionCount_1 = CallFunc_CheckCollision_CollisionCount_1;
	Parms.CallFunc_CheckCollision_CollisionIndicies_1 = CallFunc_CheckCollision_CollisionIndicies_1;
	Parms.CallFunc_CheckCollision_CollisionNames_1 = CallFunc_CheckCollision_CollisionNames_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_1 = CallFunc_LessEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_Add_Vector2DVector2D_ReturnValue_4 = CallFunc_Add_Vector2DVector2D_ReturnValue_4;
	Parms.CallFunc_IsValidIndex_ReturnValue_4 = CallFunc_IsValidIndex_ReturnValue_4;
	Parms.CallFunc_Subtract_Vector2DVector2D_ReturnValue_3 = CallFunc_Subtract_Vector2DVector2D_ReturnValue_3;
	Parms.CallFunc_CheckCollision_Collision_2 = CallFunc_CheckCollision_Collision_2;
	Parms.CallFunc_CheckCollision_CollisionCount_2 = CallFunc_CheckCollision_CollisionCount_2;
	Parms.CallFunc_CheckCollision_CollisionIndicies_2 = CallFunc_CheckCollision_CollisionIndicies_2;
	Parms.CallFunc_CheckCollision_CollisionNames_2 = CallFunc_CheckCollision_CollisionNames_2;
	Parms.CallFunc_Add_Vector2DVector2D_ReturnValue_5 = CallFunc_Add_Vector2DVector2D_ReturnValue_5;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_2 = CallFunc_LessEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_IsValidIndex_ReturnValue_5 = CallFunc_IsValidIndex_ReturnValue_5;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3;
	Parms.CallFunc_Add_Vector2DVector2D_ReturnValue_6 = CallFunc_Add_Vector2DVector2D_ReturnValue_6;
	Parms.CallFunc_IsValidIndex_ReturnValue_6 = CallFunc_IsValidIndex_ReturnValue_6;
	Parms.CallFunc_Add_Vector2DVector2D_ReturnValue_7 = CallFunc_Add_Vector2DVector2D_ReturnValue_7;
	Parms.CallFunc_IsValidIndex_ReturnValue_7 = CallFunc_IsValidIndex_ReturnValue_7;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_CheckCollision_Collision_3 = CallFunc_CheckCollision_Collision_3;
	Parms.CallFunc_CheckCollision_CollisionCount_3 = CallFunc_CheckCollision_CollisionCount_3;
	Parms.CallFunc_CheckCollision_CollisionIndicies_3 = CallFunc_CheckCollision_CollisionIndicies_3;
	Parms.CallFunc_CheckCollision_CollisionNames_3 = CallFunc_CheckCollision_CollisionNames_3;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_CheckCollision_Collision_4 = CallFunc_CheckCollision_Collision_4;
	Parms.CallFunc_CheckCollision_CollisionCount_4 = CallFunc_CheckCollision_CollisionCount_4;
	Parms.CallFunc_CheckCollision_CollisionIndicies_4 = CallFunc_CheckCollision_CollisionIndicies_4;
	Parms.CallFunc_CheckCollision_CollisionNames_4 = CallFunc_CheckCollision_CollisionNames_4;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_3 = CallFunc_LessEqual_IntInt_ReturnValue_3;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;
	Parms.K2Node_Event_Idx = K2Node_Event_Idx;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4;
	Parms.CallFunc_Add_Vector2DVector2D_ReturnValue_8 = CallFunc_Add_Vector2DVector2D_ReturnValue_8;
	Parms.CallFunc_IsValidIndex_ReturnValue_8 = CallFunc_IsValidIndex_ReturnValue_8;
	Parms.CallFunc_Subtract_Vector2DVector2D_ReturnValue_4 = CallFunc_Subtract_Vector2DVector2D_ReturnValue_4;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5;
	Parms.CallFunc_Add_Vector2DVector2D_ReturnValue_9 = CallFunc_Add_Vector2DVector2D_ReturnValue_9;
	Parms.CallFunc_IsValidIndex_ReturnValue_9 = CallFunc_IsValidIndex_ReturnValue_9;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6;
	Parms.CallFunc_BooleanAND_ReturnValue_4 = CallFunc_BooleanAND_ReturnValue_4;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_AddAt_ReturnValue = CallFunc_AddAt_ReturnValue;
	Parms.CallFunc_NotEqual_FloatFloat_ReturnValue = CallFunc_NotEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_AddAt_ReturnValue_1 = CallFunc_AddAt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Storage_Grid_GrabPanel.wid_Storage_Grid_GrabPanel_C.MovedForce__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Storage_Grid_GrabPanel_C::MovedForce__DelegateSignature(const struct FVector2D& Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Grid_GrabPanel_C", "MovedForce__DelegateSignature");

	Params::UWid_Storage_Grid_GrabPanel_C_MovedForce__DelegateSignature_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Storage_Grid_GrabPanel.wid_Storage_Grid_GrabPanel_C.Swap__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_Grid_GrabPanel_C::Swap__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Grid_GrabPanel_C", "Swap__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_Grid_GrabPanel.wid_Storage_Grid_GrabPanel_C.Moved__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Storage_Grid_GrabPanel_C::Moved__DelegateSignature(const struct FVector2D& Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Grid_GrabPanel_C", "Moved__DelegateSignature");

	Params::UWid_Storage_Grid_GrabPanel_C_Moved__DelegateSignature_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Storage_Grid_GrabPanel.wid_Storage_Grid_GrabPanel_C.Cancel__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Storage_Grid_GrabPanel_C::Cancel__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_Grid_GrabPanel_C", "Cancel__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}



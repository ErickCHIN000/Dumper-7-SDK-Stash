#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB1 (0x311 - 0x260)
// WidgetBlueprintGeneratedClass wid_Storage_Grid_GrabPanel.wid_Storage_Grid_GrabPanel_C
class UWid_Storage_Grid_GrabPanel_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWid_Inventory_Grid_Grab_Entry_C*      GrabEntry;                                         // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            Cancel;                                            // 0x270(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                        TileOffset;                                        // 0x280(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        CustomPadding;                                     // 0x284(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector2D                             CurrentIndex;                                      // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CurrentTileSize;                                   // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CurrentItemSize;                                   // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             OriginalIndex;                                     // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            Moved;                                             // 0x2A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FInventoryEntry                       Copy;                                              // 0x2B8(0x30)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            Swap;                                              // 0x2E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         IsStorageItem;                                     // 0x2F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsStorageInventoryItem;                            // 0x2F9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_250F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            MovedForce;                                        // 0x300(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         IsEnemyInventoryItem;                              // 0x310(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UWid_Storage_Grid_GrabPanel_C* GetDefaultObj();

	void ForceDrop(class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, TArray<class FName>& K2Node_MakeArray_Array, TArray<class FName>& K2Node_MakeArray_Array_1, bool CallFunc_CheckCollision_Collision, int32 CallFunc_CheckCollision_CollisionCount, TArray<struct FVector2D>& CallFunc_CheckCollision_CollisionIndicies, TArray<class FName>& CallFunc_CheckCollision_CollisionNames, const struct FVector2D& CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_IntInt_ReturnValue, float CallFunc_AddAt_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue, float CallFunc_AddAt_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue);
	void SelectAt(const struct FVector2D& Index, bool CallFunc_CheckCollision_Collision, int32 CallFunc_CheckCollision_CollisionCount, TArray<struct FVector2D>& CallFunc_CheckCollision_CollisionIndicies, TArray<class FName>& CallFunc_CheckCollision_CollisionNames, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void Move(class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue, bool CallFunc_CheckCollision_Collision, int32 CallFunc_CheckCollision_CollisionCount, TArray<struct FVector2D>& CallFunc_CheckCollision_CollisionIndicies, TArray<class FName>& CallFunc_CheckCollision_CollisionNames, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsValidIndex_ReturnValue, bool CallFunc_IsValidIndex_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
	void SwapItems(const struct FVector2D& NewIndex, const struct FVector2D& CopyOfIndex, const struct FInventoryEntry& CopyOfCopy, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class FName>& K2Node_MakeArray_Array, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, TArray<struct FInventoryEntry>& CallFunc_GetItems_ReturnValue, const struct FInventoryEntry& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_AddAt_ReturnValue, bool CallFunc_EqualEqual_Vector2DVector2D_ReturnValue);
	void CheckCollision(bool* Collision, int32* CollisionCount, TArray<struct FVector2D>* CollisionIndicies, TArray<class FName>* CollisionNames, const TArray<class FName>& Names, const TArray<struct FVector2D>& Indicies, int32 Count, bool Result, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, TArray<struct FInventoryEntry>& CallFunc_GetItems_ReturnValue, const struct FInventoryEntry& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_GetItemInfo_IsValid, const struct FItemEntry& CallFunc_GetItemInfo_ReturnValue, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue_1, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue_1, bool CallFunc_AABB2D_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void RevertChanges(TArray<class FName>& K2Node_MakeArray_Array, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, TArray<class FName>& K2Node_MakeArray_Array_1, float CallFunc_AddAt_ReturnValue, float CallFunc_AddAt_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue);
	void MakeCopy(const struct FVector2D& Index, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, const struct FInventoryEntry& CallFunc_GetItemByIndex_Entry, float CallFunc_RemoveAt_ReturnValue);
	void GetItemByIndex(const struct FVector2D& Index, struct FInventoryEntry* Entry, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, TArray<struct FInventoryEntry>& CallFunc_GetItems_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FInventoryEntry& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_Vector2DVector2D_ReturnValue);
	void SetPosition(const struct FVector2D& Index, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_Add_Vector2DFloat_ReturnValue);
	void Init(class FName ItemId, const struct FVector2D& Index, const struct FVector2D& TileSize, bool IsStorageItem, bool IsStorageInventoryItem, bool IsEnemyInventoyItem, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue, bool CallFunc_GetItemInfo_IsValid, const struct FItemEntry& CallFunc_GetItemInfo_ReturnValue, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue);
	void FaceLeft();
	void L2();
	void R2();
	void RightStick();
	void FaceUpReleased();
	void Start();
	void End();
	void FaceRight();
	void Up();
	void Down();
	void Right();
	void Left();
	void FaceDown();
	void FaceUp();
	void SelectItem(const struct FVector2D& Idx);
	void Drop();
	void ReleaseButton();
	void ExecuteUbergraph_wid_Storage_Grid_GrabPanel(int32 EntryPoint, TArray<class FName>& K2Node_MakeArray_Array, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, bool CallFunc_CheckCollision_Collision, int32 CallFunc_CheckCollision_CollisionCount, TArray<struct FVector2D>& CallFunc_CheckCollision_CollisionIndicies, TArray<class FName>& CallFunc_CheckCollision_CollisionNames, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue, bool CallFunc_IsValidIndex_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue_1, bool CallFunc_IsValidIndex_ReturnValue_1, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue_2, bool CallFunc_IsValidIndex_ReturnValue_2, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue_3, bool CallFunc_IsValidIndex_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_1, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue_2, bool CallFunc_CheckCollision_Collision_1, int32 CallFunc_CheckCollision_CollisionCount_1, TArray<struct FVector2D>& CallFunc_CheckCollision_CollisionIndicies_1, TArray<class FName>& CallFunc_CheckCollision_CollisionNames_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2, bool CallFunc_BooleanOR_ReturnValue_1, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue_4, bool CallFunc_IsValidIndex_ReturnValue_4, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue_3, bool CallFunc_CheckCollision_Collision_2, int32 CallFunc_CheckCollision_CollisionCount_2, TArray<struct FVector2D>& CallFunc_CheckCollision_CollisionIndicies_2, TArray<class FName>& CallFunc_CheckCollision_CollisionNames_2, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue_5, bool CallFunc_LessEqual_IntInt_ReturnValue_2, bool CallFunc_IsValidIndex_ReturnValue_5, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_2, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue_6, bool CallFunc_IsValidIndex_ReturnValue_6, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue_7, bool CallFunc_IsValidIndex_ReturnValue_7, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_CheckCollision_Collision_3, int32 CallFunc_CheckCollision_CollisionCount_3, TArray<struct FVector2D>& CallFunc_CheckCollision_CollisionIndicies_3, TArray<class FName>& CallFunc_CheckCollision_CollisionNames_3, const struct FVector2D& CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_CheckCollision_Collision_4, int32 CallFunc_CheckCollision_CollisionCount_4, TArray<struct FVector2D>& CallFunc_CheckCollision_CollisionIndicies_4, TArray<class FName>& CallFunc_CheckCollision_CollisionNames_4, bool CallFunc_LessEqual_IntInt_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_3, const struct FVector2D& K2Node_Event_Idx, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue_8, bool CallFunc_IsValidIndex_ReturnValue_8, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue_4, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue_9, bool CallFunc_IsValidIndex_ReturnValue_9, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6, bool CallFunc_BooleanAND_ReturnValue_4, TArray<class FName>& K2Node_MakeArray_Array_1, float CallFunc_AddAt_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_AddAt_ReturnValue_1);
	void MovedForce__DelegateSignature(const struct FVector2D& Index);
	void Swap__DelegateSignature();
	void Moved__DelegateSignature(const struct FVector2D& Index);
	void Cancel__DelegateSignature();
};

}



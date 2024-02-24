#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x260 - 0x220)
// BlueprintGeneratedClass MS_PatrolPoiBase.MS_PatrolPoiBase_C
class AMS_PatrolPoiBase_C : public ATargetPoint
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                       DirectionArrow;                                    // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class EMS_PatrolPoiType                 Type;                                              // 0x230(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_16AE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ASHCharacter*>                  Characters;                                        // 0x238(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, HasGetValueTypeHash)
	TArray<struct FSTempActor>                   LastCharacters;                                    // 0x248(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	float                                        ResetTime;                                         // 0x258(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Chance;                                            // 0x25C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AMS_PatrolPoiBase_C* GetDefaultObj();

	void GetArrowForwardVector(struct FVector* ForwardVector, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue);
	void AddCharacter(class ASHCharacter* Character, int32 CallFunc_Array_AddUnique_ReturnValue);
	void CanJoin(class ASHCharacter* Character, bool* Result, bool Res, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FSTempActor& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void Leave(class ASHCharacter* Character, bool* Result, const struct FSTempActor& K2Node_MakeStruct_STempActor, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue);
	void Join(class ASHCharacter* Character, bool* Result, bool Res, bool CallFunc_CanJoin_Result);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_MS_PatrolPoiBase(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, float K2Node_Event_DeltaSeconds, int32 Temp_int_Loop_Counter_Variable_1, class ASHCharacter* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FSTempActor& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, const struct FSTempActor& K2Node_MakeStruct_STempActor, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue);
};

}



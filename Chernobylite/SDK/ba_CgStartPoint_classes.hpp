#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x34 (0x254 - 0x220)
// BlueprintGeneratedClass ba_CgStartPoint.ba_CgStartPoint_C
class Aba_CgStartPoint_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UTextRenderComponent*                  Name;                                              // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x238(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         Active;                                            // 0x240(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor)
	enum class Enum_PlayerStartId                ID;                                                // 0x241(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_PlayerStartId                LastKnownId;                                       // 0x242(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ActiveByDefault;                                   // 0x243(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Custom_Transitional_start_point;                   // 0x244(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1628[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTextureCube*                          Cubemap;                                           // 0x248(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Cubemap_Rotation;                                  // 0x250(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class Aba_CgStartPoint_C* GetDefaultObj();

	TArray<class UObject*> GetObjectsToSave();
	bool HasObjectsToSave();
	bool ShouldUpdateOverlapsOnLoad();
	void SetToFirstAviableName(enum class Enum_PlayerStartId HighestEnum, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, uint8 CallFunc_Add_ByteByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, TArray<class Aba_CgStartPoint_C*>& CallFunc_GetAllActorsOfClass_OutActors, class Aba_CgStartPoint_C* CallFunc_Array_Get_Item, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_Greater_ByteByte_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void ValidateStartPoint();
	void CheckForConflicts(enum class Enum_PlayerStartId Input_ID, bool* Is_Conflictiong, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class Aba_CgStartPoint_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, class Aba_CgStartPoint_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void InvalidateStartPoint();
	void UserConstructionScript(const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_CheckForConflicts_Is_Conflictiong, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue);
	void LoadingFinished();
	void PrepareDataForSave();
	void ExecuteUbergraph_ba_CgStartPoint(int32 EntryPoint);
};

}



#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x73 (0x123 - 0xB0)
// BlueprintGeneratedClass BP_TargetIndicatorComponent.BP_TargetIndicatorComponent_C
class UBP_TargetIndicatorComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTexture2D*                            IndicatorTexture;                                  // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           IndicatorColor;                                    // 0xC0(0x28)(Edit, BlueprintVisible)
	bool                                         ShowDistanceText;                                  // 0xE8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_258C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           DistanceTextColor;                                 // 0xF0(0x28)(Edit, BlueprintVisible)
	bool                                         ShowOffScreen;                                     // 0x118(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ShowAtDistance;                                    // 0x119(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2595[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DistanceToShow;                                    // 0x11C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ChangeIcon;                                        // 0x120(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         HideAtDistance;                                    // 0x121(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ShowIndicatorHeight;                               // 0x122(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UBP_TargetIndicatorComponent_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_TargetIndicatorComponent(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class FName Temp_name_Variable, int32 CallFunc_Array_AddUnique_ReturnValue, int32 Temp_int_Array_Index_Variable, TArray<class UW_CompassMaster_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UW_CompassMaster_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
};

}



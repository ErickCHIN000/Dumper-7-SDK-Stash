#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x8C (0x8C - 0x0)
// UserDefinedStruct S_ItemInspectInfo.S_ItemInspectInfo
struct FS_ItemInspectInfo
{
public:
	class FName                                  ItemID_2_061EE47D4FA1D80811F872AB9E927549;         // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                           SMMeshToInspect_19_E54F2F3A4A046804996AC8858434A9D1; // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                         SKMeshToInspect_22_3993354C4BB7822874A4DF833CAB68EB; // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               InspectLoc_11_C919533D46B727685EFE3C9F971FCF59;    // 0x18(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              InspectRot_14_E485A5024B0ACC12EE97CF91A17DA9F1;    // 0x30(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        InitialFOV_25_D1CBFBEF4502434A72C272A2F65E6EB9;    // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaZoomInFOV_29_F54F70CE4F782759337B80AD7C039082;   // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaZoomOutFOV_32_674ADB6940AA4127283161937BF73B53;  // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseAsInventoryImage_34_12F1BB53493360613AC8989046260606; // 0x54(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShareRenderTargetWithSimilarItems_37_0B8BEAFF45B73C1D0F96CAB2BE367900; // 0x55(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B58[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ActionBarLoc_41_40B718194C33C9157CAE68BEA98AEE8E;  // 0x58(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              ActionBarRot_49_07A6011F4606CAFB778D38AD053DC404;  // 0x70(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        ActionBarFOV_47_F278A4974118C3202BBB4BBA5D8AEF23;  // 0x88(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}



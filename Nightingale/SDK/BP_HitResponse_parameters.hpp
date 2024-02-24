#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x8D (0x8D - 0x0)
// Function BP_HitResponse.BP_HitResponse_C.MatchTagAgainstTable
struct UBP_HitResponse_C_MatchTagAgainstTable_Params
{
public:
	struct FGameplayTag                          Tag;                                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FS_ResponseRow                        Response;                                          // 0x8(0x9)(Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_93B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         Success;                                           // 0x14(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FS_ResponseRow>                PartiallyMatchingRows;                             // 0x18(0x10)(Edit, BlueprintVisible)
	struct FS_ResponseRow                        TableRow;                                          // 0x28(0x9)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_95B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_MatchesTag_ReturnValue;                   // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_964[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_96A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_976[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_MatchesTag_ReturnValue_1;                 // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_MatchesTag_ReturnValue_2;                 // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_97D[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          CallFunc_GetDataTableRowNames_OutRowNames;         // 0x60(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Array_Get_Item;                           // 0x74(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x7C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ResponseRow                        CallFunc_GetDataTableRowFromName_OutRow;           // 0x80(0x9)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x8C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xF1 (0xF1 - 0x0)
// Function BP_HitResponse.BP_HitResponse_C.HitResponse
struct UBP_HitResponse_C_HitResponse_Params
{
public:
	struct FS_HitData                            HitData;                                           // 0x0(0xA1)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	uint8                                        Pad_9D4[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGameplayTag>                  MatchingTags;                                      // 0xA8(0x10)(Edit, BlueprintVisible)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xBC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xC4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9E2[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0xC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0xCC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9E9[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          CallFunc_Array_Get_Item;                           // 0xD0(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FS_ResponseRow                        CallFunc_MatchTagAgainstTable_Response;            // 0xD8(0x9)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9EC[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_MatchTagAgainstTable_Success;             // 0xE4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9EF[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0xE8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB8 (0xB8 - 0x0)
// Function BP_HitResponse.BP_HitResponse_C.MultiCastApplyResponse
struct UBP_HitResponse_C_MultiCastApplyResponse_Params
{
public:
	struct FS_ResponseRow                        Response;                                          // 0x0(0x9)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A2C[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_HitData                            HitData;                                           // 0x10(0xA1)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	uint8                                        Pad_A2E[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB8 (0xB8 - 0x0)
// Function BP_HitResponse.BP_HitResponse_C.ServerApplyResponse
struct UBP_HitResponse_C_ServerApplyResponse_Params
{
public:
	struct FS_ResponseRow                        Response;                                          // 0x0(0x9)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A61[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_HitData                            HitData;                                           // 0x10(0xA1)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	uint8                                        Pad_A63[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x181 (0x181 - 0x0)
// Function BP_HitResponse.BP_HitResponse_C.ExecuteUbergraph_BP_HitResponse
struct UBP_HitResponse_C_ExecuteUbergraph_BP_HitResponse_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_AC3[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ResponseRow                        K2Node_CustomEvent_Response_1;                     // 0x8(0x9)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_AC7[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_HitData                            K2Node_CustomEvent_HitData_1;                      // 0x18(0xA1)(HasGetValueTypeHash)
	uint8                                        Pad_ACD[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ResponseRow                        K2Node_CustomEvent_Response;                       // 0xC0(0x9)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_AD3[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_HitData                            K2Node_CustomEvent_HitData;                        // 0xD0(0xA1)(HasGetValueTypeHash)
	uint8                                        Pad_AD8[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x178(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x180(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB8 (0xB8 - 0x0)
// Function BP_HitResponse.BP_HitResponse_C.AppliedHitResponse__DelegateSignature
struct UBP_HitResponse_C_AppliedHitResponse__DelegateSignature_Params
{
public:
	struct FS_ResponseRow                        Response;                                          // 0x0(0x9)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B19[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_HitData                            HitData;                                           // 0x10(0xA1)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	uint8                                        Pad_B1C[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

}
}



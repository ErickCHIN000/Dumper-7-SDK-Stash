#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x21C8 (0x23E8 - 0x220)
// BlueprintGeneratedClass Chameleon.Chameleon_C
class AChameleon_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UMaterialBillboardComponent*           MaterialBillboard;                                 // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPostProcessComponent*                 InternalPP;                                        // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         Bounding_Box;                                      // 0x238(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         Bleach_Bypass;                                     // 0x240(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Distance_Fog;                                      // 0x241(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Channel_Clamper;                                   // 0x242(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1581[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterial*                             MChannelClamper;                                   // 0x248(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              IChannelClamper;                                   // 0x250(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Channel_Swapper;                                   // 0x258(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Screen_Drops;                                      // 0x259(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Alcohol;                                           // 0x25A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Drug;                                              // 0x25B(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Mosaic;                                            // 0x25C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Pixel_Dissolve;                                    // 0x25D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Blur;                                              // 0x25E(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1595[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterial*                             MBleachBypass;                                     // 0x260(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterial*                             MDistanceFog;                                      // 0x268(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterial*                             MChannelSwapper;                                   // 0x270(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterial*                             MScreenDrops;                                      // 0x278(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterial*                             MAlcohol;                                          // 0x280(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterial*                             MDrug;                                             // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterial*                             MMosaic;                                           // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterial*                             MPixelDissolve;                                    // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterial*                             MBlur;                                             // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Channel_Clamper_Red_Intensity;                     // 0x2A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Channel_Clamper_Green_Intensity;                   // 0x2AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Channel_Clamper_Blue_Intensity;                    // 0x2B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_15B7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              IBleachBypass;                                     // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              IDistanceFog;                                      // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              IChannelSwapper;                                   // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EColorChannels                    Channel_Swapper_Red;                               // 0x2D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	enum class EColorChannels                    Channel_Swapper_Green;                             // 0x2D1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	enum class EColorChannels                    Channel_Swapper_Blue;                              // 0x2D2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_15CA[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              IScreenDrops;                                      // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              IAlcohol;                                          // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              IDrug;                                             // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              IMosaic;                                           // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              IPixelDissolve;                                    // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              IBlur;                                             // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            Screen_Drops_Layer_1_Map;                          // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Screen_Drops_Layer_1_Intensity;                    // 0x310(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Mosaic_Scale;                                      // 0x314(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Alcohol_Speed;                                     // 0x318(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Drug_Speed;                                        // 0x31C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Pixel_Dissolve_Intensity;                          // 0x320(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Blur_Amount;                                       // 0x324(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	bool                                         ASCII;                                             // 0x328(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_15F2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterial*                             MAscii;                                            // 0x330(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              IAscii;                                            // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Colorize;                                          // 0x340(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_15FC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterial*                             MColorize;                                         // 0x348(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              IColorize;                                         // 0x350(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Colorize_Detail;                                   // 0x358(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	bool                                         Comic;                                             // 0x35C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1601[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterial*                             MComic;                                            // 0x360(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              IComic;                                            // 0x368(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Comic_Blend_Color;                                 // 0x370(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Comic_Threshold;                                   // 0x380(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	bool                                         Edge_Detect;                                       // 0x384(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1619[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterial*                             MEdgeDetect;                                       // 0x388(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              IEdgeDetect;                                       // 0x390(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Emboss;                                            // 0x398(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1620[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterial*                             MEmboss;                                           // 0x3A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              IEmboss;                                           // 0x3A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Glitch;                                            // 0x3B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_162E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterial*                             MGlitch;                                           // 0x3B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              IGlitch;                                           // 0x3C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Glitch_Speed;                                      // 0x3C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Glitch_Lines;                                      // 0x3CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Glitch_Blocking;                                   // 0x3D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	bool                                         Monitor_Effects;                                   // 0x3D4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_164F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterial*                             MGrainNLines;                                      // 0x3D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              IGrainNLines;                                      // 0x3E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Monitor_Effects_Line_Count;                        // 0x3E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Monitor_Effects_Intensity_1;                       // 0x3EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Monitor_Effects_Intensity_2;                       // 0x3F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	bool                                         Hard_Emboss;                                       // 0x3F4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1665[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterial*                             MHardEmboss;                                       // 0x3F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              IHardEmboss;                                       // 0x400(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Hue_Panner;                                        // 0x408(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_166F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterial*                             MHuePanner;                                        // 0x410(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              IHuePanner;                                        // 0x418(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Hue_Panner_Speed;                                  // 0x420(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	bool                                         Monochrome;                                        // 0x424(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_167A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterial*                             MMonochrome;                                       // 0x428(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              IMonochrome;                                       // 0x430(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Monochrome_Color;                                  // 0x438(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	bool                                         Radial_Blur;                                       // 0x448(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_168E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterial*                             MRadialBlur;                                       // 0x450(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              IRadialBlur;                                       // 0x458(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Radial_Blur_Width;                                 // 0x460(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	int32                                        Radial_Blur_Samples;                               // 0x464(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	bool                                         Scratches;                                         // 0x468(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_16A0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterial*                             MScratches;                                        // 0x470(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              IScratches;                                        // 0x478(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Screen_Waves;                                      // 0x480(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_16B2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterial*                             MScreenWaves;                                      // 0x488(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              IScreenWaves;                                      // 0x490(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Screen_Waves_X_Tiling;                             // 0x498(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Screen_Waves_Y_Tiling;                             // 0x49C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Monitor_Effects_Distortion_1;                      // 0x4A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Monitor_Effects_Distortion_2;                      // 0x4A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Monitor_Effects_Picture_Scale;                     // 0x4A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Distance_Fog_Near_Color;                           // 0x4AC(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Distance_Fog_Far_Color;                            // 0x4BC(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Distance_Fog_Distance;                             // 0x4CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            Scratches_Distortion_Map;                          // 0x4D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Scratches_Distortion_Amount;                       // 0x4D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Scratches_Color;                                   // 0x4DC(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Screen_Drops_Layer_1_Speed;                        // 0x4EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Screen_Drops_Layer_1_Noise;                        // 0x4F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_16DA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            Screen_Drops_Layer_2_Map;                          // 0x4F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Screen_Drops_Layer_2_Intensity;                    // 0x500(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Screen_Drops_Layer_2_Speed;                        // 0x504(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Screen_Drops_Layer_2_Noise;                        // 0x508(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_16E6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            Screen_Drops_Layer_3_Map;                          // 0x510(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Screen_Drops_Layer_3_Intensity;                    // 0x518(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Screen_Drops_Layer_3_Speed;                        // 0x51C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	bool                                         Invert;                                            // 0x520(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_16EB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterial*                             MInvert;                                           // 0x528(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              IInvert;                                           // 0x530(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Iridescent;                                        // 0x538(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_16F5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterial*                             MIridescent;                                       // 0x540(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              IIridescent;                                       // 0x548(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Iridescent_Iridescence;                            // 0x550(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	bool                                         Kuwahara;                                          // 0x554(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_16FF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterial*                             MKuwahara;                                         // 0x558(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              IKuwahara;                                         // 0x560(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Kuwahara_Amount;                                   // 0x568(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	bool                                         Pulse;                                             // 0x56C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1706[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterial*                             MPulse;                                            // 0x570(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              IPulse;                                            // 0x578(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Pulse_Center_X;                                    // 0x580(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Pulse_Center_Y;                                    // 0x584(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Pulse_Speed;                                       // 0x588(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Pulse_Smoothing;                                   // 0x58C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	bool                                         Squares;                                           // 0x590(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1716[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterial*                             MSquares;                                          // 0x598(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              ISquares;                                          // 0x5A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Squares_Scale;                                     // 0x5A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Squares_Ratio;                                     // 0x5AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Squares_Radius;                                    // 0x5B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Squares_Brightness;                                // 0x5B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	bool                                         Tiles;                                             // 0x5B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1750[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterial*                             MTiles;                                            // 0x5C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              ITiles;                                            // 0x5C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Tiles_Centered;                                    // 0x5D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1758[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Tiles_Count;                                       // 0x5D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	bool                                         TV_Noise;                                          // 0x5D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_175F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterial*                             MTVNoise;                                          // 0x5E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              ITVNoise;                                          // 0x5E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TV_Noise_Contrast;                                 // 0x5F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        TV_Noise_Intensity;                                // 0x5F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_176B[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPostProcessSettings                  Native_Post_Process;                               // 0x600(0x540)(Edit, BlueprintVisible)
	bool                                         LOOK_;                                             // 0xB40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ELOOKPresetsEnum                  LOOK__Presets;                                     // 0xB41(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Circles;                                           // 0xB42(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1773[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterial*                             MCircles;                                          // 0xB48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              ICircles;                                          // 0xB50(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Circles_Ratio;                                     // 0xB58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Circles_Tiling;                                    // 0xB5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	bool                                         Sonar;                                             // 0xB60(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_177F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterial*                             MSonar;                                            // 0xB68(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              ISonar;                                            // 0xB70(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Sonar_Color;                                       // 0xB78(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Sonar_Color_Intensity;                             // 0xB88(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Sonar_Depth;                                       // 0xB8C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Sonar_Wave_Distance;                               // 0xB90(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Sonar_Distortion_Intensity;                        // 0xB94(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Sonar_Sharpness;                                   // 0xB98(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Alcohol_Offset;                                    // 0xB9C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	bool                                         Distance_Distortion;                               // 0xBA0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_179B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterial*                             MDistanceDistortion;                               // 0xBA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              IDistanceDistortion;                               // 0xBB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            Distance_Distortion_Normal;                        // 0xBB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Distance_Distortion_Amount;                        // 0xBC0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Distance_Distortion_Edge_Distance;                 // 0xBC4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Distance_Distortion_Edge_Fading;                   // 0xBC8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Distance_Distortion_Movement_Speed;                // 0xBCC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Distance_Distortion_Movement_Scale;                // 0xBD0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Distance_Distortion_Affected_Brightness;           // 0xBD4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Distance_Distortion_Unaffected_Brightness;         // 0xBD8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	bool                                         Drawing;                                           // 0xBDC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_17B5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterial*                             MDrawing;                                          // 0xBE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              IDrawing;                                          // 0xBE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            Drawing_Paper_Texture;                             // 0xBF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EDrawingNoiseModes                Drawing_Noise_Algorithm;                           // 0xBF8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_17C3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Drawing_Ink_Amount;                                // 0xBFC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Drawing_Liner_Amount;                              // 0xC00(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Drawing_Blending_Color;                            // 0xC04(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	bool                                         Magic_Transitions;                                 // 0xC14(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_17CB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterial*                             MMagicTransitions;                                 // 0xC18(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              IMagicTransitions;                                 // 0xC20(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            Magic_Transitions_Final_Texture;                   // 0xC28(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            Magic_Transitions_Mask_Texture;                    // 0xC30(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Magic_Transitions_Transition_Amount;               // 0xC38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Magic_Transitions_Flashing_Intensity;              // 0xC3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Magic_Transitions_Flashing_Tolerance;              // 0xC40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Magic_Transitions_Flashing_Color;                  // 0xC44(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	bool                                         Screen_Damage;                                     // 0xC54(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_17E7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterial*                             MScreenDamage;                                     // 0xC58(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              IScreenDamage;                                     // 0xC60(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            Screen_Damage_Texture;                             // 0xC68(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Screen_Damage_Intensity;                           // 0xC70(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Screen_Damage_Distortion;                          // 0xC74(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Screen_Damage_Tint;                                // 0xC78(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Screen_Damage_Edge_Size;                           // 0xC88(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Screen_Damage_Fading;                              // 0xC8C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	bool                                         Screen_Decals;                                     // 0xC90(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1802[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterial*                             MScreenDecals;                                     // 0xC98(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              IScreenDecals;                                     // 0xCA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            Screen_Decals_Slot_1_Minus_Texture;                // 0xCA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Screen_Decals_Slot_1_Minus_Distortion;             // 0xCB0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Screen_Decals_Slot_1_Minus_Intensity;              // 0xCB4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Screen_Decals_Slot_1_Minus_Position_X;             // 0xCB8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Screen_Decals_Slot_1_Minus_Position_Y;             // 0xCBC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Screen_Decals_Slot_1_Minus_Rotation;               // 0xCC0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Screen_Decals_Slot_1_Minus_Size;                   // 0xCC4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            Screen_Decals_Slot_2_Minus_Texture;                // 0xCC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Screen_Decals_Slot_2_Minus_Distortion;             // 0xCD0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Screen_Decals_Slot_2_Minus_Intensity;              // 0xCD4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Screen_Decals_Slot_2_Minus_Position_X;             // 0xCD8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Screen_Decals_Slot_2_Minus_Position_Y;             // 0xCDC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Screen_Decals_Slot_2_Minus_Rotation;               // 0xCE0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Screen_Decals_Slot_2_Minus_Size;                   // 0xCE4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            Screen_Decals_Slot_3_Minus_Texture;                // 0xCE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Screen_Decals_Slot_3_Minus_Distortion;             // 0xCF0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Screen_Decals_Slot_3_Minus_Intensity;              // 0xCF4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Screen_Decals_Slot_3_Minus_Position_X;             // 0xCF8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Screen_Decals_Slot_3_Minus_Position_Y;             // 0xCFC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Screen_Decals_Slot_3_Minus_Rotation;               // 0xD00(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Screen_Decals_Slot_3_Minus_Size;                   // 0xD04(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            Screen_Decals_Slot_4_Minus_Texture;                // 0xD08(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Screen_Decals_Slot_4_Minus_Distortion;             // 0xD10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Screen_Decals_Slot_4_Minus_Intensity;              // 0xD14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Screen_Decals_Slot_4_Minus_Position_X;             // 0xD18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Screen_Decals_Slot_4_Minus_Position_Y;             // 0xD1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Screen_Decals_Slot_4_Minus_Rotation;               // 0xD20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Screen_Decals_Slot_4_Minus_Size;                   // 0xD24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	bool                                         Sharpen;                                           // 0xD28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_185C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterial*                             MSharpen;                                          // 0xD30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              ISharpen;                                          // 0xD38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Sharpen_Value;                                     // 0xD40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	bool                                         Toon_Shading;                                      // 0xD44(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	uint8                                        Pad_186B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterial*                             MToonShading;                                      // 0xD48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              IToonShading;                                      // 0xD50(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Toon_Shading_Use_Diffuse_Buffer;                   // 0xD58(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	uint8                                        Pad_187C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Toon_Shading_Details;                              // 0xD5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Toon_Shading_Fading_;                              // 0xD60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Toon_Shading_Size;                                 // 0xD64(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Toon_Shading_Sobel_Strength;                       // 0xD68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	bool                                         Anamorphic_Lens_Flares;                            // 0xD6C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	uint8                                        Pad_188B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterial*                             MAnamorphicLensFlares;                             // 0xD70(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              IAnamorphicLensFlares;                             // 0xD78(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Anamorphic_Lens_Flares_Linear_Color;               // 0xD80(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Anamorphic_Lens_Flares_Exposure_Scale;             // 0xD84(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Anamorphic_Lens_Flares_Threshold;                  // 0xD88(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Anamorphic_Lens_Flares_Intensity;                  // 0xD8C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Anamorphic_Lens_Flares_Steps;                      // 0xD90(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Anamorphic_Lens_Flares_Length;                     // 0xD94(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Anamorphic_Lens_Flares_Tint;                       // 0xD98(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	bool                                         Frost;                                             // 0xDA8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	uint8                                        Pad_18AE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterial*                             MFrost;                                            // 0xDB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              IFrost;                                            // 0xDB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            Frost_Texture;                                     // 0xDC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Frost_Colorization;                                // 0xDC8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Frost_Distortion_Strength;                         // 0xDCC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Frost_Visible_Area;                                // 0xDD0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          ASCII_Color_Multiplier;                            // 0xDD4(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	bool                                         Neon;                                              // 0xDE4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	uint8                                        Pad_18CA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterial*                             MNeon;                                             // 0xDE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              INeon;                                             // 0xDF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Neon_Color;                                        // 0xDF8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Neon_Noise;                                        // 0xE08(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Neon_Power;                                        // 0xE0C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	bool                                         Custom_Depth_Highlighter;                          // 0xE10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	uint8                                        Pad_18DF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterial*                             MCustomDepthHighlighter;                           // 0xE18(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              ICustomDepthHighlighter;                           // 0xE20(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Custom_Depth_Highlighter_Highlight_Color;          // 0xE28(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Custom_Depth_Highlighter_Highlight_Opacity;        // 0xE38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	bool                                         Custom_Depth_Highlighter__Clip_;                   // 0xE3C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	uint8                                        Pad_18F4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterial*                             MCustomDepthHighlighterClip;                       // 0xE40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              ICustomDepthHighlighterClip;                       // 0xE48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Custom_Depth_Highlighter__C__Highlight_Color;      // 0xE50(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Custom_Depth_Highlighter__C__Highlight_Opacity;    // 0xE60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Edge_Detect_Threshold;                             // 0xE64(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Scratches_Noising;                                 // 0xE68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	bool                                         Enabled;                                           // 0xE6C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Unbound;                                           // 0xE6D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_190E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMaterial*>                     AllMaterials;                                      // 0xE70(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	float                                        Screen_Drops_Layer_3_Noise;                        // 0xE80(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Screen_Drops_Diffuse_Color;                        // 0xE84(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Screen_Drops_Splashes_Amount;                      // 0xE94(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Screen_Drops_Splashes_Tiling;                      // 0xE98(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Screen_Drops_Splashes_Intensity;                   // 0xE9C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Screen_Drops_Bump;                                 // 0xEA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	bool                                         TwoD_Transform;                                    // 0xEA4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	uint8                                        Pad_192D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterial*                             M2DTransform;                                      // 0xEA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              I2DTransform;                                      // 0xEB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Kaleidescope;                                      // 0xEB8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	uint8                                        Pad_193A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterial*                             MKaleidescope;                                     // 0xEC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              IKaleidescope;                                     // 0xEC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Letterboxing;                                      // 0xED0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	uint8                                        Pad_1949[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterial*                             MLetterboxing;                                     // 0xED8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              ILetterboxing;                                     // 0xEE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Snow;                                              // 0xEE8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	uint8                                        Pad_1959[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterial*                             MSnow;                                             // 0xEF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              ISnow;                                             // 0xEF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TwoD_Transform_Anchor_Point__X_;                   // 0xF00(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        TwoD_Transform_Anchor_Point__Y_;                   // 0xF04(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        TwoD_Transform_Rotate;                             // 0xF08(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        TwoD_Transform_Pan__X_;                            // 0xF0C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        TwoD_Transform_Pan__Y_;                            // 0xF10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        TwoD_Transform_Scale__X_;                          // 0xF14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        TwoD_Transform_Scale__Y_;                          // 0xF18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	bool                                         TwoD_Transform_Tiled;                              // 0xF1C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	uint8                                        Pad_197A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Kaleidescope_Scale;                                // 0xF20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Kaleidescope_Factor_A;                             // 0xF24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Kaleidescope_Factor_B;                             // 0xF28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_198A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            Letterboxing_Texture;                              // 0xF30(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Letterboxing_Size;                                 // 0xF38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	bool                                         Letterboxing_Horizontal;                           // 0xF3C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	bool                                         Letterboxing_Vertical;                             // 0xF3D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	uint8                                        Pad_1998[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Snow_Amount;                                       // 0xF40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Snow_Distortion;                                   // 0xF44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Snow_Size;                                         // 0xF48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Snow_Speed__X_;                                    // 0xF4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Snow_Speed__Y_;                                    // 0xF50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Drawing_Animation_Speed;                           // 0xF54(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Distance_Fog_Edge_Sharpness;                       // 0xF58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Screen_Drops_Diffuse_Intensity;                    // 0xF5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	bool                                         World_Splash;                                      // 0xF60(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	uint8                                        Pad_1A01[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterial*                             MWorldSplash;                                      // 0xF68(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              IWorldSplash;                                      // 0xF70(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        World_Splash_Distort;                              // 0xF78(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        World_Splash_Smoothness;                           // 0xF7C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        World_Splash_Tiling;                               // 0xF80(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          World_Splash_Color_Tint;                           // 0xF84(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	int32                                        Blur_Samples;                                      // 0xF94(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Frost_Color;                                       // 0xF98(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Comic_PreMultiplier;                               // 0xFA8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Comic_Desaturation;                                // 0xFAC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	bool                                         World_Glitch;                                      // 0xFB0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	uint8                                        Pad_1A1D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterial*                             MWorldGlitch;                                      // 0xFB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              IWorldGlitch;                                      // 0xFC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         World_Glitch_Animated;                             // 0xFC8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	uint8                                        Pad_1A23[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        World_Glitch_Animation_Speed;                      // 0xFCC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        World_Glitch_Distance;                             // 0xFD0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        World_Glitch_Distance_Sharpness;                   // 0xFD4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        World_Glitch_Phase;                                // 0xFD8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        World_Glitch_Power;                                // 0xFDC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	struct FVector                               World_Glitch_Grid_Position;                        // 0xFE0(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	struct FVector                               World_Glitch_Grid_Size;                            // 0xFEC(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	bool                                         Digitize;                                          // 0xFF8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	uint8                                        Pad_1A39[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterial*                             MDigitize;                                         // 0x1000(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              IDigitize;                                         // 0x1008(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Digitize_Cell_Color;                               // 0x1010(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Digitize_Cell_Position;                            // 0x1020(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Digitize_Cell_Position_Over_Time;                  // 0x102C(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Digitize_Distance;                                 // 0x1038(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Digitize_Distance_Sharpness;                       // 0x103C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Digitize_Cell_Size;                                // 0x1040(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Digitize_Cell_Color_Multiplier;                    // 0x1044(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Digitize_Cell_Distortion;                          // 0x1048(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Digitize_Background_Color_Multiplier;              // 0x104C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	bool                                         Alarm;                                             // 0x1050(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	uint8                                        Pad_1A58[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterial*                             MAlarm;                                            // 0x1058(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              IAlarm;                                            // 0x1060(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Alarm_Color;                                       // 0x1068(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Alarm_Speed;                                       // 0x1078(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	bool                                         Sketch;                                            // 0x107C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	uint8                                        Pad_1A68[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterial*                             MSketch;                                           // 0x1080(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              ISketch;                                           // 0x1088(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Sketch_Color;                                      // 0x1090(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Sketch_Background_Color;                           // 0x10A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Sketch_Power;                                      // 0x10B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Sketch_Pattern_Rotation;                           // 0x10B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Sketch_Pattern_Speed;                              // 0x10B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Custom_Depth_Highlighter_Outline_Color;            // 0x10BC(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Custom_Depth_Highlighter_Outline_Opacity;          // 0x10CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Custom_Depth_Highlighter__C__Outline_Color;        // 0x10D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Custom_Depth_Highlighter__C__Outline_Opacity;      // 0x10E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	bool                                         Wired;                                             // 0x10E4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	uint8                                        Pad_1A92[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              IWired;                                            // 0x10E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterial*                             MWired;                                            // 0x10F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Wired_Color;                                       // 0x10F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Wired_Power;                                       // 0x1108(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A9B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAdvancedEffectFeatures               Mosaic_Minus_Advanced;                             // 0x1110(0x34)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1AA2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAdvancedEffectFeatures               Drug_Minus_Advanced;                               // 0x1148(0x34)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1AAC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAdvancedEffectFeatures               Alcohol_Minus_Advanced;                            // 0x1180(0x34)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1AAF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAdvancedEffectFeatures               Pixel_Dissolve_Minus_Advanced;                     // 0x11B8(0x34)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1AB6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAdvancedEffectFeatures               Channel_Clamper_Minus_Advanced;                    // 0x11F0(0x34)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1ABA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAdvancedEffectFeatures               Channel_Swapper_Minus_Advanced;                    // 0x1228(0x34)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1ABE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAdvancedEffectFeatures               Bleach_Bypass_Minus_Advanced;                      // 0x1260(0x34)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1AC3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAdvancedEffectFeatures               Blur_Minus_Advanced;                               // 0x1298(0x34)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1AC5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ASCII_PreMultiplier;                               // 0x12D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1ACC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAdvancedEffectFeatures               ASCII_Minus_Advanced;                              // 0x12D8(0x34)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1AD3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAdvancedEffectFeatures               Colorize_Minus_Advanced;                           // 0x1310(0x34)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1AD8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAdvancedEffectFeatures               Edge_Detect_Minus_Advanced;                        // 0x1348(0x34)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1AE0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAdvancedEffectFeatures               Emboss_Minus_Advanced;                             // 0x1380(0x34)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1AEC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAdvancedEffectFeatures               Hard_Emboss_Minus_Advanced;                        // 0x13B8(0x34)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1AF2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Glitch_Grid_Distortion_Power;                      // 0x13F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Glitch_Grid_Distortion_Size;                       // 0x13F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Glitch_Grid_Distortion_Speed;                      // 0x13F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1AFD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAdvancedEffectFeatures               Glitch_Minus_Advanced;                             // 0x1400(0x34)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B03[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         Monitor_Effects_Tiled;                             // 0x1438(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1B06[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAdvancedEffectFeatures               Monitor_Effects_Minus_Advanced;                    // 0x1440(0x34)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B08[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAdvancedEffectFeatures               Hue_Panner_Minus_Advanced;                         // 0x1478(0x34)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B11[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAdvancedEffectFeatures               Monochrome_Minus_Advanced;                         // 0x14B0(0x34)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B17[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             Radial_Blur_Center;                                // 0x14E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             Radial_Blur_Sample_Offset;                         // 0x14F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	struct FAdvancedEffectFeatures               Radial_Blur_Minus_Advanced;                        // 0x14F8(0x34)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B27[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAdvancedEffectFeatures               Scratches_Minus_Advanced;                          // 0x1530(0x34)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B2D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAdvancedEffectFeatures               Screen_Waves_Minus_Advanced;                       // 0x1568(0x34)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B30[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAdvancedEffectFeatures               Distance_Fog_Minus_Advanced;                       // 0x15A0(0x34)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B32[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAdvancedEffectFeatures               Screen_Drops_Minus_Advanced;                       // 0x15D8(0x34)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B35[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAdvancedEffectFeatures               Invert_Minus_Advanced;                             // 0x1610(0x34)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B37[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAdvancedEffectFeatures               Iridescent_Minus_Advanced;                         // 0x1648(0x34)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B3D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAdvancedEffectFeatures               Kuwahara_Minus_Advanced;                           // 0x1680(0x34)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B41[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAdvancedEffectFeatures               Pulse_Minus_Advanced;                              // 0x16B8(0x34)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B45[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAdvancedEffectFeatures               Squares_Minus_Advanced;                            // 0x16F0(0x34)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B4C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAdvancedEffectFeatures               Tiles_Minus_Advanced;                              // 0x1728(0x34)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B4F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAdvancedEffectFeatures               TV_Noise_Minus_Advanced;                           // 0x1760(0x34)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B54[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAdvancedEffectFeatures               Circles_Minus_Advanced;                            // 0x1798(0x34)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B5A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAdvancedEffectFeatures               Sonar_Minus_Advanced;                              // 0x17D0(0x34)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B5E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAdvancedEffectFeatures               Distance_Distortion_Minus_Advanced;                // 0x1808(0x34)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B64[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAdvancedEffectFeatures               Drawing_Minus_Advanced;                            // 0x1840(0x34)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B6D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAdvancedEffectFeatures               Magic_Transitions_Minus_Advanced;                  // 0x1878(0x34)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B75[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAdvancedEffectFeatures               Screen_Damage_Minus_Advanced;                      // 0x18B0(0x34)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B7E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAdvancedEffectFeatures               Screen_Decals_Minus_Advanced;                      // 0x18E8(0x34)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B81[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAdvancedEffectFeatures               Sharpen_Minus_Advanced;                            // 0x1920(0x34)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B87[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAdvancedEffectFeatures               Toon_Shading_Minus_Advanced;                       // 0x1958(0x34)(Edit, BlueprintVisible, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B8D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAdvancedEffectFeatures               Anamorphic_Lens_Flares_Minus_Advanced;             // 0x1990(0x34)(Edit, BlueprintVisible, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B92[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAdvancedEffectFeatures               Frost_Minus_Advanced;                              // 0x19C8(0x34)(Edit, BlueprintVisible, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B9B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAdvancedEffectFeatures               Neon_Minus_Advanced;                               // 0x1A00(0x34)(Edit, BlueprintVisible, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1BA0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAdvancedEffectFeaturesNoCustomDepth  Custom_Depth_Highlighter_Minus_Advanced;           // 0x1A38(0x2C)(Edit, BlueprintVisible, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1BAD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAdvancedEffectFeaturesNoCustomDepth  Custom_Depth_Highlighter__Clip__Minus_Advanced;    // 0x1A68(0x2C)(Edit, BlueprintVisible, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1BB4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          TwoD_Transform_Background_Color;                   // 0x1A98(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	struct FAdvancedEffectFeatures               TwoD_Transform_Minus_Advanced;                     // 0x1AA8(0x34)(Edit, BlueprintVisible, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1BBE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAdvancedEffectFeatures               Kaleidescope_Minus_Advanced;                       // 0x1AE0(0x34)(Edit, BlueprintVisible, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1BC4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAdvancedEffectFeatures               Letterboxing_Minus_Advanced;                       // 0x1B18(0x34)(Edit, BlueprintVisible, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1BC7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAdvancedEffectFeatures               Snow_Minus_Advanced;                               // 0x1B50(0x34)(Edit, BlueprintVisible, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1BC8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAdvancedEffectFeatures               World_Splash_Minus_Advanced;                       // 0x1B88(0x34)(Edit, BlueprintVisible, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1BCA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAdvancedEffectFeatures               World_Glitch_Minus_Advanced;                       // 0x1BC0(0x34)(Edit, BlueprintVisible, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1BD2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAdvancedEffectFeatures               Digitize_Minus_Advanced;                           // 0x1BF8(0x34)(Edit, BlueprintVisible, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1BD9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAdvancedEffectFeatures               Alarm_Minus_Advanced;                              // 0x1C30(0x34)(Edit, BlueprintVisible, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1BDE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAdvancedEffectFeatures               Sketch_Minus_Advanced;                             // 0x1C68(0x34)(Edit, BlueprintVisible, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1BE4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAdvancedEffectFeatures               Wired_Minus_Advanced;                              // 0x1CA0(0x34)(Edit, BlueprintVisible, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1BE7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Comic_Pattern_Intensity;                           // 0x1CD8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	int32                                        Comic_Pattern_Line_Count;                          // 0x1CDC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Comic_Pattern_Rotation;                            // 0x1CE0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1C50[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAdvancedEffectFeatures               Comic_Minus_Advanced;                              // 0x1CE8(0x34)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1C5B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         Actor_Featurette;                                  // 0x1D20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	uint8                                        Pad_1C5F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterial*                             MActorFeaturette;                                  // 0x1D28(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              IActorFeaturette;                                  // 0x1D30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Actor_Featurette_Background_Multiplier;            // 0x1D38(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Actor_Featurette_Background_Desaturation;          // 0x1D48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Actor_Featurette_Foreground_Multiplier;            // 0x1D4C(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Actor_Featurette_Foreground_Saturation;            // 0x1D5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Actor_Featurette_Blur_Amount;                      // 0x1D60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	int32                                        Actor_Featurette_Blur_Samples;                     // 0x1D64(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	int32                                        Actor_Featurette_Stencil_Mask;                     // 0x1D68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1C8C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAdvancedEffectFeaturesNoCustomDepth  Actor_Featurette_Minus_Advanced;                   // 0x1D70(0x2C)(Edit, BlueprintVisible, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1C92[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         Infected;                                          // 0x1DA0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	uint8                                        Pad_1C9B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterial*                             MInfected;                                         // 0x1DA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              IInfected;                                         // 0x1DB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Infected_Distortion_Amount;                        // 0x1DB8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Infected_Smoothness;                               // 0x1DBC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Infected_Speed;                                    // 0x1DC0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Infected_TransformZ;                               // 0x1DC4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	struct FAdvancedEffectFeatures               Infected_Minus_Advanced;                           // 0x1DC8(0x34)(Edit, BlueprintVisible, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1CB3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         Colored_AO;                                        // 0x1E00(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	uint8                                        Pad_1CB5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterial*                             MColoredAO;                                        // 0x1E08(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              IColoredAO;                                        // 0x1E10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Colored_AO_Color;                                  // 0x1E18(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Colored_AO_Intensity;                              // 0x1E28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1CBE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAdvancedEffectFeatures               Colored_AO_Minus_Advanced;                         // 0x1E30(0x34)(Edit, BlueprintVisible, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1CC2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         Camera_Shake;                                      // 0x1E68(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	uint8                                        Pad_1CC6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterial*                             MCameraShake;                                      // 0x1E70(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              ICameraShake;                                      // 0x1E78(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Camera_Shake_Power__X_;                            // 0x1E80(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Camera_Shake_Power__Y_;                            // 0x1E84(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Camera_Shake_Frequency;                            // 0x1E88(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1CDB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAdvancedEffectFeatures               Camera_Shake_Minus_Advanced;                       // 0x1E90(0x34)(Edit, BlueprintVisible, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1CE0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         Disco_Ball;                                        // 0x1EC8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	uint8                                        Pad_1CE7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterial*                             MDiscoBall;                                        // 0x1ED0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              IDiscoBall;                                        // 0x1ED8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector3DN                            Disco_Ball_WS_Center;                              // 0x1EE0(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Disco_Ball_Color_1;                                // 0x1EEC(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Disco_Ball_Color_2;                                // 0x1EFC(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Disco_Ball_Block_Scale;                            // 0x1F0C(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Disco_Ball_Block_Distribution;                     // 0x1F18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Disco_Ball_Rotation_Speed;                         // 0x1F1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Disco_Ball_Manual_Rotation;                        // 0x1F20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D0F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAdvancedEffectFeatures               Disco_Ball_Minus_Advanced;                         // 0x1F28(0x34)(Edit, BlueprintVisible, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D16[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         Hazy_Lights;                                       // 0x1F60(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	uint8                                        Pad_1D1C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterial*                             MHazyLights;                                       // 0x1F68(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              IHazyLights;                                       // 0x1F70(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2DN                            Hazy_Lights_Move_Speed;                            // 0x1F78(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	struct FVector2DN                            Hazy_Lights_Position;                              // 0x1F80(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	struct FAdvancedEffectFeatures               Hazy_Lights_Minus_Advanced;                        // 0x1F88(0x34)(Edit, BlueprintVisible, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D34[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         Melted_World;                                      // 0x1FC0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	uint8                                        Pad_1D3B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterial*                             MMeltedWorld;                                      // 0x1FC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              IMeltedWorld;                                      // 0x1FD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Melted_World_Size;                                 // 0x1FD8(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Melted_World_Distance;                             // 0x1FE4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Melted_World_Power;                                // 0x1FE8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Melted_World_Sharpness;                            // 0x1FEC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	struct FAdvancedEffectFeatures               Melted_World_Minus_Advanced;                       // 0x1FF0(0x34)(Edit, BlueprintVisible, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D57[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         Selective_Color;                                   // 0x2028(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	uint8                                        Pad_1D5C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterial*                             MSelectiveColor;                                   // 0x2030(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              ISelectiveColor;                                   // 0x2038(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Selective_Color_Mask_Color;                        // 0x2040(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Selective_Color_Hue_Tolerance;                     // 0x2050(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Selective_Color_Saturation_Tolerance;              // 0x2054(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Selective_Color_Value_Tolerance;                   // 0x2058(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D71[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAdvancedEffectFeatures               Selective_Color_Minus_Advanced;                    // 0x2060(0x34)(Edit, BlueprintVisible, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D78[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         Screen_Fire;                                       // 0x2098(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	uint8                                        Pad_1D7B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterial*                             MScreenFire;                                       // 0x20A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              IScreenFire;                                       // 0x20A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Screen_Fire_Color;                                 // 0x20B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Screen_Fire_Distortion_Amount;                     // 0x20C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Screen_Fire_Mask_Contrast;                         // 0x20C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Screen_Fire_Mask_Scale;                            // 0x20C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Screen_Fire_Flame_Tiling;                          // 0x20CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Screen_Fire_Speed;                                 // 0x20D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D9C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAdvancedEffectFeatures               Screen_Fire_Minus_Advanced;                        // 0x20D8(0x34)(Edit, BlueprintVisible, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1DA0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         Haunted;                                           // 0x2110(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	uint8                                        Pad_1DA7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterial*                             MHaunted;                                          // 0x2118(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              IHaunted;                                          // 0x2120(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Haunted_Amount;                                    // 0x2128(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Haunted_Mask_Scale;                                // 0x212C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            Haunted_Texture;                                   // 0x2130(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Haunted_Texture_Scale;                             // 0x2138(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1DC3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAdvancedEffectFeatures               Haunted_Minus_Advanced;                            // 0x2140(0x34)(Edit, BlueprintVisible, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1DC9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         Grid_Cell;                                         // 0x2178(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	uint8                                        Pad_1DCE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterial*                             MGridCell;                                         // 0x2180(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              IGridCell;                                         // 0x2188(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Grid_Cell_Animated;                                // 0x2190(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	uint8                                        Pad_1DDC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Grid_Cell_Animation_Speed;                         // 0x2194(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Grid_Cell_Color;                                   // 0x2198(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Grid_Cell_Void_Color;                              // 0x21A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Grid_Cell_Tiling;                                  // 0x21B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Grid_Cell_Transition_Amount;                       // 0x21BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	bool                                         Lens_Distortion;                                   // 0x21C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	uint8                                        Pad_1DF6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterial*                             MLensDistortion;                                   // 0x21C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              ILensDistortion;                                   // 0x21D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Lens_Distortion_Optic_Refinement;                  // 0x21D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Lens_Distortion_Optic_Size;                        // 0x21DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Lens_Distortion_Optic_Position_X;                  // 0x21E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Lens_Distortion_Optic_Position_Y;                  // 0x21E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            Lens_Distortion_Scope_Texture;                     // 0x21E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Lens_Distortion_Scope_Texture_Scale_X;             // 0x21F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Lens_Distortion_Scope_Texture_Scale_Y;             // 0x21F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	struct FAdvancedEffectFeatures               Lens_Distortion_Minus_Advanced;                    // 0x21F8(0x34)(Edit, BlueprintVisible, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1E32[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAdvancedEffectFeatures               Grid_Cell_Minus_Advanced;                          // 0x2230(0x34)(Edit, BlueprintVisible, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1E37[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         Zone;                                              // 0x2268(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	uint8                                        Pad_1E3D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterial*                             MZone;                                             // 0x2270(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              IZone;                                             // 0x2278(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Zone_Center;                                       // 0x2280(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Zone_Radius;                                       // 0x2290(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Zone_Edge_Hardness;                                // 0x2294(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Zone_Edge_Color;                                   // 0x2298(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Zone_Coverage_Color;                               // 0x22A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	struct FAdvancedEffectFeatures               Zone_Minus_Advanced;                               // 0x22B8(0x34)(Edit, BlueprintVisible, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1E65[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         Pyramid;                                           // 0x22F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	uint8                                        Pad_1E6D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterial*                             MPyramid;                                          // 0x22F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              IPyramid;                                          // 0x2300(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Pyramid_Masked;                                    // 0x2308(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	uint8                                        Pad_1E79[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Pyramid_Background_Color;                          // 0x230C(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Pyramid_Width;                                     // 0x231C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Pyramid_Pan;                                       // 0x2320(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Pyramid_Tile_Amount;                               // 0x2324(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	struct FAdvancedEffectFeatures               Pyramid_Minus_Advanced;                            // 0x2328(0x34)(Edit, BlueprintVisible, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1E86[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         Mojo;                                              // 0x2360(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	uint8                                        Pad_1E89[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterial*                             MMojo;                                             // 0x2368(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              IMojo;                                             // 0x2370(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Mojo_Animated;                                     // 0x2378(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	uint8                                        Pad_1E96[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Mojo_Animation_Speed;                              // 0x237C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            Mojo_Mask;                                         // 0x2380(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            Mojo_Distortion_Map;                               // 0x2388(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Mojo_Distortion_Amount;                            // 0x2390(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Mojo_Color;                                        // 0x2394(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Mojo_Intensity;                                    // 0x23A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Mojo_Phase;                                        // 0x23A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Mojo_Tolerance;                                    // 0x23AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	struct FAdvancedEffectFeatures               Mojo_Minus_Advanced;                               // 0x23B0(0x34)(Edit, BlueprintVisible, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1EB8[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AChameleon_C* GetDefaultObj();

	void Create_Effect_Material_Instance(class UMaterial* Material, class UMaterialInstanceDynamic*& Instance, bool CallFunc_IsValid_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
	void Mojo_Func(bool IsEnabled, float CallFunc_Conv_BoolToFloat_ReturnValue);
	void Pyramid_Func(bool IsEnabled, float CallFunc_Conv_BoolToFloat_ReturnValue);
	void Zone_Func(bool IsEnabled);
	void Lens_Func(bool IsEnabled);
	void Grid_Cell_Func(bool IsEnabled, float CallFunc_Conv_BoolToFloat_ReturnValue);
	void Haunted_Func(bool IsEnabled);
	void Screen_Fire_Func(bool IsEnabled, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2);
	void Selective_Color_Func(bool IsEnabled);
	void Melted_World_Func(bool IsEnabled, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue);
	void Hazy_Lights_Func(bool IsEnabled);
	void Disco_Ball_Func(bool IsEnabled, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z);
	void Camera_Shake_Func(bool IsEnabled);
	void Colored_AO_Func(bool IsEnabled);
	void Infected_Func(bool IsEnabled);
	void Actor_Featurette_Func(bool IsEnabled, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1);
	void Set_Advanced_Effect_Features__No_Custom_Depth_(const struct FAdvancedEffectFeaturesNoCustomDepth& Features, class UMaterial* Material, class UMaterialInstanceDynamic* Dynamic_Material_Instance, TScriptInterface<class IBlendableInterface> CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput, float CallFunc_Conv_BoolToFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, float CallFunc_Conv_StringToFloat_ReturnValue);
	void Set_Advanced_Effect_Features(const struct FAdvancedEffectFeatures& Features, class UMaterial* Material, class UMaterialInstanceDynamic* Dynamic_Material_Instance, TScriptInterface<class IBlendableInterface> CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue_1, float CallFunc_Conv_BoolToFloat_ReturnValue_2, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, float CallFunc_Conv_StringToFloat_ReturnValue);
	void Wired_Func(bool IsEnabled);
	void Sketch_Func(bool IsEnabled);
	void Alarm_Func(bool IsEnabled);
	void Digitize_Func(bool IsEnabled, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue_1);
	void World_Glitch_Func(bool IsEnabled, float CallFunc_Conv_BoolToFloat_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue_1);
	void World_Splash_Func(bool IsEnabled);
	void Snow_Func(bool IsEnabled);
	void Letterboxing_Func(bool IsEnabled, float CallFunc_Conv_BoolToFloat_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue_1);
	void Kaleidescope_Func(bool IsEnabled);
	void TwoD_Transform_Func(bool IsEnabled, float CallFunc_Conv_BoolToFloat_ReturnValue);
	void SetEffectPriority(int32 Priority, class UMaterial* Material, bool CallFunc_NotEqual_IntInt_ReturnValue);
	void ApplyChameleonSettings();
	void Custom_Depth_Highlighter__NC__Func(bool IsEnabled);
	void Custom_Depth_Highlighter_Func(bool IsEnabled);
	void Neon_Func(bool IsEnabled);
	void Frost_Func(bool IsEnabled);
	void Anamorphic_Lens_Flares_Func(bool IsEnabled);
	void Toon_Shading_Func(bool IsEnabled, float CallFunc_Conv_BoolToFloat_ReturnValue);
	void Sharpen_Func(bool IsEnabled);
	void Screen_Decals_Func(bool IsEnabled);
	void Screen_Damage_Func(bool IsEnabled);
	void Magic_Transitions_Func(bool IsEnabled);
	void Drawing_Func(bool IsEnabled, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, float CallFunc_Conv_StringToFloat_ReturnValue);
	void Distance_Distortion_Func(bool Condition);
	void Sonar_Func(bool Condition);
	void Circles_Func(bool Condition);
	void LOOK_Func(bool Condition, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FLOOKCGStruct& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue);
	void TV_Noise_Func(bool& IsEnabled);
	void Tiles_Func(bool& IsEnabled, float CallFunc_Conv_BoolToFloat_ReturnValue);
	void Squares_Func(bool& IsEnabled);
	void Pulse_Func(bool& IsEnabled);
	void Kuwahara_Func(bool& IsEnabled, float CallFunc_Conv_IntToFloat_ReturnValue);
	void Iridescent_Func(bool& IsEnabled, float CallFunc_Subtract_FloatFloat_ReturnValue);
	void Invert_Func(bool& IsEnabled);
	void Hard_Emboss_Func(bool& IsEnabled);
	void Emboss_Func(bool& IsEnabled);
	void Edge_Detect_Func(bool& IsEnabled);
	void ASCII_Func(bool& IsEnabled);
	void Bleach_Func(bool& IsEnabled);
	void Scratches_Func(bool IsEnabled);
	void Distance_Fog_Func(bool IsEnabled);
	void Screen_Waves_Func(bool IsEnabled);
	void Radial_Blur_Func(bool IsEnabled, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, float CallFunc_Conv_IntToFloat_ReturnValue);
	void Monochrome_Func(bool IsEnabled);
	void Hue_Panner_Func(bool IsEnabled);
	void MonitorFX_Func(bool IsEnabled, float CallFunc_Conv_BoolToFloat_ReturnValue);
	void Glitch_Func(bool IsEnabled);
	void Comic_Func(bool IsEnabled, float CallFunc_Conv_IntToFloat_ReturnValue);
	void Colorize_Func(bool Condition);
	void Blur_Func(bool IsEnabled, float CallFunc_Conv_IntToFloat_ReturnValue);
	void Pixel_Dissolve_Func(bool IsEnabled);
	void Drug_Func(bool IsEnabled);
	void Alcohol_Func(bool IsEnabled);
	void Mosaic_Func(bool IsEnabled);
	void Screen_Drops_Func(bool IsEnabled);
	void InitChameleon();
	void Channel_Swapper_Func(bool IsEnabled, float CallFunc_Conv_ByteToFloat_ReturnValue, float CallFunc_Conv_ByteToFloat_ReturnValue_1, float CallFunc_Conv_ByteToFloat_ReturnValue_2);
	void Channel_Clamper_Func(bool& IsEnabled);
	void UserConstructionScript();
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_Chameleon(int32 EntryPoint, class AActor* K2Node_Event_OtherActor, float K2Node_Event_DeltaSeconds);
};

}



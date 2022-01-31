// NAMA     : Muhammad Fauzan
// NIM      : 13220009
// TUGAS    : 3
// PROBLEM  : File Handling

#include <C_CkFileAccess.h>
#include <C_CkBinData.h>

void ChilkatSample(void)
    {
    HCkFileAccess fac;
    HCkBinData jpgData;
    HCkBinData pngData;
    HCkBinData pdfData;
    HCkBinData zipData;

    fac = CkFileAccess_Create();

    //  Mengecek file JPG
    jpgData = CkBinData_Create();
    CkFileAccess_OpenForRead(fac,"qa_data/jpg/starfish.jpg");
    //  8 Bit pertama file signature JPG
    CkFileAccess_FileReadBd(fac,8,jpgData);
    CkFileAccess_FileClose(fac);

    //  JPG hex: FFD8FFE000104A46
    //  JPG qp: =FF=D8=FF=E0=00=10JF
    printf("JPG hex: %s\n",CkBinData_getEncoded(jpgData,"hex"));
    printf("JPG qp: %s\n",CkBinData_getEncoded(jpgData,"qp"));

    //  ----------------------------------------
    //  Mengecek file PNG
    pngData = CkBinData_Create();
    CkFileAccess_OpenForRead(fac,"qa_data/png/anemone.png");
    //  8 Bit pertama file signature PNG
    CkFileAccess_FileReadBd(fac,8,pngData);
    CkFileAccess_FileClose(fac);

    //  PNG hex: 89504E470D0A1A0A
    //  PNG qp: =89PNG=1A=0A
    printf("PNG hex: %s\n",CkBinData_getEncoded(pngData,"hex"));
    printf("PNG qp: %s\n",CkBinData_getEncoded(pngData,"qp"));

    //  A PDF file.
    pdfData = CkBinData_Create();
    CkFileAccess_OpenForRead(fac,"qa_data/pdf/fishing.pdf");
    //  8 Bit pertama file signature PDF
    CkFileAccess_FileReadBd(fac,8,pdfData);
    CkFileAccess_FileClose(fac);

    //  PDF hex: 255044462D312E33
    //  PDF qp: %PDF-1.3
    printf("PDF hex: %s\n",CkBinData_getEncoded(pdfData,"hex"));
    printf("PDF qp: %s\n",CkBinData_getEncoded(pdfData,"qp"));

    CkFileAccess_Dispose(fac);
    CkBinData_Dispose(jpgData);
    CkBinData_Dispose(pngData);
    CkBinData_Dispose(pdfData);

    }

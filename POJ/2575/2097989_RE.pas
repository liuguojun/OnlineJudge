Program ex;
var
  b:Array[1..3000] Of Word;
  a:Array[1..3000] Of Integer;
  m, i, s, t:Integer;
  Flag:Boolean;
Begin
  While not Eof Do Begin
    Read(m);
    For i:=1 to m Do Read(a[i]);
    t :=0;
    Flag := true;
    Repeat
      Inc(t);
      s:= abs(a[t + 1] - a[t]);
      If b[s] = 1 Then Begin
        Writeln('Not jolly');
        flag := False;
        Break;
      End Else b[s] := 1;
    Until (t = m - 1);
    If Flag = True Then Writeln('Jolly');
    For i:=1 to m Do Begin
      a[i] := 0;
      b[i] := 0;
    End;
  End;
End.
